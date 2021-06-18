#pragma once
#include <iostream>

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	void print(int i);
	void print(float f);
	void print(char c);
	// c++������ ���� �̸��� ���� �Լ��� ������
	// �Ű������� �ٸ��ٸ� �ٸ� �Լ��� �ν��Ѵ�.
	// ������ �̸��� �Լ���, �ٸ� �Ű������� �ۼ��Ͽ� ����� ����� �ִ�.

	// �Լ� �����ε�(overloading)
	// ����ڰ� ��� �Ű������� �־����Ŀ� ����
	// Ŭ������ �˾Ƽ� ���� �̸��� ���� �Լ� �߿���
	// �ش� �Ű������� ����ϴ� �Լ��� ��������ش�.

	void print(int i, int j, int k);
	void print(int i, int j);
	void print(int i, float j, char k);
};

