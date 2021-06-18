#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "myOperator.h"
#include "Monster.h"
#include "Dragon.h"
#include "Hero.h"
#include "Knight.h"
#include "Mage.h"

int main()
{
	myOperator oper;

	oper.x = 999;

	int a = oper + 10;

	printf("%d\n", a);


	Monster m;

	m.Attack();
	m.Damaged(7);
	m.Die();

	Dragon d;

	d.Attack();
	d.Damaged(80);
	d.Die();

	/*
	d.rareGet();
	*/

	// m.deadTime = 0;
	// Ŭ�������� protected�� ����� ������ ���� �ڽ��� �ƴ� �ܺο����� ����� �� ����.

	printf("������ �����ϼ���. 1)��� 2)������\n");
	int input;
	scanf("%d", &input);

	Hero* hero;
	if (input == 1)
		hero = new Knight;
	else if (input == 2)
		hero = new Mage;
	else
		hero = new Hero;

	printf("��ɾ �Է��ϼ���. 1)���� 2)��ų 3)����\n");
	scanf("%d", &input);
	if (input == 1)
		hero->attack();
	else if (input == 2)
		hero->skill();
	else if (input == 3)
		hero->info();


	return 0;
}