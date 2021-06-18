#pragma once
#include "Headers.h"

class MyPlayer; // 상호참조방지를 위하여 


class Item
{
public:
	Item();
	~Item();

	char item_name[256]; // 이름
	int cost; // 비용
	char item_story[256]; // 설명
	int count; // 갯수

	float weight; // 무게
	int rarity; // 희귀도

	virtual void Info(); // 아이템 정보 출력.
	virtual void Item_use(MyPlayer* target); // 아이템 사용.
	virtual void SetGrade(int rarity); // 아이템의 등급을 바꿈.
};

