#pragma once
#include "Potion.h"
#include "MyPlayer.h"

class StaminaPotion : public Potion
{
public:
	StaminaPotion();
	~StaminaPotion();

	virtual void Item_use(MyPlayer* target);
};

