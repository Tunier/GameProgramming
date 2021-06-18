#pragma once
#include "Item.h"

class Potion : public Item
{
public:
	Potion();
	~Potion();

	int heal_Point; // 포션의 회복량
	
	virtual void Item_use(); // 포션 사용.
	virtual void SetGrade(int rarity);
};

