#pragma once
#include "Headers.h"
#include "Item.h"

class CHero
{
public:
	CHero();
	CHero(char name[256]);

	char name[256];
	int level;
	int str, dex, wis;
	int hp, mp;
	float exp;
	
	Item* inventory[5];

	void Info();
	int Attack();
	void Damaged(int damage);
	void Die();
	void LevelUp();
	void Skill(int i);
};

