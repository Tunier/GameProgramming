#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1번문제 함수
void PrtHW()
{
	for (int i = 0; i < 10; i++)
		printf("Hellow World!\n");
}

// 2번문제 함수
void PrtMul(int _i)
{
	for (int i = 1; i <= 10; i++)
		printf("%d\n", _i * i);
}

// 3번문제 함수
void PrtSmaller(int _i)
{
	for (int i = 0; i < 10; i++)
		printf("%d\n", _i - (i + 1));
}

// 4번문제 함수
void Cal(int _i, int _j)
{
	printf("%d + %d = %d\n", _i, _j, _i + _j);

	printf("%d - %d = %d\n", _i, _j, _i - _j);

	printf("%d * %d = %d\n", _i, _j, _i * _j);

	printf("%d / %d = %d\n", _i, _j, _i / _j);
}

// 5번문제 함수
int Add(int _i, int _j)
{
	return _i + _j;
}

// 6번문제 함수
int Sub(int _i, int _j)
{
	return _i - _j;
}

// 7번문제 함수
int Mul(int _i, int _j)
{
	return _i * _j;
}

// 8번문제 함수
int Div(int _i, int _j)
{
	return _i / _j;
}

// 9번문제 함수
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

// 10번문제 함수
float Avg(int _i, int _j, int _k)
{
	return (float)(_i + _j + _k) / 3;
}

// 11번문제 함수
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

	// 1. Hellow World를 출력하는 함수를 만들고 이를 10번 반복해서 실행시켜라.
	printf("1번 문제 입니다.\n");

	PrtHW();

	printf("\n");

	// 2. 매개변수를 입력받아 해당 숫자의 배수를 10개 출력하는 함수를 만들어라.
	printf("2번 문제 입니다.\n");

	printf("숫자를 입력해주세요.\n");

	scanf(" %d", &input);

	PrtMul(input);

	printf("\n");

	// 3. 매개변수를 입력받아 해당 숫자보다 작은 숫자 10개를 출력하는 함수를 만들어라.
	printf("3번 문제 입니다.\n");

	printf("숫자를 입력해주세요.\n");

	scanf(" %d", &input);

	PrtSmaller(input);

	printf("\n");

	// 4. 매개변수 2래를 입력받아 두 수의 합, 차, 곱, 몫을 출력하는 함수를 만들어라.
	printf("4번 문제 입니다.\n");

	printf("숫자를 2개 입력해주세요.\n");

	scanf(" %d %d", &input, &input2);

	Cal(input, input2);

	printf("\n");

	// 5. 매개변수 2개를 입력받아 두 수의 합을 '반환'하는 함수를 만들고 반환받은 값을 이용하여 출력하라.
	printf("5번 문제 입니다.\n");

	printf("숫자를 2개 입력해주세요.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Add(input, input2));

	printf("\n");

	// 6. 매개변수 2개를 입력받아 두 수의 차를 '반환'하는 함수를 만들고 반환받은 값을 이용하여 출력하라.
	printf("6번 문제 입니다.\n");

	printf("숫자를 2개 입력해주세요.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Sub(input, input2));

	printf("\n");

	// 7. 매개변수 2개를 입력받아 두 수의 곱을 '반환'하는 함수를 만들고 반환받은 값을 이용하여 출력하라.
	printf("7번 문제 입니다.\n");

	printf("숫자를 2개 입력해주세요.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Mul(input, input2));

	printf("\n");

	// 8. 매개변수 2개를 입력받아 두 수의 몫을 '반환'하는 함수를 만들고 반환받은 값을 이용하여 출력하라.
	printf("8번 문제 입니다.\n");

	printf("숫자를 2개 입력해주세요.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Div(input, input2));

	printf("\n");

	// 9. 매개변수 2개를 입력받아 두 수 사이에 있는 모든 숫자들의 곱을 '반환' 하는 함수를 만들고,
	//    반환받은 값을 이용하여 이를 출력하라.
	printf("9번 문제 입니다.\n");

	printf("숫자를 2개 입력해주세요.\n");

	scanf(" %d %d", &input, &input2);

	printf("%d\n", Mul_Between(input, input2));

	printf("\n");

	// 10. 매개변수 3개를 입력받아 세 숫자의 평균을 반환하는 함수를 만들어라. 
	//     단, 매개변수는 정수로 입력받으며 반환되는 평균값은 실수로 반환한다.
	printf("10번 문제 입니다.\n");

	printf("숫자를 3개 입력해주세요.\n");

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("%.2f\n", Avg(input, input2, input3));

	printf("\n");

	// 11. 매개변수로 정수 2개, 문자 1개를 입력받아 입력받은 문자에 따라 입력받은 정수 2개의
	//     더하기, 빼기, 곱하기, 나누기의 값을 출력하는 함수를 만들어라.
	//     단, 계산의 결과를 얻는 것은 별도의 함수로 따로 분리해야 하며,
	//     각각의 더하기, 빼기, 곱하기, 나누기 함수는 계산의 결과를 반환해야 한다.
	//     ex) 계산기 함수에서 3, 5, *입력.
	//      -> 계산기 함수에서 다시 곱하기 함수를 호출하면서 3,5를 전달.
	//      -> 곱하기 함수에서 전달받은 3,5를 곱한 결과를 반환.
	//      -> 계산기 함수에서는 곱하기에서 반환한 결과값을 출력.
	printf("11번 문제 입니다.\n");

	printf("숫자를 2개입력후 계산할 부호를 입력해주세요.\n");

	scanf(" %d %d %c", &input, &input2, &c_input);

	printf("%d\n", Cal2(input, input2, c_input));

	printf("\n");

	return 0;
}