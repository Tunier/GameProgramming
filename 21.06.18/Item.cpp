#include "Item.h"
#include "MyPlayer.h"

Item::Item()
{
	strcpy(item_name, "테스트아이템");
	cost = 100;
	strcpy(item_story, "설명테스트");
	count = 1;

	weight = 0.5f;
	rarity = 1;
}

Item::~Item()
{

}

void Item::Info()
{
	printf("아이템명 : %s\n", item_name);
	printf("레어도 : %d\n", rarity);
	printf("가격 : %d\n", cost);
	printf("무게 : %f\n", weight);
	printf("보유수 : %d\n", count);
	printf("설명 : %s\n", item_story);

}

void Item::Item_use(MyPlayer* target)
{
	printf("%s에게 아이템을 사용했습니다.\n", target->name);
}

void Item::SetGrade(int rarity)
{
}
