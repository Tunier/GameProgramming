#include "CWarrior.h"
#include "HpPotion.h"
#include "MpPotion.h"

CWarrior::CWarrior()
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
	inventory[1] = new HpPotion;
	for (int i = 2; i < 5; i++)
		inventory[i] = NULL;
}

CWarrior::CWarrior(char _name[256])
{
	strcpy(name, _name);
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
	inventory[1] = new HpPotion;
	for (int i = 2; i < 5; i++)
		inventory[i] = NULL;
}

int CWarrior::Attack()
{
	int Damage = str;

	int Critical = rand() % 100;

	if (Critical < 20)
	{
		Damage *= 2;
		printf("크리티컬! 전사가 칼을 강하게 휘두룹니다!\n");
	}
	else
		printf("전사가 칼로 공격합니다.\n");


	return Damage;
}

int CWarrior::Skill(int i)
{
	if (i == 1)
	{
		if (mp >= 10)
		{
			printf("전사의 스트라이크!\n");
			return str * 3;
		}
		else
		{
			printf("마나가 부족하여 스킬이 불발됩니다.\n");
			return 0;
		}
	}
	else
	{
		printf("해당 스킬이 존재하지 않습니다.\n");
		return 0;
	}
}
