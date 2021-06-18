#pragma once
#include "Potion.h"
#include "MyPlayer.h"

class HpPotion : public Potion
{
public:
	HpPotion();
	~HpPotion();

	virtual void Item_use(MyPlayer* target);
	virtual void SetGrade(int rarity);
};

