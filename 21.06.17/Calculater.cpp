#include "Calculater.h"

Calculater::Calculater()
{

}

Calculater::~Calculater()
{

}

void Calculater::print(int i, int j)
{
	printf("ù��° ���� �ι�° ���� �������� ������ : %d\n", i % j);
}

void Calculater::print(float i, float j)
{
	printf("ù��° ���� �ι�° ���� �������� �� : %d\n", (int)(i / j));
}

void Calculater::print(float i, float j, float k)
{
	printf("�� �Ǽ��� ��� �� : %f\n", (i + j + k) / 3);
}

void Calculater::print(int i, int j, int k)
{
	int maximun;

	if (i > j)
		maximun = i;
	else
		maximun = j;

	if (maximun < k)
		maximun = k;

	printf("�� ������ ���� ū �� : %d\n", maximun);
}

void Calculater::print(int _i, char j)
{
	for (int i = 0; i < _i ; i++)
		printf("%c ", j);
	
	printf("\n");
}
