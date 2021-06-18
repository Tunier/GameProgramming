#pragma once
#include "Headers.h"
#include "Item.h"

class MyPlayer
{
public:
	MyPlayer();
	~MyPlayer();

	int hp;
	int mp;
	int stamina;
	char name[256];

	Item* Inventory[5]; // 아이템을 저장하는 아이템 배열

	virtual void UseMyItem(int index); // 몇번 인벤토리에 있는 아이템을 사용할지 매개변수로 받는함수
	virtual void CreatePotion();
};

