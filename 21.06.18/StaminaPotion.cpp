#include "StaminaPotion.h"

StaminaPotion::StaminaPotion()
{
	strcpy(item_name, "���׹̳�����");
	strcpy(item_story, "���׹̳ʸ� ȸ����Ű�� ����");
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
	printf("%s�� ���̽��ϴ�.\n", item_name);
	printf("���׹̳ʰ� %dȸ���Ǿ����ϴ�.\n", heal_Point);
	count--;
	target->mp += heal_Point;
	printf("���� %s�� ���׹̳ʴ� %d�Դϴ�.\n", target->name, target->mp);

	if (count > 0)
		printf("%d�� ���Ƚ���� ���ҽ��ϴ�.\n", count);
}
