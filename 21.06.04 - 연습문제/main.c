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

int main()
{
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

	return 0;
}