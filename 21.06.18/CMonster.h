#pragma once
#include "Headers.h"

class CMonster
{
public:
	CMonster();

	int str;
	int hp;
	float exp;

	int Attack();
	void Damaged(int dam);
	void Die();
};

