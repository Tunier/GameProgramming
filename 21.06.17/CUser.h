#pragma once
#include <iostream>

class CUser
{
public:
	// Ŭ������ �����ڿ� �Ҹ��ڴ� �ش� Ŭ������ ������ �Ҹ� �ܰ迡��
	// ������ ������ ������ ���ٸ� �����ص��ȴ�.
	CUser();

	int hp;
	int mp;

	void printInfo();
	void useItem(int i);
};

