#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 1번문제 함수
void Sub()
{
	printf("숫자 2개를 입력해 주세요.\n");

	int i, j;
	scanf(" %d %d", &i, &j);

	if (i > j)
		printf("%d - %d = %d\n", i, j, i - j);
	else
		printf("%d - %d = %d\n", j, i, j - i);

	printf("\n");
}

// 2번 문제 함수
void Pos_Neg()
{
	printf("숫자를 입력해 주세요.\n");

	int i;
	scanf(" %d", &i);

	if (i > 0)
		printf("%d는 양수입니다.\n", i);
	else if (i < 0)
		printf("%d는 음수입니다.\n", i);

	printf("\n");
}

// 3번 문제 함수
void PrintHW(int _i)
{
	for (int i = 0; i < _i; i++)
		printf("HelloWorld!\n");

	printf("\n");
}

// 4번 문제 함수
int LargeReturn(int _i, int _j)
{
	if (_i > _j)
		return _i;
	else
		return _j;
}

// 5번 문제 함수
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

// 6번 문제 함수
void Hol_Jjak_Prt(int _i)
{
	if (_i % 2 == 0)
		printf("%d는 짝수입니다.\n", _i);
	else
		printf("%d는 홀수입니다.\n", _i);

	printf("\n");
}

// 7번 문제 함수
void Cal(int _i, int _j)
{
	printf("두수의 합은 %d입니다.\n", _i + _j);

	printf("두수의 차은 %d입니다.\n", _i - _j);

	printf("두수의 곱은 %d입니다.\n", _i * _j);

	printf("%d를 %d로 나눈 몫은 %d입니다.\n", _i, _j, _i / _j);

	printf("\n\n");
}

// 8번 문제 함수
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

	printf("%d ~ %d까지의 모든 정수의 합은 %d입니다.", min, max, result);

	printf("\n");
}

// 9번 문제 함수
float Aver(int _i, int _j, int _k)
{
	return ((_i + _j + _k) / 3.f);
}

// 10번 문제 함수
void Tras_Temp(int _i)
{
	printf("섭씨 %d도는 화씨로 %0.2f도 입니다.\n", _i, ((_i * 9 / 5) + 32.f));
}

// 11번 문제 함수
void Credit_Ptr(int _i)
{
	if (_i >= 90)
		printf("학점은 %c입니다.\n", 'A');
	else if (_i >= 80)
		printf("학점은 %c입니다.\n", 'B');
	else if (_i >= 70)
		printf("학점은 %c입니다.\n", 'C');
	else if (_i >= 60)
		printf("학점은 %c입니다.\n", 'D');
	else
		printf("학점은 %c입니다.\n", 'F');
}

// 12번 문제 함수
void Gugudan(int _i)
{
	for (int i = 1; i <= 9; i++)
		printf("%d x %d = %d\t", _i, i, _i * i);

	printf("\n");
}

// 13번 문제 함수
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

	// 1. 함수를 이용하여 두 정수를 입력받고 큰 수에서 작은 수를 뺀 결과를 출력해라.
	printf("1번 문제 입니다.\n");
	Sub();

	// 2. 숫자를 입력하면 해당 숫자가 음수인지 양수인지를 출력하는 함수를 만들어라.
	printf("2번 문제 입니다.\n");
	Pos_Neg();

	// 3. Hello World를 출력하되 매개변수로 입력받은 숫자만큼 HelloWorld를 반복하는 함수를 만들어라.
	//	  매개변수는 main을 통해서 입력한다.
	printf("3번 문제 입니다.\n");

	printf("출력을 반복할 횟수를 입력해주세요.\n");

	int prtcont;
	scanf(" %d", &prtcont);

	PrintHW(prtcont);

	// 4. 매개변수를 2개 입력받아 둘중 더 큰 숫자를 반환하는 함수를 만들고 main에서 반환받은 값을 출력하도록 하라.
	printf("4번 문제 입니다.\n");

	printf("숫자 2개를 입력해 주세요.\n");

	scanf(" %d %d", &input, &input2);

	printf("둘중 큰 수는 %d입니다.\n", LargeReturn(input, input2));

	printf("\n");

	// 5. 매개변수 3개를 입력받아 가장 작은 숫자를 반환하는 함수를 만들고 이를 main에서 출력하라.
	printf("5번 문제 입니다.\n");

	printf("숫자 3개를 입력해 주세요.\n");

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("가장 작은 숫자는 %d입니다.\n", MinimunReturn(input, input2, input3));

	printf("\n");

	// 6. 매개변수로 전달된 정수의 홀/짝을 출력하는 함수를 만들고 실행하라. 매개변수는 main을 통해 입력받고 함수에 전달한다.
	printf("6번 문제 입니다.\n");

	printf("숫자를 입력해 주세요.\n");

	scanf(" %d", &input);

	Hol_Jjak_Prt(input);

	// 7. main에서 숫자 2개를 입력받고 이를 매개변수로 하여 두 숫자의 합/차/곱/몫을 각각 출력하는 함수를 만들어라.
	//	  각각의 계산결과 역시 함수를 이용하여 출력해야 한다.
	printf("7번 문제 입니다.\n");

	printf("숫자 2개를 입력해 주세요.\n");

	scanf(" %d %d", &input, &input2);

	Cal(input, input2);

	// 8. 매개변수로 숫자 2개를 입력받아 두 수 사이에 존재하는 모든 정수의 합을 출력하는 함수를 만들어라.
	printf("8번 문제 입니다.\n");

	printf("숫자 2개를 입력해 주세요.\n");

	scanf(" %d %d", &input, &input2);

	PlusAll(input, input2);

	// 9. 매개변수로 실수 3개를 입력받아 평균을 반환하는 함수를 만들고 main에서 반환된 값을 출력하라.
	printf("9번 문제 입니다.\n");

	printf("숫자 3개를 입력해 주세요.\n");

	scanf(" %d %d %d", &input, &input2, &input3);
	
	printf("평균은 %.2f입니다.\n",Aver(input, input2, input3));

	printf("\n");

	// 10. 섭씨온도를 입력하면 화씨온도로 출력되도록 하는 함수를 만들어라.
	printf("10번 문제 입니다.\n");

	printf("화씨온도로 치환할 섭씨온도를 입력해 주세요.\n");

	scanf(" %d", &input);

	Tras_Temp(input);

	printf("\n");

	// 11. 매개변수로 점수를 입력받아 해당 점수의 학점을 출력하는 함수를 만들어라.
	printf("11번 문제 입니다.\n");

	printf("학점을 입력해 주세요.\n");

	scanf(" %d", &input);

	Credit_Ptr(input);

	printf("\n");

	// 12. 매개변수로 입력받은 숫자의 구구단을 출력하는 함수를 작성하라.
	printf("12번 문제 입니다.\n");

	printf("구구단을 출력할 숫자를 입력해 주세요.\n");

	scanf(" %d", &input);

	Gugudan(input);

	printf("\n");

	// 13. 계산기를 만들어라. 매개변수로 정수, 연산자, 정수 순서로 입력을 받으며
	//	   입력된 내용을 바탕으로 하여 계산 결과를 반환하는 함수를 만들어라.
	//     각 연산자에 따른 계산과정 역시 함수로 분리하여 작성하라.
	printf("13번 문제 입니다.\n");

	printf("숫자를 입력해 주세요.\n");

	scanf(" %d", &input);

	printf("부호를 입력해 주세요.(+ , -, *, /)\n");

	char sign;
	scanf(" %c", &sign);

	printf("숫자를 입력해 주세요.\n");

	scanf(" %d", &input2);

	Cal2(input, input2, sign);

	return 0;
}