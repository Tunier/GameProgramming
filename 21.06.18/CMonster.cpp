#include "CMonster.h"

CMonster::CMonster()
{
	str = 5;
	hp = 20;
	exp = 12.f;
}

int CMonster::Attack()
{
	printf("���Ͱ� �����մϴ�.\n");
	return str;
}

void CMonster::Damaged(int dam)
{
	printf("���Ͱ� ���ظ� �Խ��ϴ�.\n");
	hp -= dam;
	if (hp <= 0)
		Die();
}

void CMonster::Die()
{
	printf("���Ͱ� ���������ϴ�.\n");
}
