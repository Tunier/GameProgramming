#pragma once
#include "Headers.h"

class MyPlayer; // ��ȣ���������� ���Ͽ� 


class Item
{
public:
	Item();
	~Item();

	char item_name[256]; // �̸�
	int cost; // ���
	char item_story[256]; // ����
	int count; // ����

	float weight; // ����
	int rarity; // ��͵�

	virtual void Info(); // ������ ���� ���.
	virtual void Item_use(MyPlayer* target); // ������ ���.
	virtual void SetGrade(int rarity); // �������� ����� �ٲ�.
};

