#include "StaminaPotion.h"

StaminaPotion::StaminaPotion()
{
	strcpy(item_name, "스테미너포션");
	strcpy(item_story, "스테미너를 회복시키는 포션");
	heal_Point = 20;
	cost = 200;
	rarity = 2;
	weight = 0.1f;
	count = 2;
}

StaminaPotion::~StaminaPotion()
{

}

void StaminaPotion::Item_use(MyPlayer* target)
{
	printf("%s을 마셨습니다.\n", item_name);
	printf("스테미너가 %d회복되었습니다.\n", heal_Point);
	count--;
	target->mp += heal_Point;
	printf("현재 %s의 스테미너는 %d입니다.\n", target->name, target->mp);

	if (count > 0)
		printf("%d번 사용횟수가 남았습니다.\n", count);
}
