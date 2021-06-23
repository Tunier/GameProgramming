#pragma once
#include "Headers.h"
#include "MyPlayer.h"
#include "CWarrior.h"
#include "CMage.h"
#include "CMonster.h"

void AmStudy()
{
	MyPlayer player;

	while (1)
	{
		printf("����� �κ��丮 ��ȣ�� �Է��ϼ���.\n");
		int input;
		char input2;
		scanf(" %d", &input);

		player.UseMyItem(input);
		/*
			1. ���׹̳� ������ ����� �÷��̾��� �κ��丮�� �߰��ؼ�
			   ���׹̳� ������ ����Ͽ� ȿ���� ����Ǵ��� Ȯ���غ���.

			2. ü��/���������� ������ �ø���.
			   �ű� Ŭ������ ������ �ʰ� ���� Ŭ��������
			   ��ġ���� �ٸ��� �����Ҽ� �ֵ��� ������ ���ĺ���.
		*/
		player.CreatePotion();
	}
}

void battle(CHero* hero, CMonster* mon)
{
	while (true)
	{
		printf("������ �Ͻðڽ��ϱ�?\n");
		printf("1)���� 2) ��ų 3)������\n");
		int input; int dam;
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			dam = hero->Attack();
			mon->Damaged(dam);
			break;
		case 2:
			dam = hero->Skill(1);
			mon->Damaged(dam);
			break;
		case 3:
			break;
		}
		// �÷��̾� �� ����.

		if (mon->hp <= 0)
		{
			hero->LevelUp(mon->exp);
			return;
		}
		// ���Ͱ� ��������� ������ ���� ������� �ʰ� ��Ʋ�� �����.	

		int m_dam = mon->Attack();
		hero->Damaged(m_dam);
		// ���� �� ����.

		if (hero->hp <= 0)
			return;
	}
}


int main()
{
	srand(time(NULL));
	// ������ ���ڸ� ���鶧 ������ �Ǵ� ���� �ٲ��ִ� �Լ�
	// �Ϲ������δ� ���ذ��� ���� �ð����� ��´�.

	// srand�� �ݺ��ؼ� ����ϸ� �Ź� ������ �ٽ� ��� �����ϱ� ������
	// �������� �������� ������ �ʴ´�.
	// ���� ���α׷� ��ü���� �ѹ��� ����Ѵ�.
	// �ѹ��� ����ص� �ٸ� Ŭ�������� ����ϴ� rand�� ������ ��ġ�� ������
	// �� Ŭ�������� srand�� ���� �ʿ�� ����.

	char c[256];
	printf("�÷��̾��� �̸��� �Է��ϼ���.\n");
	scanf(" %s", c);

	printf("�÷��̾��� ������ �����ϼ���.\n1)���� 2)������\n");
	int job;
	scanf(" %d", &job);

	CHero* hero;
	CMonster* monster[5];
	for (int i = 0; i < 5; i++)
	{
		monster[i] = new CMonster;
	}

	if (job == 1)
		hero = new CWarrior(c);
	else if (job == 2)
		hero = new CMage(c);
	else
		hero = new CHero;


	for (int i = 0; (i < 5) && (hero->hp >= 0); i++)
	{
		battle(hero, monster[i]);
	}

	delete hero;
	for (int i = 0; i < 5; i++)
	{
		delete monster[i];
	}
	

	return 0;
}