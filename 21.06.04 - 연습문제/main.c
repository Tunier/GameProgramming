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

	printf("\n");
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
void Hol_Jjak_Prt(int _i)
{
	if (_i % 2 == 0)
		printf("%d�� ¦���Դϴ�.\n", _i);
	else
		printf("%d�� Ȧ���Դϴ�.\n", _i);

	printf("\n");
}

// 7�� ���� �Լ�
void Cal(int _i, int _j)
{
	printf("�μ��� ���� %d�Դϴ�.\n", _i + _j);

	printf("�μ��� ���� %d�Դϴ�.\n", _i - _j);

	printf("�μ��� ���� %d�Դϴ�.\n", _i * _j);

	printf("%d�� %d�� ���� ���� %d�Դϴ�.\n", _i, _j, _i / _j);

	printf("\n\n");
}

// 8�� ���� �Լ�
void PlusAll(int _i, int _j)
{
	int max, min, result = 0;
	int ary[1024];

	if (_i > _j)
	{
		max = _i;
		min = _j;
	}

	else
	{
		max = _j;
		min = _i;
	}

	for (int i = 0; i <= max - min; i++)
	{
		ary[i] = min + i;
	}

	for (int i = 0; i <= max - min; i++)
	{
		result += ary[i];
	}

	printf("%d ~ %d������ ��� ������ ���� %d�Դϴ�.", min, max, result);

	printf("\n");
}

// 9�� ���� �Լ�
float Aver(int _i, int _j, int _k)
{
	return ((_i + _j + _k) / 3.f);
}

// 10�� ���� �Լ�
void Tras_Temp(int _i)
{
	printf("���� %d���� ȭ���� %0.2f�� �Դϴ�.\n", _i, ((_i * 9 / 5) + 32.f));
}

// 11�� ���� �Լ�
void Credit_Ptr(int _i)
{
	if (_i >= 90)
		printf("������ %c�Դϴ�.\n", 'A');
	else if (_i >= 80)
		printf("������ %c�Դϴ�.\n", 'B');
	else if (_i >= 70)
		printf("������ %c�Դϴ�.\n", 'C');
	else if (_i >= 60)
		printf("������ %c�Դϴ�.\n", 'D');
	else
		printf("������ %c�Դϴ�.\n", 'F');
}

// 12�� ���� �Լ�
void Gugudan(int _i)
{
	for (int i = 1; i <= 9; i++)
		printf("%d x %d = %d\t", _i, i, _i * i);

	printf("\n");
}

// 13�� ���� �Լ�
float Cal2(int _i, int _j, char _sign)
{
	if (_sign == '+')
		printf("%d %c %d = %d", _i, _sign, _j, _i + _j);
	else if (_sign == '-')
		printf("%d %c %d = %d", _i, _sign, _j, _i - _j);
	else if (_sign == '*')
		printf("%d %c %d = %d", _i, _sign, _j, _i * _j);
	else if (_sign == '/')
		printf("%d %c %d = %d", _i, _sign, _j, _i / _j);
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

	printf("\n");

	// 5. �Ű����� 3���� �Է¹޾� ���� ���� ���ڸ� ��ȯ�ϴ� �Լ��� ����� �̸� main���� ����϶�.
	printf("5�� ���� �Դϴ�.\n");

	printf("���� 3���� �Է��� �ּ���.\n");

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("���� ���� ���ڴ� %d�Դϴ�.\n", MinimunReturn(input, input2, input3));

	printf("\n");

	// 6. �Ű������� ���޵� ������ Ȧ/¦�� ����ϴ� �Լ��� ����� �����϶�. �Ű������� main�� ���� �Է¹ް� �Լ��� �����Ѵ�.
	printf("6�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է��� �ּ���.\n");

	scanf(" %d", &input);

	Hol_Jjak_Prt(input);

	// 7. main���� ���� 2���� �Է¹ް� �̸� �Ű������� �Ͽ� �� ������ ��/��/��/���� ���� ����ϴ� �Լ��� ������.
	//	  ������ ����� ���� �Լ��� �̿��Ͽ� ����ؾ� �Ѵ�.
	printf("7�� ���� �Դϴ�.\n");

	printf("���� 2���� �Է��� �ּ���.\n");

	scanf(" %d %d", &input, &input2);

	Cal(input, input2);

	// 8. �Ű������� ���� 2���� �Է¹޾� �� �� ���̿� �����ϴ� ��� ������ ���� ����ϴ� �Լ��� ������.
	printf("8�� ���� �Դϴ�.\n");

	printf("���� 2���� �Է��� �ּ���.\n");

	scanf(" %d %d", &input, &input2);

	PlusAll(input, input2);

	// 9. �Ű������� �Ǽ� 3���� �Է¹޾� ����� ��ȯ�ϴ� �Լ��� ����� main���� ��ȯ�� ���� ����϶�.
	printf("9�� ���� �Դϴ�.\n");

	printf("���� 3���� �Է��� �ּ���.\n");

	scanf(" %d %d %d", &input, &input2, &input3);
	
	printf("����� %.2f�Դϴ�.\n",Aver(input, input2, input3));

	printf("\n");

	// 10. �����µ��� �Է��ϸ� ȭ���µ��� ��µǵ��� �ϴ� �Լ��� ������.
	printf("10�� ���� �Դϴ�.\n");

	printf("ȭ���µ��� ġȯ�� �����µ��� �Է��� �ּ���.\n");

	scanf(" %d", &input);

	Tras_Temp(input);

	printf("\n");

	// 11. �Ű������� ������ �Է¹޾� �ش� ������ ������ ����ϴ� �Լ��� ������.
	printf("11�� ���� �Դϴ�.\n");

	printf("������ �Է��� �ּ���.\n");

	scanf(" %d", &input);

	Credit_Ptr(input);

	printf("\n");

	// 12. �Ű������� �Է¹��� ������ �������� ����ϴ� �Լ��� �ۼ��϶�.
	printf("12�� ���� �Դϴ�.\n");

	printf("�������� ����� ���ڸ� �Է��� �ּ���.\n");

	scanf(" %d", &input);

	Gugudan(input);

	printf("\n");

	// 13. ���⸦ ������. �Ű������� ����, ������, ���� ������ �Է��� ������
	//	   �Էµ� ������ �������� �Ͽ� ��� ����� ��ȯ�ϴ� �Լ��� ������.
	//     �� �����ڿ� ���� ������ ���� �Լ��� �и��Ͽ� �ۼ��϶�.
	printf("13�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է��� �ּ���.\n");

	scanf(" %d", &input);

	printf("��ȣ�� �Է��� �ּ���.(+ , -, *, /)\n");

	char sign;
	scanf(" %c", &sign);

	printf("���ڸ� �Է��� �ּ���.\n");

	scanf(" %d", &input2);

	Cal2(input, input2, sign);

	return 0;
}