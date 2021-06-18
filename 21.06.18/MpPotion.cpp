#include "MpPotion.h"

MpPotion::MpPotion()
{
	strcpy(item_name, "��������");
	strcpy(item_story, "������ ȸ����Ű�� ����");
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
		strcpy(item_name, "��������");
		strcpy(item_story, "������ ȸ����Ű�� ����");
	}
	heal_Point = 10 * rarity;
	cost = 250 * rarity;

}

MpPotion::~MpPotion()
{

}

void MpPotion::Item_use(MyPlayer* target)
{
	printf("%s�� ���̽��ϴ�.\n", item_name);
	printf("������ %dȸ���Ǿ����ϴ�.\n", heal_Point);
	count--;
	target->mp += heal_Point;
	printf("���� %s�� ������ %d�Դϴ�.\n", target->name, target->mp);
}
