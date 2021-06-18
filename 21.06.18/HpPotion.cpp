#include "HpPotion.h"

HpPotion::HpPotion()
{
	strcpy(item_name, "체력포션");
	strcpy(item_story, "체력을 회복시키는 포션");
	heal_Point = 15;
	cost = 150;
	rarity = 1;
	weight = 0.1f;
	count = 1;
}

HpPotion::~HpPotion()
{

}

void HpPotion::Item_use(MyPlayer* target) // 포션 사용 함수.
{
	printf("%s을 마셨습니다.\n", item_name);
	printf("체력이 %d회복되었습니다.\n", heal_Point);
	count--;
	target->hp += heal_Point;
	printf("현재 %s의 체력은 %d입니다.\n", target->name, target->hp);
}

void HpPotion::SetGrade(int _rarity)
{
	rarity = _rarity;
	heal_Point = 15 * rarity;
}
