#pragma once

// Small class to handle reading memory easier...
class ProcessMemory
{
public:
	HANDLE m_Handle = nullptr;

	~ProcessMemory()
	{
		if (m_Handle)
			CloseHandle(m_Handle);
	}

	ProcessMemory(HANDLE m_ProcessHandle)
	{
		m_Handle = m_ProcessHandle;
	}

	template <typename T>
	__forceinline bool Read(void* m_Address, T* m_Buffer, SIZE_T m_Size)
	{
		return ReadProcessMemory(m_Handle, m_Address, m_Buffer, m_Size, 0);
	}

	template <typename T>
	__forceinline bool Read(uintptr_t m_Address, T* m_Buffer, SIZE_T m_Size)
	{
		return Read<T>(reinterpret_cast<void*>(m_Address), m_Buffer, m_Size);
	}

	template <typename T>
	__forceinline bool Read(void* m_Address, T* m_Buffer)
	{
		return Read<T>(m_Address, m_Buffer, sizeof(T));
	}

	template <typename T>
	__forceinline bool Read(uintptr_t m_Address, T* m_Buffer)
	{
		return Read<T>(reinterpret_cast<void*>(m_Address), m_Buffer, sizeof(T));
	}

	__forceinline bool ReadString(void* m_Address, char* m_Buffer, SIZE_T m_Size)
	{
		if (!Read(m_Address, m_Buffer, m_Size))
			return false;

		m_Buffer[m_Size - 1] = '\0';
		return true;
	}

	__forceinline bool ReadStringPtr(void* m_Address, char* m_Buffer, SIZE_T m_Size)
	{
		void* m_StringAddress = nullptr;
		if (!Read(m_Address, &m_StringAddress))
			return false;

		return ReadString(m_StringAddress, m_Buffer, m_Size);
	}

	__forceinline bool GetModuleInfo(const char* m_Name, uintptr_t* m_Base, uintptr_t* m_Size)
	{
		HMODULE m_Modules[1337];
		DWORD m_Needed = 0x0;

		if (!K32EnumProcessModules(m_Handle, m_Modules, sizeof(m_Modules), &m_Needed))
			return false;

		DWORD m_Count = (m_Needed / sizeof(HMODULE));
		for (DWORD i = 0; m_Count > i; ++i)
		{
			char m_ModuleFileName[MAX_PATH] = { 0 };
			if (!K32GetModuleFileNameExA(m_Handle, m_Modules[i], m_ModuleFileName, sizeof(m_ModuleFileName)))
				continue;

			if (strstr(m_ModuleFileName, m_Name))
			{
				MODULEINFO m_ModuleInfo = { 0 };
				if (!K32GetModuleInformation(m_Handle, m_Modules[i], &m_ModuleInfo, sizeof(MODULEINFO)))
					return false;

				*m_Base = reinterpret_cast<uintptr_t>(m_ModuleInfo.lpBaseOfDll);
				*m_Size = static_cast<uintptr_t>(m_ModuleInfo.SizeOfImage);
				return true;
			}
		}

		return false;
	}
};