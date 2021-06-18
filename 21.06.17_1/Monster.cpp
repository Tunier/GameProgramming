#include "Monster.h"

Monster::Monster()
{
	// ������ �ʱ� �ɷ�ġ
	atk = 5;
	def = 2;
	hp = 20;
	exp = 10;
	gold = 15;
	deadTime = 10.0f;
}

void Monster::Attack()
{
	printf("���Ͱ� %d��ŭ�� ������ �����մϴ�.\n", atk);
}

void Monster::Damaged(int i)
{
	printf("���Ͱ� %d��ŭ�� ���ظ� �Խ��ϴ�.\n", i - def);
	hp -= i - def;
	// ���� ���������� ���¸�ŭ ���ҽ�Ų ������� ü�¿��� ����.
}

void Monster::Die()
{
	printf("���Ͱ� ���������ϴ�.\n");
	printf("����ġ�� %f ȹ���߽��ϴ�.\n", exp);
	printf("���� %d ȹ���߽��ϴ�.\n", gold);

	rare_drop = 100;
	rareGet();
	// private ����� ������ �Լ��� �ص� Ŭ���� ������ ����� �� �ִ�.
}

void Monster::rareGet()
{
}

