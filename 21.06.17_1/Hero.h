#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Hero
{
public:
	Hero();

public:
	int str;
	int dex;
	int wis;
	int hp;
	int mp;
	float exp;
	int gold;

	char name[256];

	virtual void info();
	virtual void attack();
	virtual void skill();
	virtual void damaged(int i);
	// �����Լ�
	// �θ� Ŭ������ �ڽ� Ŭ������ �����ϴ���
	// �Ѹ���� �θ�Ŭ�����̱� ������ �Լ��� �����ϸ�
	// �θ�Ŭ������ ���������Ͽ� ������ �ȴ�.
	// ���� �Ѹ���� �ƴ϶� ���� ����ִ� �����͸� ��������
	// �Լ��� �������ֵ��� �ϱ� ���ؼ� �ش� �Լ���
	// ���빰�� �������� �����ϵ��� '�����Լ�'�� ������ �� �ִ�.
	// �Լ� ���� �տ� virtual�� �ٿ��ָ� �ȴ�.

private:
	void die();
	// ��� �Լ��� �ܺο��� �θ��°� �ƴ϶� ���ο��� ����.
};

