#include "Potion.h"

Potion::Potion()
{
	strcpy(item_name, "����");
	strcpy(item_story, "��ü�� �� �� ���� ����");
}

Potion::~Potion()
{

}

void Potion::Item_use()
{
	printf("������ ���̽��ϴ�.\n");
	count--;
}

void Potion::SetGrade(int rarity)
{
}
