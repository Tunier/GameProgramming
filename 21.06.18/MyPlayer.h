#pragma once
#include "Headers.h"
#include "Item.h"

class MyPlayer
{
public:
	MyPlayer();
	~MyPlayer();

	int hp;
	int mp;
	int stamina;
	char name[256];

	Item* Inventory[5]; // �������� �����ϴ� ������ �迭

	virtual void UseMyItem(int index); // ��� �κ��丮�� �ִ� �������� ������� �Ű������� �޴��Լ�
	virtual void CreatePotion();
};

