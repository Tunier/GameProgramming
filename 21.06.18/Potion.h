#pragma once
#include "Item.h"

class Potion : public Item
{
public:
	Potion();
	~Potion();

	int heal_Point; // ������ ȸ����
	
	virtual void Item_use(); // ���� ���.
	virtual void SetGrade(int rarity);
};

