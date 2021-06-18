#pragma once
#include "Potion.h"
#include "MyPlayer.h"

class MpPotion : public Potion
{
public:
	MpPotion();
	MpPotion(int i);
	~MpPotion();

	virtual void Item_use(MyPlayer* target);
};

