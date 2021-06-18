#include "MpPotion.h"

MpPotion::MpPotion()
{
	strcpy(item_name, "마력포션");
	strcpy(item_story, "마력을 회복시키는 포션");
	heal_Point = 10;
	cost = 250;
	rarity = 1;
	weight = 0.1f;
	count = 1;
}

MpPotion::MpPotion(int i)
{
	if (i == 1)
	{
		strcpy(item_name, "마력포션");
		strcpy(item_story, "마력을 회복시키는 포션");
	}
	heal_Point = 10 * rarity;
	cost = 250 * rarity;

}

MpPotion::~MpPotion()
{

}

void MpPotion::Item_use(MyPlayer* target)
{
	printf("%s을 마셨습니다.\n", item_name);
	printf("마력이 %d회복되었습니다.\n", heal_Point);
	count--;
	target->mp += heal_Point;
	printf("현재 %s의 마력은 %d입니다.\n", target->name, target->mp);
}
