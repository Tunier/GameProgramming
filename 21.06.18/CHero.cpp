#include "CHero.h"
#include "HpPotion.h"
#include "MpPotion.h"



CHero::CHero()
{
	strcpy(name, "�÷��̾�");
	level = 1;
	str = 5;
	dex = 5; 
	wis = 5;
	hp = 20;
	mp = 10;
	exp = 0;
	inventory[0] = new HpPotion;
	for (int i = 1; i < 5; i++)
		inventory[i] = NULL;
}

CHero::CHero(char _name[256])
{
	strcpy(name, _name);
	level = 1;
	str = 5;
	dex = 5;
	wis = 5;
	hp = 20;
	mp = 10;
	exp = 0;
	inventory[0] = new HpPotion;
	for (int i = 1; i < 5; i++)
		inventory[i] = NULL;
}

void CHero::Info()
{
	printf("�̸� : %s\n",name);
	printf("���� : %d\n",level);
	printf("HP : %d\n",hp);
	printf("MP : %d\n",mp);
	printf("�� : %d\n",str);
	printf("�� : %d\n",dex);
	printf("�� : %d\n",wis);
	printf("����ġ : %.2f\n",exp);
}

int CHero::Attack()
{
	int Damage = str;

	int Critical = rand() % 100;
	// �Լ� rand() : ������ ���ڸ� ����� �Լ���
	// ���� ������ ������ ���� ���� ������
	// ��������� ���ڸ� �̿��Ͽ� ���� ���� ������ ���ڷ� �ٲ��� �ʿ䰡 �ִ�.
	// ������ ���ڸ� ������ ������ ���� �̿��ϸ�
	// ������ ������ �����Ҽ� �ִ�.

	if (Critical < 20)
		Damage *= 2;



	return Damage;
}

void CHero::Damaged(int damage)
{

}

void CHero::Die()
{

}

void CHero::LevelUp()
{

}

void CHero::Skill(int i)
{

}
