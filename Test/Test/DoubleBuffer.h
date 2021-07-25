#pragma once
#include "Headers.h"

class DoubleBuffer
{
private:
	DoubleBuffer();
public:
	~DoubleBuffer();
private:
	static DoubleBuffer* m_pInstance;
public:
	static DoubleBuffer* GetInstance()
	{
		if (m_pInstance == NULL)
		{
			m_pInstance = new DoubleBuffer;
		}
		return m_pInstance;
	}
	
private:
	HANDLE m_HBuffer[2];

	int m_iBufferIndex;

public:
	void CreateBuffer();
	void WriteBuffer();
	void FlippingBuffer();
	void ClearBuffer();
	void DestroyBuffer();

	bool MyCloseHandel();
};
