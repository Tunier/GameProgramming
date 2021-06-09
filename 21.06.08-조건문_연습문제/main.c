#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int input, input2, input3, input4;
	float finput, finput2, finput3;
	int maximum, minimum;

	// 1. 숫자를 입력받아 양수인지, 음수인지 출력하자.
	printf("1번 문제 입니다.\n");

	printf("숫자를 입력해 주세요.\n");

	scanf(" %d", &input);

	if (input > 0)
		printf("%d는 양수입니다.\n", input);
	else if (input == 0)
		printf("%d는 0입니다.\n", input);

	printf("\n");

	// 2. 숫자를 입력해서 해당 숫자가 홀수인지, 짝수인지 출력할 것.
	//    단, 0은 홀짝 어디에도 포함되지 않도록 한다.
	printf("2번 문제 입니다.\n");

	printf("숫자를 입력해 주세요.\n");

	scanf(" %d", &input);

	if (input == 0)
		printf("0을 입력하셨습니다.\n");
	else if (input % 2 == 0)
		printf("%d는 짝수입니다.\n", input);
	else if (input % 2 == 1)
		printf("%d는 홀수입니다.\n", input);

	printf("\n");

	// 3. 두 숫자를 입력받아서 둘중 더 큰 수를 출력하라.
	printf("3번 문제 입니다.\n");

	printf("숫자를 2개 입력해 주세요.\n");

	scanf(" %d %d", &input, &input2);

	if (input > input2)
		printf("%d이 큽니다.\n", input);
	else if (input2 > input)
		printf("%d이 큽니다.\n", input2);
	else
		printf("입력하신 두 숫자가 %d로 같습니다.\n", input);

	printf("\n");

	// 4. 정수 2개를 입력받아 두 수의 차를 출력해보자. 
	//    단, 입력 순서와 상관없이 두 숫자중 큰숫자에서 작은 숫자를 빼도록한다.
	printf("4번 문제 입니다.\n");

	printf("숫자를 2개 입력해 주세요.\n");

	scanf(" %d %d", &input, &input2);

	if (input >= input2)
		printf("%d - %d = %d입니다.\n", input, input2, input - input2);
	else if (input2 > input)
		printf("%d - %d = %d입니다.\n", input2, input, input2 - input);

	printf("\n");

	// 5. 정수 2개를 입력받아서 먼저 입력한 숫자를 나중에 입력한 숫자로 나눠 몫과 나머지를 출력하자.
	//    단, 나중에 입력한 숫자는 0이 될 수 없다.
	printf("5번 문제 입니다.\n");

	printf("숫자를 2개 입력해 주세요.\n");

	scanf(" %d %d", &input, &input2);

	if (input2 == 0)
		printf("뒤에 입력한 숫자는 0이 될수 없습니다.\n");
	else
		printf("몫은 %d, 나머지는 %d입니다.\n", input / input2, input % input2);

	printf("\n");

	// 6. 두 숫자를 입력받아서 작은 숫자가 큰 숫자의 약수인지 아닌지 출력하라.
	printf("6번 문제 입니다.\n");

	printf("숫자를 2개 입력해 주세요.\n");

	scanf(" %d %d", &input, &input2);

	if (input > input2)
		if (input % input2 == 0)
			printf("%d은(는) %d의 약수입니다.\n", input2, input);
		else
			printf("%d은(는) %d의 약수가 아닙니다.\n", input2, input);
	else
		if (input2 % input == 0)
			printf("%d은(는) %d의 약수입니다.\n", input, input2);
		else
			printf("%d은(는) %d의 약수가 아닙니다.\n", input, input2);

	printf("\n");

	// 7. 숫자를 입력받아서 60이상이면 합격 아니면 불합격을 출력하자.
	printf("7번 문제 입니다.\n");

	printf("숫자를 입력해 주세요.\n");

	scanf(" %d", &input);

	if (input >= 60)
		printf("%d점으로 합격입니다.\n", input);
	else
		printf("%d점으로 불합격입니다.\n", input);

	printf("\n");

	// 8. 실수형 데이터로 점수를 3개 입력받아서 평균 60 이상이면 합격, 아니면 불합격을 출력.
	//    평균점수 또한 함께 출력할 것.
	printf("8번 문제 입니다.\n");

	printf("숫자를 3개 입력해 주세요.\n");

	scanf(" %f %f %f", &finput, &finput2, &finput3);

	if ((finput + finput2 + finput3) / 3 >= 60)
		printf("합격입니다.\n");
	else
		printf("불합격입니다.\n");

	printf("\n");

	// 9. 4개의 정수를 입력받아 그 평균에 따라 학점을 출력하자.
	printf("9번 문제 입니다.\n");

	printf("숫자를 4개 입력해 주세요.\n");

	scanf(" %d %d %d %d", &input, &input2, &input3, &input4);

	if ((input + input2 + input3 + input4) / 4 >= 90)
		printf("A\n");
	else if ((input + input2 + input3 + input4) / 4 >= 80)
		printf("B\n");
	else if ((input + input2 + input3 + input4) / 4 >= 70)
		printf("C\n");
	else if ((input + input2 + input3 + input4) / 4 >= 60)
		printf("D\n");
	else
		printf("F\n");

	printf("\n");

	// 10. 회원 등급을 입력하면 등급에 따라 다른 권한들을 출력하자.
	printf("10번 문제 입니다.\n");

	printf("회원등급을 입력해 주세요.(1~3)\n");

	scanf(" %d", &input);

	switch (input)
	{
	case 1:
		printf("해당 등급의 권한은 읽기입니다.\n");
		break;
	case 2:
		printf("해당 등급의 권한은 쓰기, 읽기입니다.\n");
		break;
	case 3:
		printf("해당 등급의 권한은 삭제, 쓰기, 읽기입니다.\n");
		break;
	default:
		break;
	}
}