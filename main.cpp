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
    HWND m_GameWindow = FindWindowA(0, "Counter-Strike 2");
    if (!m_GameWindow)
    {
        PRINT_ERROR("[ ! ] Couldn't find 'Counter-Strike 2' window\n");
        return 1;
    }

    DWORD m_GameProcessID = 0x0;
    GetWindowThreadProcessId(m_GameWindow, &m_GameProcessID);
    if (!m_GameProcessID)
    {
        PRINT_ERROR("[ ! ] Couldn't get process id from 'Counter-Strike 2' window\n");
        return 1;
    }

    ProcessMemory m_ProcessMem(OpenProcess(PROCESS_ALL_ACCESS, 0, m_GameProcessID));
    if (!m_ProcessMem.m_Handle)
    {
        PRINT_ERROR("[ ! ] Couldn't OpenProcess to targeted process id\n");
        return 1;
    }

    uintptr_t m_SchemaModule[2] = { 0, 0 };
    if (!m_ProcessMem.GetModuleInfo("schemasystem.dll", &m_SchemaModule[0], &m_SchemaModule[1]))
    {
        PRINT_ERROR("[ ! ] Couldn't get module information for 'schemasystem.dll'\n");
        return 1;
    }

    uintptr_t m_SchemaSystemInterface = 0;
    printf("[ ~ ] Searching for SchemaSystem Interface...\n");

    // Signature scan for interface ptr...
    {
        uint8_t* m_SchemaSystemBytes = new uint8_t[m_SchemaModule[1]];
        if (!m_ProcessMem.Read(m_SchemaModule[0], m_SchemaSystemBytes, m_SchemaModule[1]))
        {
            PRINT_ERROR("[ - ] Failed to read memory...\n");
            return 1;
        }

        // Xref: CSchemaSystem::`vftable'
        uintptr_t m_SignatureAddress = Memory::FindSignature(reinterpret_cast<uintptr_t>(m_SchemaSystemBytes), m_SchemaModule[1], "48 89 05 ? ? ? ? 4C 8D 45 E0 ");
        if (!m_SignatureAddress)
        {
            PRINT_ERROR("[ - ] Signature scan failed, outdated signature?\n");
            return 1;
        }

        m_SchemaSystemInterface = m_SchemaModule[0] + ((m_SignatureAddress + static_cast<uintptr_t>(*reinterpret_cast<int*>(m_SignatureAddress + 0x3)) + 0x7) - reinterpret_cast<uintptr_t>(m_SchemaSystemBytes));
        delete[] m_SchemaSystemBytes;
    }

    SDK::CSchemaSystem m_SchemaSystem = { 0 };
    if (!m_ProcessMem.Read(m_SchemaSystemInterface, &m_SchemaSystem))
    {
        PRINT_ERROR("[ - ] Failed to read SchemaSystem Interface...\n");
        return 1;
    }

    uintptr_t m_SchemaSystemScopeArrayPtr = 0;
    if (!m_ProcessMem.Read(m_SchemaSystemInterface + (offsetof(SDK::CSchemaSystem, m_ScopeArray)), &m_SchemaSystemScopeArrayPtr))
    {
        PRINT_ERROR("[ - ] Failed to read SchemaSystem::ScopeArrayPtr...\n");
        return 1;
    }

    void** m_ScopeArray = new void*[m_SchemaSystem.m_ScopeSize];
    if (!m_ProcessMem.Read(m_SchemaSystemScopeArrayPtr, m_ScopeArray, (m_SchemaSystem.m_ScopeSize * sizeof(void*))))
    {
        PRINT_ERROR("[ - ] Failed to read SchemaSystem::ScopeArray...\n");
        return 1;
    }

    printf("[ ~ ] Dumping starting...\n");
    CreateDirectoryA(DUMP_FOLDER_NAME, 0);

    for (uint64_t i = 0; m_SchemaSystem.m_ScopeSize > i; ++i)
    {
        SDK::CSchemaSystemTypeScope m_SchemaScope = { 0 };
        if (!m_ProcessMem.Read(m_ScopeArray[i], &m_SchemaScope))
            continue;

        uintptr_t m_ClassItterPtr = reinterpret_cast<uintptr_t>(m_SchemaScope.m_ClassItter);
        SDK::CSchemaClassItter m_ClassItter = { 0 };
        if (!m_ClassItterPtr || !m_ProcessMem.Read(m_ClassItterPtr, &m_ClassItter))
            continue;

        printf("[ ~ ] Dumping Schema: %s:\n", m_SchemaScope.m_Name);

        char m_DumpFileName[MAX_PATH] = { 0 };
        sprintf_s(m_DumpFileName, sizeof(m_DumpFileName), DUMP_FOLDER_NAME"\\%s.hpp", m_SchemaScope.m_Name);

        FILE* m_File = fopen(m_DumpFileName, "w");
        if (!m_File)
            continue;

        char m_FileLine[1024] = { 0 };

        while (1)
        {
           
            for (uint32_t c = 0; m_SchemaScope.m_ClassItterSize > c; ++c)
            {
                uintptr_t m_SchemaClassPtr = (m_ClassItterPtr + m_ClassItter.GetClassOffsetByIndex(c));
                if (!m_ProcessMem.Read(m_SchemaClassPtr, &m_SchemaClassPtr) || !m_SchemaClassPtr)
                    continue;

                SDK::CSchemaClass m_SchemaClass = { 0 };
                if (!m_ProcessMem.Read(m_SchemaClassPtr, &m_SchemaClass))
                    continue;

                char m_SchemaClassName[128] = { 0 };
                if (!m_ProcessMem.Read((void*)(m_SchemaClass.m_Name), m_SchemaClassName, sizeof(m_SchemaClassName)))
                    continue;

                printf("\n[ ~ ] Dumping Class: %s:\n", m_SchemaClassName);
                fwrite(m_FileLine, sizeof(char), sprintf_s(m_FileLine, sizeof(m_FileLine), "namespace %s\n{\n", m_SchemaClassName), m_File);

                uintptr_t m_SchemaClassFieldsPtr = reinterpret_cast<uintptr_t>(m_SchemaClass.m_Fields);
                if (m_SchemaClassFieldsPtr)
                {
                    for (uint16_t f = 0; m_SchemaClass.m_Alignment > f; ++f)
                    {
                        SDK::CSchemaField m_SchemaField = { 0 };
                        if (!m_ProcessMem.Read(m_SchemaClassFieldsPtr + sizeof(SDK::CSchemaField) * f, &m_SchemaField))
                            continue;

                        if (!m_SchemaField.m_Type)
                            continue;

                        char m_SchemaFieldName[128] = { 0 };
                        if (!m_ProcessMem.Read((void*)(m_SchemaField.m_Name), m_SchemaFieldName, sizeof(m_SchemaFieldName)))
                            continue;

                        size_t m_SchemaFieldNameSize = strlen(m_SchemaFieldName);
                        bool m_IsNameValid = (m_SchemaFieldNameSize > 0);
                        for (size_t n = 0; m_SchemaFieldNameSize > n; ++n)
                        {
                            if (!isascii(m_SchemaFieldName[n]))
                            {
                                m_IsNameValid = false;
                                break;
                            }
                        }

                        if (!m_IsNameValid)
                            continue;

                        printf("[ + ] %s->%s:: 0x%X\n", m_SchemaClassName, m_SchemaFieldName, m_SchemaField.m_Offset);
                        fwrite(m_FileLine, sizeof(char), sprintf_s(m_FileLine, sizeof(m_FileLine), "\tconstexpr uint32_t %s = 0x%X;\n", m_SchemaFieldName, m_SchemaField.m_Offset), m_File);
                    }
                }

                fwrite(m_FileLine, sizeof(char), sprintf_s(m_FileLine, sizeof(m_FileLine), "}\n\n"), m_File);
            }

            m_ClassItterPtr = reinterpret_cast<uintptr_t>(m_ClassItter.m_Next);
            if (m_ClassItterPtr || !m_ProcessMem.Read(m_ClassItterPtr, &m_ClassItter))
                break;
        }

        printf("\n");
        fclose(m_File);
    }

    delete[] m_ScopeArray;

    return 0;
}
