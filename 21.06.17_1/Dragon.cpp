#include "Dragon.h"

Dragon::Dragon()
{
	atk = 50;
	def = 30;
	hp = 100;
	exp = 1500;
	gold = 10000;
	
	// rare_drop = 50;
	// ��ӹ��� �ڽ��̶� ������ �θ��� private�� ����� �����Ϳ��� �����Ҽ� ����.

	printf("%f�� �Ŀ� �����˴ϴ�.\n", deadTime);
	// protected�� ����� ����, �Լ��� �ڽĵ� ������ �� �ִ�.
}

void Dragon::Attack()
{
	printf("�巡���� �극���� ���ս��ϴ�.\n");
	printf("���ݷ��� 10���� %d�� �������� �ݴϴ�.\n", atk * 10);
}
