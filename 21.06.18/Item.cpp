#include "Item.h"
#include "MyPlayer.h"

Item::Item()
{
	strcpy(item_name, "�׽�Ʈ������");
	cost = 100;
	strcpy(item_story, "�����׽�Ʈ");
	count = 1;

	weight = 0.5f;
	rarity = 1;
}

Item::~Item()
{

}

void Item::Info()
{
	printf("�����۸� : %s\n", item_name);
	printf("��� : %d\n", rarity);
	printf("���� : %d\n", cost);
	printf("���� : %f\n", weight);
	printf("������ : %d\n", count);
	printf("���� : %s\n", item_story);

}

void Item::Item_use(MyPlayer* target)
{
	printf("%s���� �������� ����߽��ϴ�.\n", target->name);
}

void Item::SetGrade(int rarity)
{
}
