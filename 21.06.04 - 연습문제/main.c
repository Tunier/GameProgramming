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
void hol_jjak_Prt(int _i)
{
	if (_i % 2 == 0)
		printf("%d는 짝수입니다.", _i);
	else
		printf("%d는 홀수입니다.", _i);
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

	// 5. 매개변수 3개를 입력받아 가장 작은 숫자를 반환하는 함수를 만들고 이를 main에서 출력하라.
	printf("5번 문제 입니다.\n");

	printf("숫자 3개를 입력해 주세요.\n");

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("가장 작은 숫자는 %d입니다.\n",MinimunReturn(input,input2,input3));

	// 6. 매개변수로 전달된 정수의 홀/짝을 출력하는 함수를 만들고 실행하라. 매개변수는 main을 통해 입력받고 함수에 전달한다.
	printf("6번 문제 입니다.\n");
	
	printf("숫자를 입력해 주세요.\n");
		
	scanf(" %d", &input);

	hol_jjak_Prt(input);

	// 7. main에서 숫자 2개를 입력받고 이를 매개변수로 하여 두 숫자의 합/차/곱/몫을 각각 출력하는 함수를 만들어라.
	//	  각각의 계산결과 역시 함수를 이용하여 출력해야 한다.
	printf("7번 문제 입니다.\n");

	printf("숫자 2개를 입력해 주세요.\n");
	

	return 0;
}