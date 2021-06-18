#include "Hero.h"

Hero::Hero()
{
	str = 5;
	dex = 5;
	wis = 5;
	hp = 10;
	mp = 10;
	exp = 0;
	gold = 100;
	strcpy(name, "���");
}

void Hero::info()
{
	printf("ĳ���͸� : %s\n", name);
	printf("ü�� : %d\n���� : %d\n", hp, mp);
	printf("�� : %d\n�� : %d\n�� : %d\n", str, dex, wis);
	printf("����ġ : % f\n�����ݾ� : %d\n", exp, gold);
}

void Hero::attack()
{
	printf("�÷��̾ %d��ŭ�� ������ �����մϴ�.\n", str);
}

void Hero::skill()
{
	printf("��ų�� ����մϴ�.\n");
}

void Hero::damaged(int i)
{
	printf("%d�� ���ظ� �Ծ����ϴ�.\n",i);
	hp -= i;
	printf("���� ���� ä���� %d�Դϴ�.\n", hp);
	
	if (hp <= 0)
		die(); // �������� �Ծ� ü���� 0���ϰ� �Ǹ� �ڵ����� die�Լ��� ȣ���.
}

void Hero::die()
{
	printf("�÷��̾ ����߽��ϴ�.\n");
}
