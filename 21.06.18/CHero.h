#pragma once
#include "Headers.h"
#include "Item.h"

class CHero
{
public:
	CHero();
	CHero(char _name[256]);

	char name[256];
	int level;
	int str, dex, wis;
	int hp, mp;
	int mHp, mMp; // 최대체력, 마력
	float exp;
	
	Item* inventory[5];

	virtual void Info();
	virtual int Attack();
	virtual void Damaged(int damage);
	virtual void Die();
	virtual void LevelUp(int i);
	virtual int Skill(int i);
};

