#include "Potion.h"

Potion::Potion()
{
	strcpy(item_name, "포션");
	strcpy(item_story, "정체를 알 수 없는 포션");
}

Potion::~Potion()
{

}

void Potion::Item_use()
{
	printf("포션을 마셨습니다.\n");
	count--;
}

void Potion::SetGrade(int rarity)
{
}
