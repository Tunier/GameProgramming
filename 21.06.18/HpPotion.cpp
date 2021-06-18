#include "HpPotion.h"

HpPotion::HpPotion()
{
	strcpy(item_name, "ü������");
	strcpy(item_story, "ü���� ȸ����Ű�� ����");
	heal_Point = 15;
	cost = 150;
	rarity = 1;
	weight = 0.1f;
	count = 1;
}

HpPotion::~HpPotion()
{

}

void HpPotion::Item_use(MyPlayer* target) // ���� ��� �Լ�.
{
	printf("%s�� ���̽��ϴ�.\n", item_name);
	printf("ü���� %dȸ���Ǿ����ϴ�.\n", heal_Point);
	count--;
	target->hp += heal_Point;
	printf("���� %s�� ü���� %d�Դϴ�.\n", target->name, target->hp);
}

void HpPotion::SetGrade(int _rarity)
{
	rarity = _rarity;
	heal_Point = 15 * rarity;
}
