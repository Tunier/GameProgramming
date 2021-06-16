#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int input = 0, input2 = 0;
	int sum = 0;

	// 1. 1부터 10까지의 숫자를 반복문을 이용하여 출력해라.
	printf("1번 문제 입니다.\n");

	for (int i = 0; i < 10; i++)
		printf("%d ", i + 1);

	printf("\n");

	// 2. 숫자를 입력받아 0부터 입력한 숫자까지를 출력하라.
	printf("2번 문제 입니다.\n");

	printf("숫자를 입력해주세요.\n");

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

	printf("숫자를 입력해주세요.\n");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0)
			printf("%d ", i);

	printf("\n\n");

	// 7. 100 이하의 정수 중에서 입력한 숫자의 배수를 제외하고 모두 출력하라.
	printf("7번 문제 입니다.\n");

	printf("숫자를 입력해주세요.\n");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0) {}
		else
			printf("%d ", i);

	printf("\n\n");

	// 8. 100 이하의 정수 중에서 3의 배수이면서 5의 배수인 숫자를 출력하라.
	printf("8번 문제 입니다.\n");

	for (int i = 1; i <= 100; i++)
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%d ", i);

	printf("\n\n");

	// 9. 숫자를 입력받아 해당 숫자의 배수를 10개 출력하라.
	printf("9번 문제 입니다.\n");

	printf("숫자를 입력해주세요.\n");

	scanf(" %d", &input);

	for (int i = 0; i < 10; i++)
		printf("%d ", input * (i + 1));

	printf("\n\n");

	// 10. 숫자를 입력받아 1부터 해당 숫자까지의 모든 수의 합을 출력하라.
	printf("10번 문제 입니다.\n");

	printf("숫자를 입력해주세요.\n");

	scanf(" %d", &input);

	for (int i = 1; i <= input; i++)
		sum += i;

	printf("1부터 %d까지의 총 합은 %d\n", input, sum);

	printf("\n");

	// 11. 숫자 2개를 입력받아 두 수 사이의 숫자들의 합을 출력하라.
	printf("11번 문제 입니다.\n");

	printf("숫자를 2개 입력해주세요.\n");

	scanf(" %d %d", &input, &input2);

	sum = 0;

	if (input < input2)
		for (int i = input; i <= input2; i++)
			sum += i;
	else
		for (int i = input2; i <= input; i++)
			sum += i;

	printf("두 수 사이의 숫자들의 합은 %d\n", sum);

	printf("\n");

	// 12. 숫자 0을 입력할 때까지 계속 숫자를 입력받고, 0을 입력하면 여태까지 입력했던 모든 숫자들의 합을 출력하라.
	printf("12번 문제 입니다.\n");

	sum = 0;

	while (1)
	{
		printf("숫자를 입력해주세요.\n");

		scanf(" %d", &input);

		sum += input;

		if (input == 0)
		{
			printf("입력했던 모든 숫자들의 합은 %d",sum);
			break;
		}
	}


	return 0;
}