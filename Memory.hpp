#pragma once

#define BYTE_InRange(x, a, b)	(x >= a && x <= b) 
#define BYTE_GetBits(x)			(BYTE_InRange((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (BYTE_InRange(x,'0','9') ? x - '0' : 0))
#define BYTE_Get(x)				(BYTE_GetBits(x[0]) << 4 | BYTE_GetBits(x[1]))

namespace Memory
{
	__forceinline bool Signature_IsMatch(uint8_t* m_Address, uint8_t* m_Pattern, uint8_t* m_Mask)
	{
		size_t m_Index = 0;
		while (m_Address[m_Index] == m_Pattern[m_Index] || m_Mask[m_Index] == (uint8_t)('?'))
		{
			if (!m_Mask[++m_Index])
				return true;
		}

		return false;
	}

	uintptr_t FindSignature(uintptr_t m_Address, uintptr_t m_Size, const char* m_Signature)
	{
		size_t m_SignatureLength = strlen(m_Signature);

		uint8_t* m_PatternAlloc = new uint8_t[m_SignatureLength >> 1];
		uint8_t* m_MaskAlloc = new uint8_t[m_SignatureLength >> 1];
		uint8_t* m_Pattern = m_PatternAlloc;
		uint8_t* m_Mask = m_MaskAlloc;

		// Run-Time IDA Sig to Sig & Mask
		size_t m_PatternLength = 0;
		while (*m_Signature)
		{
			if (*m_Signature == ' ') m_Signature++;
			if (!*m_Signature) break;

			if (*(uint8_t*)(m_Signature) == (uint8_t)('\?'))
			{
				*m_Pattern++ = 0;
				*m_Mask++ = '?';
				m_Signature += ((*(uint16_t*)(m_Signature) == (uint16_t)('\?\?')) ? 2 : 1);
			}
			else
			{
				*m_Pattern++ = BYTE_Get(m_Signature);
				*m_Mask++ = 'x';
				m_Signature += 2;
			}

			++m_PatternLength;
		}

		// Find Address
		*m_Mask = 0;

		uintptr_t m_ReturnValue = 0;
		for (uintptr_t i = 0; m_Size > i; ++i)
		{
			if (Signature_IsMatch(reinterpret_cast<uint8_t*>(m_Address + i), m_PatternAlloc, m_MaskAlloc))
			{
				m_ReturnValue = (m_Address + i);
				break;
			}
		}

		delete[] m_PatternAlloc;
		delete[] m_MaskAlloc;
		return m_ReturnValue;
	}
}