#include "Mage.h"

Mage::Mage()
{
	str = 5;
	dex = 10;
	wis = 25;
	hp = 20;
	mp = 50;
	exp = 0.f;
	gold = 100;
	strcpy(name, "������");
}

void Mage::attack()
{
	printf("�����̷� �����մϴ�.\n");
}
