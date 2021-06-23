#include "CWarrior.h"
#include "HpPotion.h"
#include "MpPotion.h"

CWarrior::CWarrior()
{
	level = 1;
	str = 15;
	dex = 5;
	wis = 3;
	hp = 40;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;
	inventory[0] = new HpPotion;
	inventory[1] = new HpPotion;
	for (int i = 2; i < 5; i++)
		inventory[i] = NULL;
}

CWarrior::CWarrior(char _name[256])
{
	strcpy(name, _name);
	level = 1;
	str = 15;
	dex = 5;
	wis = 3;
	hp = 40;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;
	inventory[0] = new HpPotion;
	inventory[1] = new HpPotion;
	for (int i = 2; i < 5; i++)
		inventory[i] = NULL;
}

int CWarrior::Attack()
{
	int Damage = str;

	int Critical = rand() % 100;

	if (Critical < 20)
	{
		Damage *= 2;
		printf("ũ��Ƽ��! ���簡 Į�� ���ϰ� �ֵη�ϴ�!\n");
	}
	else
		printf("���簡 Į�� �����մϴ�.\n");


	return Damage;
}

int CWarrior::Skill(int i)
{
	if (i == 1)
	{
		if (mp >= 10)
		{
			printf("������ ��Ʈ����ũ!\n");
			return str * 3;
		}
		else
		{
			printf("������ �����Ͽ� ��ų�� �ҹߵ˴ϴ�.\n");
			return 0;
		}
	}
	else
	{
		printf("�ش� ��ų�� �������� �ʽ��ϴ�.\n");
		return 0;
	}
}
