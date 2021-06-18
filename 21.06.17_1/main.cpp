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
	// 클레스에서 protected로 선언된 데이터 역시 자식이 아닌 외부에서는 사용할 수 없다.

	printf("직업을 선택하세요. 1)기사 2)마법사\n");
	int input;
	scanf("%d", &input);

	Hero* hero;
	if (input == 1)
		hero = new Knight;
	else if (input == 2)
		hero = new Mage;
	else
		hero = new Hero;

	printf("명령어를 입력하세요. 1)공격 2)스킬 3)정보\n");
	scanf("%d", &input);
	if (input == 1)
		hero->attack();
	else if (input == 2)
		hero->skill();
	else if (input == 3)
		hero->info();


	return 0;
}