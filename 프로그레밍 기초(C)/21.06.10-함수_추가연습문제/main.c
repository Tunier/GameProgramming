#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1������ �Լ�
void PrtHW()
{
	for (int i = 0; i < 10; i++)
		printf("Hellow World!\n");
}

// 2������ �Լ�
void PrtMul(int _i)
{
	for (int i = 1; i <= 10; i++)
		printf("%d\n", _i * i);
}

// 3������ �Լ�
void PrtSmaller(int _i)
{
	for (int i = 0; i < 10; i++)
		printf("%d\n", _i - (i + 1));
}

// 4������ �Լ�
void Cal(int _i, int _j)
{
	printf("%d + %d = %d\n", _i, _j, _i + _j);

	printf("%d - %d = %d\n", _i, _j, _i - _j);

	printf("%d * %d = %d\n", _i, _j, _i * _j);

	printf("%d / %d = %d\n", _i, _j, _i / _j);
}

// 5������ �Լ�
int Add(int _i, int _j)
{
	return _i + _j;
}

// 6������ �Լ�
int Sub(int _i, int _j)
{
	return _i - _j;
}

// 7������ �Լ�
int Mul(int _i, int _j)
{
	return _i * _j;
}

// 8������ �Լ�
int Div(int _i, int _j)
{
	return _i / _j;
}

// 9������ �Լ�
int Mul_Between(int _i, int _j)
{
	int result = 0;

	if (_i < _j)
		for (int i = _i; i <= _j; i++)
			result *= i;
	else
		for (int i = _j; i <= _i; i++)
			result *= i;

	return result;
}

// 10������ �Լ�
float Avg(int _i, int _j, int _k)
{
	return (float)(_i + _j + _k) / 3;
}

// 11������ �Լ�
int Cal2(int _i, int _j, char _c)
{
	if (_c == '+')
		return Add(_i, _j);
	
	else if(_c == '-')
		return Sub(_i, _j);
	
	else if (_c == '*')
		return Mul(_i, _j);
	
	else if (_c == '/')
		return Div(_i, _j);
}

int main()
{
	int input, input2, input3;
	char c_input;

	// 1. Hellow World�� ����ϴ� �Լ��� ����� �̸� 10�� �ݺ��ؼ� ������Ѷ�.
	printf("1�� ���� �Դϴ�.\n");

	PrtHW();

	printf("\n");

	// 2. �Ű������� �Է¹޾� �ش� ������ ����� 10�� ����ϴ� �Լ��� ������.
	printf("2�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.\n");

	scanf(" %d", &input);

	PrtMul(input);

	printf("\n");

	// 3. �Ű������� �Է¹޾� �ش� ���ں��� ���� ���� 10���� ����ϴ� �Լ��� ������.
	printf("3�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.\n");

	scanf(" %d", &input);

	PrtSmaller(input);

	printf("\n");

	// 4. �Ű����� 2���� �Է¹޾� �� ���� ��, ��, ��, ���� ����ϴ� �Լ��� ������.
	printf("4�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է����ּ���.\n");

	scanf(" %d %d", &input, &input2);

	Cal(input, input2);

	printf("\n");

	// 5. �Ű����� 2���� �Է¹޾� �� ���� ���� '��ȯ'�ϴ� �Լ��� ����� ��ȯ���� ���� �̿��Ͽ� ����϶�.
	printf("5�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է����ּ���.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Add(input, input2));

	printf("\n");

	// 6. �Ű����� 2���� �Է¹޾� �� ���� ���� '��ȯ'�ϴ� �Լ��� ����� ��ȯ���� ���� �̿��Ͽ� ����϶�.
	printf("6�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է����ּ���.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Sub(input, input2));

	printf("\n");

	// 7. �Ű����� 2���� �Է¹޾� �� ���� ���� '��ȯ'�ϴ� �Լ��� ����� ��ȯ���� ���� �̿��Ͽ� ����϶�.
	printf("7�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է����ּ���.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Mul(input, input2));

	printf("\n");

	// 8. �Ű����� 2���� �Է¹޾� �� ���� ���� '��ȯ'�ϴ� �Լ��� ����� ��ȯ���� ���� �̿��Ͽ� ����϶�.
	printf("8�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է����ּ���.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Div(input, input2));

	printf("\n");

	// 9. �Ű����� 2���� �Է¹޾� �� �� ���̿� �ִ� ��� ���ڵ��� ���� '��ȯ' �ϴ� �Լ��� �����,
	//    ��ȯ���� ���� �̿��Ͽ� �̸� ����϶�.
	printf("9�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է����ּ���.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Mul_Between(input, input2));

	printf("\n");

	// 10. �Ű����� 3���� �Է¹޾� �� ������ ����� ��ȯ�ϴ� �Լ��� ������. 
	//     ��, �Ű������� ������ �Է¹����� ��ȯ�Ǵ� ��հ��� �Ǽ��� ��ȯ�Ѵ�.
	printf("10�� ���� �Դϴ�.\n");

	printf("���ڸ� 3�� �Է����ּ���.\n");

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("%.2f\n", Avg(input, input2, input3));

	printf("\n");

	// 11. �Ű������� ���� 2��, ���� 1���� �Է¹޾� �Է¹��� ���ڿ� ���� �Է¹��� ���� 2����
	//     ���ϱ�, ����, ���ϱ�, �������� ���� ����ϴ� �Լ��� ������.
	//     ��, ����� ����� ��� ���� ������ �Լ��� ���� �и��ؾ� �ϸ�,
	//     ������ ���ϱ�, ����, ���ϱ�, ������ �Լ��� ����� ����� ��ȯ�ؾ� �Ѵ�.
	//     ex) ���� �Լ����� 3, 5, *�Է�.
	//      -> ���� �Լ����� �ٽ� ���ϱ� �Լ��� ȣ���ϸ鼭 3,5�� ����.
	//      -> ���ϱ� �Լ����� ���޹��� 3,5�� ���� ����� ��ȯ.
	//      -> ���� �Լ������� ���ϱ⿡�� ��ȯ�� ������� ���.
	printf("11�� ���� �Դϴ�.\n");

	printf("���ڸ� 2���Է��� ����� ��ȣ�� �Է����ּ���.\n");

	scanf(" %d %d %c", &input, &input2, &c_input);

	printf("%d\n", Cal2(input, input2, c_input));

	printf("\n");

	return 0;
}