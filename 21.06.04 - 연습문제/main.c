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

// 4�� ���� �Լ�
int LargeReturn(int _i, int _j)
{
	if (_i > _j)
		return _i;
	else
		return _j;
}

// 5�� ���� �Լ�
int MinimunReturn(int _i, int _j, int _k)
{
	int mini;
	if (_i < _j)
		mini = _i;
	else
		mini = _j;

	if (mini > _k)
		mini = _k;

	return mini;
}

// 6�� ���� �Լ�
void hol_jjak_Prt(int _i)
{
	if (_i % 2 == 0)
		printf("%d�� ¦���Դϴ�.", _i);
	else
		printf("%d�� Ȧ���Դϴ�.", _i);
}

int main()
{
	int input, input2, input3;

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

	// 4. �Ű������� 2�� �Է¹޾� ���� �� ū ���ڸ� ��ȯ�ϴ� �Լ��� ����� main���� ��ȯ���� ���� ����ϵ��� �϶�.
	printf("4�� ���� �Դϴ�.\n");

	printf("���� 2���� �Է��� �ּ���.\n");


	scanf(" %d %d", &input, &input2);

	printf("���� ū ���� %d�Դϴ�.\n", LargeReturn(input, input2));

	// 5. �Ű����� 3���� �Է¹޾� ���� ���� ���ڸ� ��ȯ�ϴ� �Լ��� ����� �̸� main���� ����϶�.
	printf("5�� ���� �Դϴ�.\n");

	printf("���� 3���� �Է��� �ּ���.\n");

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("���� ���� ���ڴ� %d�Դϴ�.\n",MinimunReturn(input,input2,input3));

	// 6. �Ű������� ���޵� ������ Ȧ/¦�� ����ϴ� �Լ��� ����� �����϶�. �Ű������� main�� ���� �Է¹ް� �Լ��� �����Ѵ�.
	printf("6�� ���� �Դϴ�.\n");
	
	printf("���ڸ� �Է��� �ּ���.\n");
		
	scanf(" %d", &input);

	hol_jjak_Prt(input);

	// 7. main���� ���� 2���� �Է¹ް� �̸� �Ű������� �Ͽ� �� ������ ��/��/��/���� ���� ����ϴ� �Լ��� ������.
	//	  ������ ����� ���� �Լ��� �̿��Ͽ� ����ؾ� �Ѵ�.
	printf("7�� ���� �Դϴ�.\n");

	printf("���� 2���� �Է��� �ּ���.\n");
	

	return 0;
}