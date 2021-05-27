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

	/*
	int i = 30;

	scanf("%d", &i);

	printf 와 반대되는 명령어로 printf가 화면에 글자를 출력하는 명령어라면
	scanf 는 반대로 화면에서 글자를 입력받는 명령어이다.
	입력받은 데이터는 서식문자를 통해 뒤에 적힌 변수에게 전달되어 변수의 데이터값을 입력한 데이터로 바꿔준다.

	printf 와 마찬가지로 입력받을 데이터에 맞는 서식문자를 사용하여야 하며
	마찬가지로, 입력된 데이터를 받을 변수 역시 데이터에 맞는 자료형을 가진 변수로 넣어줘야 한다.
	또한 변수 앞에 반드시 & 를 붙여줘야 한다.

	printf("입력한 숫자는 %d 입니다.\n", i);
	*/


	/*
	float f;
	char c;

	scanf(" %c %f %d", &c, &f, &i);
	printf("c:%c, f:%f, i:%d\n", c, f, i);

	printf와 마찬가지로 한번에 여러개의 데이터를 입력받는 것 또한 가능하다.
	서식문자의 순서에 맞게 변수를 작성해야 하며 실제 프로그램상에서 데이터를 입력하는 것 역시	작성된 코드 순서에 맞춰서 넣어줘야한다.
	여러개의 데이터를 동시에 입력받을 때는 서식문자 앞에 반드시 한칸을 띄위준다.
	이는 첫번째 서식문자라도 예외없이 적용하며 scanf에서 서식문자 사용시 그냥 항상 앞에 한칸 띄우는것을 습관하는편이 좋다.
	*/

	/*
	scanf("%d%c%f", &i, &c, &f);
	printf("%d,%c,%f\n", i, c, f);

	scanf를 통해 데이터를 입력받을때 서식문자들 앞에 한칸을 띄어주지 않으면
	데이터 입력이 아직 끝나지 않았다고 판단하여 데이터를 여러개 입력하더라도
	제대로 입력이 되지않으며 작성한 갯수만큼 데이터를 입력하기 전에 scanf가 멋대로 종료되어버린다.
	*/

	/*
	1. 자신의 나이를 입력받아 화면에 출력해보자.
	ex) 입력 : 32 -> 출력 : 내 나이는 32살입니다.

	2. 월과 일을 입력받아서 해당 날짜를 화면에 출력해보자.
	ex) 입력 : 9, 20 -> 출력 : 9월 20일

	3. 2번을 동일하게 만들되, 일과 월을 입력받아서 월과 일로 출력하자.
	ex) 입력 : 20, 9 -> 출력 : 9월 20일

	4. 자신의 나이, 키, 몸무게를 입력받아서 키, 몸무게, 나이 순서로 출력하자.
	ex) 입력 : 32 123.4 80.5 -> 출력 : 키 123.4cm
								몸무게 : 80.5kg
								나이 : 32살
	*/

	//int age;

	//printf("나이를 입력하세요.\n");
	//scanf(" %d", &age);
	////scanf의 서식문자 부분에서 %의 앞을 한칸만 띄우도록 하며 scanf의 문장에서는 띄어쓰기, 서식문자 이외에는 아무것도 사용할수 없다.
	//printf("\n나이는 %d살입니다.\n\n", age);

	//int month;
	//int day;

	//printf("월, 일을 순서대로 입력하세요.\n");
	//scanf(" %d %d", &month, &day);
	//printf("\n%d월 %d일\n\n", month, day);

	//printf("일, 월을 순서대로 입력하세요.\n");
	//scanf(" %d %d", &day, &month);
	//printf("\n%d월 %d일\n\n", month, day);

	//float height;
	//float weight;

	//printf("나이, 키, 몸무게를 순서대로 입력하세요.\n");
	//scanf(" %d %f %f", &age, &height, &weight);
	//printf("\n키 : %.1fcm\n몸무게 : %.1fKg\n나이 : %d살\n", height, weight, age);

	/*
	숫자 2개를 입력받아서 입력받은 두숫자의 합, 차 , 곱 나누기의 결과를 출력해보자.
	입력받는 숫자는 실수를 사용한다.
	*/

	float a1;
	float a2;

	printf("숫자 두개를 입력하세요.\n");
	scanf(" %f %f", &a1, &a2);

	printf("\n%.1f + %.1f = %.1f\n\n", a1, a2, a1 + a2);
	printf("\n%.1f - %.1f = %.1f\n\n", a1, a2, a1 - a2);
	printf("\n%.1f x %.1f = %.1f\n\n", a1, a2, a1 * a2);
	printf("\n%.1f / %.1f = %.1f\n\n", a1, a2, a1 / a2);



	return 0;
}