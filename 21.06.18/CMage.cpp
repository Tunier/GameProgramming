#include "CMage.h"
#include "HpPotion.h"
#include "MpPotion.h"

CMage::CMage()
{
	level = 1;
	str = 15;
	dex = 5;
	wis = 3;
	hp = 40;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;
	inventory[0] = new HpPotion;
	for (int i = 1; i < 5; i++)
		inventory[i] = NULL;
}

CMage::CMage(char name[256])
{
}
