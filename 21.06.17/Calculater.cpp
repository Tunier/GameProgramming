#include "Calculater.h"

Calculater::Calculater()
{

}

Calculater::~Calculater()
{

}

void Calculater::print(int i, int j)
{
	printf("첫번째 수를 두번째 수로 나눴을때 나머지 : %d\n", i % j);
}

void Calculater::print(float i, float j)
{
	printf("첫번째 수를 두번째 수로 나눴을때 몫 : %d\n", (int)(i / j));
}

void Calculater::print(float i, float j, float k)
{
	printf("세 실수의 평균 값 : %f\n", (i + j + k) / 3);
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

	printf("세 정수중 가장 큰 수 : %d\n", maximun);
}

void Calculater::print(int _i, char j)
{
	for (int i = 0; i < _i ; i++)
		printf("%c ", j);
	
	printf("\n");
}
