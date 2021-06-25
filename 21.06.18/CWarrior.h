#pragma once
#include "CHero.h"

class CWarrior : public CHero
{
public:
	CWarrior();
	CWarrior(char name[256]);
	
	virtual int Attack();
	virtual int Skill(int i);
};

