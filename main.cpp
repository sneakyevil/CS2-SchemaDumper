#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <Psapi.h>

#include "Memory.hpp"

#include "CSchemaSystem.hpp"
#include "ProcessMemory.hpp"

#define DUMP_FOLDER_NAME "Classes"

#define PRINT_ERROR(format, ...)  \
{ \
    printf(format, __VA_ARGS__); \
    int m_Dummy = getchar(); \
}

int main()
{
    HWND _GameWindow = FindWindowA(0, "Counter-Strike 2");
    if (!_GameWindow)
    {
        PRINT_ERROR("[ ! ] Couldn't find 'Counter-Strike 2' window\n");
        return 1;
    }

    DWORD _GameProcessID = 0x0;
    GetWindowThreadProcessId(_GameWindow, &_GameProcessID);
    if (!_GameProcessID)
    {
        PRINT_ERROR("[ ! ] Couldn't get process id from 'Counter-Strike 2' window\n");
        return 1;
    }

    ProcessMemory _ProcessMem(OpenProcess(PROCESS_ALL_ACCESS, 0, _GameProcessID));
    if (!_ProcessMem.m_Handle)
    {
        PRINT_ERROR("[ ! ] Couldn't OpenProcess to targeted process id\n");
        return 1;
    }

    uintptr_t _SchemaModule[2] = { 0, 0 };
    if (!_ProcessMem.GetModuleInfo("schemasystem.dll", &_SchemaModule[0], &_SchemaModule[1]))
    {
        PRINT_ERROR("[ ! ] Couldn't get module information for 'schemasystem.dll'\n");
        return 1;
    }

    uintptr_t _SchemaSystemInterface = 0;
    printf("[ ~ ] Searching for SchemaSystem Interface...\n");

    // Signature scan for interface ptr...
    {
        uint8_t* _SchemaSystemBytes = new uint8_t[_SchemaModule[1]];
        if (!_ProcessMem.Read(_SchemaModule[0], _SchemaSystemBytes, _SchemaModule[1]))
        {
            PRINT_ERROR("[ - ] Failed to read memory...\n");
            return 1;
        }

        // Xref: CSchemaSystem::`vftable'
        uintptr_t _SignatureAddress = Memory::FindSignature(reinterpret_cast<uintptr_t>(_SchemaSystemBytes), _SchemaModule[1], "48 89 05 ? ? ? ? 4C 8D 45 E0 ");
        if (!_SignatureAddress)
        {
            PRINT_ERROR("[ - ] Signature scan failed, outdated signature?\n");
            return 1;
        }

        _SchemaSystemInterface = _SchemaModule[0] + ((_SignatureAddress + static_cast<uintptr_t>(*reinterpret_cast<int*>(_SignatureAddress + 0x3)) + 0x7) - reinterpret_cast<uintptr_t>(_SchemaSystemBytes));
        delete[] _SchemaSystemBytes;
    }

    SDK::CSchemaSystem _SchemaSystem = { 0 };
    if (!_ProcessMem.Read(_SchemaSystemInterface, &_SchemaSystem))
    {
        PRINT_ERROR("[ - ] Failed to read SchemaSystem Interface...\n");
        return 1;
    }

    uintptr_t _SchemaSystemScopeArrayPtr = 0;
    if (!_ProcessMem.Read(_SchemaSystemInterface + (offsetof(SDK::CSchemaSystem, m_pScopeArray)), &_SchemaSystemScopeArrayPtr))
    {
        PRINT_ERROR("[ - ] Failed to read SchemaSystem::ScopeArrayPtr...\n");
        return 1;
    }

    void** _ScopeArray = new void*[_SchemaSystem.m_nScopeSize];
    if (!_ProcessMem.Read(_SchemaSystemScopeArrayPtr, _ScopeArray, (_SchemaSystem.m_nScopeSize * sizeof(void*))))
    {
        PRINT_ERROR("[ - ] Failed to read SchemaSystem::ScopeArray...\n");
        return 1;
    }

    printf("[ ~ ] Dumping starting...\n");
    CreateDirectoryA(DUMP_FOLDER_NAME, 0);

    for (uint64_t s = 0; _SchemaSystem.m_nScopeSize > s; ++s)
    {
        SDK::CSchemaSystemTypeScope _SchemaScope = { 0 };
        if (!_ProcessMem.Read(_ScopeArray[s], &_SchemaScope)) {
            continue;
        }

        printf("[ ~ ] Dumping Schema: %s:\n", _SchemaScope.m_szName);

        char _DumpFileName[MAX_PATH] = { 0 };
        sprintf_s(_DumpFileName, sizeof(_DumpFileName), DUMP_FOLDER_NAME"\\%s.hpp", _SchemaScope.m_szName);

        FILE* _File = fopen(_DumpFileName, "w");
        if (!_File) {
            continue;
        }

        SDK::CSchemaDeclaredClassEntry* _DeclaredClassEntries = new SDK::CSchemaDeclaredClassEntry[_SchemaScope.m_nNumDeclaredClasses + 1];
        if (!_ProcessMem.Read(_SchemaScope.m_pDeclaredClasses, _DeclaredClassEntries, (_SchemaScope.m_nNumDeclaredClasses + 1) * sizeof(SDK::CSchemaDeclaredClassEntry))) {
            continue;
        }

        for (uint16_t c = 0; _SchemaScope.m_nNumDeclaredClasses >= c; ++c)
        {
            SDK::CSchemaDeclaredClass _DeclaredClass;
            if (!_ProcessMem.Read(_DeclaredClassEntries[c].m_pDeclaredClass, &_DeclaredClass)) {
                continue;
            }

            SDK::CSchemaClass _Class = { 0 };
            if (!_ProcessMem.Read(_DeclaredClass.m_Class, &_Class)) {
                continue;
            }

            char _ClassName[128] = { 0 };
            if (!_ProcessMem.Read((void*)(_Class.m_szName), _ClassName, sizeof(_ClassName))) {
                continue;
            }

            printf("\n[ ~ ] Dumping Class: %s:\n", _ClassName);
            fprintf(_File, "namespace %s\n{\n", _ClassName);

            uintptr_t _ClassFieldsPtr = reinterpret_cast<uintptr_t>(_Class.m_pFields);
            if (_ClassFieldsPtr)
            {
                for (uint16_t f = 0; _Class.m_nNumFields > f; ++f)
                {
                    SDK::CSchemaField _Field = { 0 };
                    if (!_ProcessMem.Read(_ClassFieldsPtr + sizeof(SDK::CSchemaField) * f, &_Field)) {
                        continue;
                    }

                    if (!_Field.m_pType) {
                        continue;
                    }

                    char _FieldName[128] = { 0 };
                    if (!_ProcessMem.Read((void*)(_Field.m_szName), _FieldName, sizeof(_FieldName))) {
                        continue;
                    }

                    size_t _FieldNameSize = strlen(_FieldName);
                    bool _IsNameValid = (_FieldNameSize > 0);
                    {
                        for (size_t n = 0; _FieldNameSize > n; ++n)
                        {
                            if (!isascii(_FieldName[n]))
                            {
                                _IsNameValid = false;
                                break;
                            }
                        }
                    }
                    if (!_IsNameValid) {
                        continue;
                    }

                    printf("[ + ] %s->%s:: 0x%X\n", _ClassName, _FieldName, _Field.m_nOffset);
                    fprintf(_File, "\tconstexpr uint32_t %s = 0x%X;\n", _FieldName, _Field.m_nOffset);
                }
            }

            fprintf(_File, "}\n\n");
        }

        printf("\n");
        fclose(_File);
    }

    delete[] _ScopeArray;

    return 0;
}
