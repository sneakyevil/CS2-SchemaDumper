#pragma once

// Define member padding...
#ifndef S2_PAD
	#define S2_PAD_INSERT(x, y) x ## y
	#define S2_PAD_DEFINE(x, y) S2_PAD_INSERT(x, y)
	#define S2_PAD(size) char S2_PAD_DEFINE(padding_, __LINE__)[size]
#endif

namespace SDK
{
	class CSchemaField
	{
	public:
		const char* m_Name;
		void* m_Type;
		uint32_t m_Offset;
		uint32_t m_MetadataSize;
		void* m_Metadata;
	};

	class CSchemaClass
	{
	public:
		void* m_This;
		const char* m_Name;
		const char* m_ModuleName;
		uint32_t m_Size;
		uint16_t m_Alignment;

		S2_PAD(0x2);

		uint16_t m_StaticSize;
		uint16_t m_MetadataSize;

		S2_PAD(0x4);

		CSchemaField* m_Fields;

		__forceinline CSchemaField* GetFieldByIndex(int m_Index) { return &m_Fields[m_Index]; }
	};

	class CSchemaClassItter
	{
	public:
		CSchemaClassItter* m_Next;
		S2_PAD(0x18);

		__forceinline uintptr_t GetClassOffsetByIndex(uintptr_t m_Index)
		{
			return (sizeof(CSchemaClassItter) + m_Index * 0x18);
		}
	};

	// Source2 Classes
	class CSchemaSystemTypeScope
	{
	public:
		void* m_This;
		char m_Name[0x100];

		S2_PAD(0x484);

		uint32_t m_ClassItterSize;

		S2_PAD(0x28);

		CSchemaClassItter* m_ClassItter;
	};

	class CSchemaSystem
	{
	public:
		void* m_This;

		S2_PAD(0x188);

		uint64_t m_ScopeSize;
		CSchemaSystemTypeScope** m_ScopeArray;

		__forceinline CSchemaSystemTypeScope* GetScopeByIndex(uint64_t m_Index)
		{
			return m_ScopeArray[m_Index];
		}
	};
}