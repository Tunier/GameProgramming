#define _CRT_SECURE_NO_WARNINGS
// 윈도우에서 제공해주는 구버전의 명령어를 사용하기 위해 작성하는 코드
// 해당 명령어가 없으면 구버전 명령어 사용시 에러가 발생한다.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	printf("Hello World\n\n");

	printf("나는 %d살입니다.\n", 26);
	printf("나는 %.1f입니다.\n", 168.9f);
	printf("나는 %c입니다.\n", 'A');
	printf("나는 %s입니다.\n", "양명균");

	printf("\n5+9=%d\n", 5 + 9);

	int Level;
	Level = 10;

	printf("\n내 레벨은 %d입니다.\n", Level);

	Level = 11;

	printf("\n내 레벨은 %d입니다.\n", Level);

	int i = 100;		//정수
	float f = 3.14f;	//실수
	char c = 'A';		//문자

	printf("\n2 x 1 = %d\n", 2);
	printf("2 x 2 = %d\n", 2 * 2);
	printf("2 x 3 = %d\n", 2 * 3);
	printf("2 x 4 = %d\n", 2 * 4);
	printf("2 x 5 = %d\n", 2 * 5);
	printf("2 x 6 = %d\n", 2 * 6);
	printf("2 x 7 = %d\n", 2 * 7);
	printf("2 x 8 = %d\n", 2 * 8);
	printf("2 x 9 = %d\n", 2 * 9);


	for (int i = 2; i <= 2; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}


	int age = 26;
	float weight = 68.5f;
	float height = 168.9f;

	printf("\n나이:%d\n체중:%.1f\n신장:%.1f\n", age, weight, height);

	int i1 = 10;
	int i2 = 3;
	float result1 = i1 / i2; // 정수와 정수
	printf("%f\n",result1);

	int i3 = 10;
	float f1 = 3.5f;
	float result2 = i3 / f1; // 정수와 실수
	printf("%f\n", result2);

	float result3 = f1 / i3; // 실수와 정수
	printf("%f\n", result3);

	float result4 = result1 / result2; // 실수와 실수
	printf("%f\n", result4);
	*/

	//==============================================================================

	int i = 30;

	scanf("%d", &i);
	/*
	printf 와 반대되는 명령어로 printf가 화면에 글자를 출력하는 명령어라면
	scanf 는 반대로 화면에서 글자를 입력받는 명령어이다.
	입력받은 데이터는 서식문자를 통해 뒤에 적힌 변수에게 전달되어 변수의 데이터값을 입력한 데이터로 바꿔준다.
	*/


	printf("입력한 숫자는 %d 입니다.\n", i);

	return 0;
}