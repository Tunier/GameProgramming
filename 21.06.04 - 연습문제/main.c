#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 1������ �Լ�
void Sub()
{
	printf("���� 2���� �Է��� �ּ���.\n");

	int i, j;
	scanf(" %d %d", &i, &j);

	if (i > j)
		printf("%d - %d = %d\n", i, j, i - j);
	else
		printf("%d - %d = %d\n", j, i, j - i);

	printf("\n");
}

// 2�� ���� �Լ�
void Pos_Neg()
{
	printf("���ڸ� �Է��� �ּ���.\n");

	int i;
	scanf(" %d", &i);

	if (i > 0)
		printf("%d�� ����Դϴ�.\n", i);
	else if (i < 0)
		printf("%d�� �����Դϴ�.\n", i);

	printf("\n");
}

// 3�� ���� �Լ�
void PrintHW(int _i)
{
	for (int i = 0; i < _i; i++)
		printf("HelloWorld!\n");
}

int main()
{
	// 1. �Լ��� �̿��Ͽ� �� ������ �Է¹ް� ū ������ ���� ���� �� ����� ����ض�.
	printf("1�� ���� �Դϴ�.\n");
	Sub();

	// 2. ���ڸ� �Է��ϸ� �ش� ���ڰ� �������� ��������� ����ϴ� �Լ��� ������.
	printf("2�� ���� �Դϴ�.\n");
	Pos_Neg();

	// 3. Hello World�� ����ϵ� �Ű������� �Է¹��� ���ڸ�ŭ HelloWorld�� �ݺ��ϴ� �Լ��� ������.
	//	  �Ű������� main�� ���ؼ� �Է��Ѵ�.
	printf("3�� ���� �Դϴ�.\n");
	
	printf("����� �ݺ��� Ƚ���� �Է����ּ���.\n");
	int prtcont;
	scanf(" %d", &prtcont);

	PrintHW(prtcont);

	return 0;
}