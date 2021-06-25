#include "CMonster.h"

CMonster::CMonster()
{
	str = 5;
	hp = 20;
	exp = 12.f;
}

int CMonster::Attack()
{
	printf("몬스터가 공격합니다.\n");
	return str;
}

void CMonster::Damaged(int dam)
{
	printf("몬스터가 피해를 입습니다.\n");
	hp -= dam;
	if (hp <= 0)
		Die();
}

void CMonster::Die()
{
	printf("몬스터가 쓰러졌습니다.\n");
}
