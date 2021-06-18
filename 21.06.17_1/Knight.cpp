#include "Knight.h"

Knight::Knight()
{
	str = 25;
	dex = 15;
	wis = 5;
	hp = 50;
	mp = 20;
	exp = 0.f;
	gold = 100;
	strcpy(name, "기사");
}

void Knight::attack()
{
	printf("검으로 공격합니다.\n");
}
