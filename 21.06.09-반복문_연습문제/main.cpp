#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int input;

	// 1. 1부터 10까지의 숫자를 반복문을 이용하여 출력해라.
	printf("1번 문제 입니다.\n");

	for (int i = 0; i < 10; i++)
		printf("%d ", i + 1);

	printf("\n");

	// 2. 숫자를 입력받아 0부터 입력한 숫자까지를 출력하라.
	printf("2번 문제 입니다.\n");

	printf("숫자를 입력해주세요.");

	scanf(" %d", &input);

	for (int i = 0; i < input; i++)
		printf("%d ", i);

	// 3. 100 이하의 정수 중에서 짝수만 출력하라.
	printf("3번 문제 입니다.\n");

	for (int i = 1; i <= 100; i++)
		if (i % 2 == 0)
			printf("%d ", i);

	printf("\n\n");

	// 4. 100 이하의 정수 중에서 홀수만 출력하라.
	printf("4번 문제 입니다.\n");

	for (int i = 1; i <= 100; i++)
		if (i % 2 == 1)
			printf("%d ", i);

	printf("\n\n");

	// 5. 100 이하의 양수 중에서 3의 배수만을 출력하라.
	printf("5번 문제 입니다.\n");

	for (int i = 1; i <= 100; i++)
		if (i % 3 == 0)
			printf("%d ", i);

	printf("\n\n");

	// 6. 100 이하의 정수 중에서 입력한 숫자의 배수만 출력하라.
	printf("6번 문제 입니다.\n");

	printf("숫자를 입력해주세요.");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0)
			printf("%d ", i);

	printf("\n\n");

	// 7. 100 이하의 정수 중에서 입력한 숫자의 배수를 제외하고 모두 출력하라.
	printf("7번 문제 입니다.\n");

	printf("숫자를 입력해주세요.");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0) {}
		else
			printf("%d ", i);
			
	printf("\n\n");

	





	return 0;
}