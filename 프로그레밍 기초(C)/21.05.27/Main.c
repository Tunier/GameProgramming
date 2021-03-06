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

	/*float a1;
	float a2;

	printf("숫자 두개를 입력하세요.\n");
	scanf(" %f %f", &a1, &a2);

	printf("\n%.1f + %.1f = %.1f\n\n", a1, a2, a1 + a2);
	printf("\n%.1f - %.1f = %.1f\n\n", a1, a2, a1 - a2);
	printf("\n%.1f x %.1f = %.1f\n\n", a1, a2, a1 * a2);
	printf("\n%.1f / %.1f = %.1f\n\n", a1, a2, a1 / a2);*/


	//==============================================================

	// 산술연산자

	/*
	곱하기와 나누기는 더하기 빼기보다 우선적으로 계산된다.
	괄호안에 있는 계산식은 우선적으로 계산된다.
	*/
	int x = 5 + 6;	//상수끼리 연산
	int y = 10 - x;	//상수와 변수의 연산
	int z = x * 12;	//변수와 상수의 연산
	int w = z / y;	//변수와 변수의 연산
	// 주의사항 : 나누기를 사용할때, 분모가 되는 숫자는 0이 될수 없다.	

	// % : 숫자를 나눠서 몫이 아닌 나머지를 계산하는 연산자.	
	// 대표적으로 홀짝 구분할때 사용됨.

	/*
	숫자 2개를 scanf로 입력받아서
	+,-,*,/,% 5개의 값을 출력해보자
	*/

	/*printf("숫자 두개를 입력하세요.\n");
	scanf(" %d %d", &x, &y);

	printf("\n%d + %d = %d\n\n", x, y, x + y);
	printf("\n%d - %d = %d\n\n", x, y, x - y);
	printf("\n%d x %d = %d\n\n", x, y, x * y);
	printf("\n%d / %d = %d\n\n", x, y, x / y);
	printf("\n%d 를 %d 로 나누기 했을때 나머지는 %d\n\n", x, y, x % y);*/

	// %는 나눈 뒤에 남는 나머지를 계산하는 연산자이기 때문에 나머지까지 전부 계산하는 실수에서는 사용할수 없다.
	// %는 오직 정수끼리 연산에서만 사용할수있다.

	// 대입연산자
	// =, 우측에 있는 값을 좌측에 대입해 주는 연산자.
	// 같은 자료형 간의 대입은 정상적으로 이루어지지만, 다른 자료형 간의 대입은 데이터에 손상이 갈수 있다.
	int x1 = 42.195f;
	// 정수에 실수를 대입하려했기때문에 정수가 표현할수 없는 소수점 이하의 데이터는 소멸하고, 정수 부분만 x1에 대입된다.


	int x2 = x1 + 5;
	// 상수 뿐 아니라 변수간의 대입, 변수와 상수를 계산해서 대입도 가능.

	// 증감연산자
	// ++,-- 

	int inc = 10;
	inc++;
	// 변수명의 앞이나, 뒤에 증감연산자를 붙이면 해당 변수값에 1씩 증감이 이루어 진다.

	//printf("inc 값은 %d 입니다.", inc);

	//--inc;

	//printf("\ninc 값은 %d 입니다.", inc);	// 10

	//printf("\ninc 값은 %d 입니다.", ++inc);	// 11

	//printf("\ninc 값은 %d 입니다.", inc++);	// 11

	//printf("\ninc 값은 %d 입니다.", inc);	// 12

	//int a = 5, b = 5;
	//int pre, post;

	//printf("\n초기값 a = %d, b = %d\n", a, b);

	//pre = (++a) * 3;
	//post = (b++) * 3;

	//printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) *3 = %d\n", pre, post);

	//printf("후기값 a = %d, b = %d\n", a, b);
	// 증감 연산자가 변수 앞에 있으면 해당 코드가 포함된 라인이 실행되기 전에 증감이 이루어지고,
	// 반대로 증감 연산자가 변수 뒤에 있으면 해당 라인이 증감이 적용되지 않은 상태로 실행만 먼저 되고 실행이 끝난 후에 증감이 이루어 진다.

	// 전위표기 : 증감연산자 -> 해당 라인의 코드 -> 다음라인
	// 후위표기 : 해당 라인의 코드 -> 증감연산자 -> 다음라인

	int n10 = 10;
	// 복합대입연산자 p.105
	// +=, -=, *=, /= 등 <--자기 자신의 값을 변경해서 다시 자기자신에게 대입하려는 경우 사용하는 연산자.
	n10 += 2;	// n10 = n10 + 2
	n10 -= 7;	// n10 = n10 - 7
	n10 *= 10;	// n10 = n10 * 10
	n10 /= 10;	// n10 = n10 / 10

	/*
	숫자 2개를 입력받아서
	첫번째 숫자를 두번째 숫자만큼 증가 시켜서 출력해보자.
	단, 할당 연산자를 사용할것.
	ex)	int x = 5
		int y = 6
		printf로 x를 출력했을때 x+y의 값이 나오도록 할것.
	*/

	/*x = 5; y = 6;

	x += y;

	printf("x += y 는 %d\n", x);*/

	// 관계 연산자
	/*
	두 데이터 사이의 관계를 표현해주는 연산자
	<, >, <=, >=, ==, !=
	< : 왼쪽이 오른쪽 보다 작다.
	> : 왼쪽이 오른쪽 보다 크다.
	<= : 왼쪽이 오른쪽 보다 작거나 같다.
	>= : 왼쪽이 오른쪽 보다 크거나 같다.
	== : 왼쪽과 오른쪽이 같다.
	!= : 왼쪽과 오른쪽이 같지 않다.
	*/

	//printf("5 > 3 : %d\n", 5 > 3);
	//printf("5 < 3 : %d\n", 5 < 3);
	//// 두 데이터 사이의 관계가 참이면 1 거짓이면 0

	//printf("15 >= 15 : %d\n", 15 >= 15);	// 참
	//printf("15 > 15 : %d\n", 15 > 15);		// 거짓

	//printf("30 == 15 * 2 : %d\n", 30 == 15 * 2);	//참
	//printf("20 <= 5 * 3 : %d\n", 20 <= 5 * 3);		//거짓

	//printf("100 != 5 * 19 : %d\n", 100 != 5 * 19);	// 참


	//// 논리연산자

	//// and, or, not
	//// && : 연산자의 좌우에 있는 내용이 모두 참이면 참을 반환.
	//printf("(5 > 3) && (10 < 30) :: %d\n", (5 > 3) && (10 < 30));

	//int logical = 30;
	//printf("(10 < logical) && (logical < 50) :: %d\n", (10 < logical) && (logical < 50));
	//// logical은 10보다 크고 50보다 작다.
	//// 10 < logical < 50 <== 사용불가 
	//// (10 < logical) && (logical < 50) 이방식으로 사용.
	//// 관계연산자는 한번에 하나밖에 사용할수 없기 때문에 각각을 하나의 명재로 만들고, 
	//// 이를 논리 연산자로 묶어서 하나의 논리인것처럼 만들어 주는 역할을 함.

	//// || : 연산자의 좌우에 있는 내용이 하나라도 참이면 참을 반환.
	//printf("(logical < 50) || (logical > 100) :: %d\n", (logical < 50) || (logical > 100));		// 참
	//printf("(logical < 0) || (logical != 100) :: %d\n", (logical < 0) || (logical != 100));		// 참
	//printf("(logical == 30) || (logical != 50) :: %d\n", (logical == 30) || (logical != 50));	// 참
	//printf("(logical != 30) || (logical < 0) :: %d\n", (logical != 30) || (logical < 0));		// 거짓

	//// 논리연산자 &&, ||의 특징
	//logical = 10;

	//(logical < 0 && logical > 5);
	//// 위 처럼 && 일때, 선행조건이 거짓인 경우 다음 조건의 결과와 관계 없이 &&는 거짓이기 때문에 후행조건은 확인하지 않는다.

	//(logical > 0 || logical > -10);
	//// 위 처럼 || 일때, 선행조건이 참인 경우 다음 조건의 결과와 관계 없이 ||는 참이기 때문에 후행조건은 확인하지 않는다.

	//// ! : 논리, 혹은 관계의 결과를 반대로 뒤집는다.
	//logical = 100;
	//printf("!(logical> 0 ) :: %d\n", !(logical > 0));	// !참 -> 거짓

	//printf("!((logical == 100) || (logical >=50)) :: %d\n", !((logical == 100) || (logical >= 50)));	// !(참||참) -> 거짓

	//// 연산의 결과값의 처리
	//printf("1 + 2 = %d\n", 1 + 2);

	int _a = 10, _b = 20, res;
	//// 변수의 값을 지정해주는 것을 초기화라고 한다.

	//_a + _b;
	//printf("%d + %d = %d\n", _a, _b, _a + _b);

	//res = _a + _b;
	//printf("%d + %d = %d\n", _a, _b, res);

	
	// (자료)형 변환 연산자 p.101

	int i_a = 20, i_b = 3;
	float _res;
	
	_res = i_a / i_b;

	printf("i_a / i_b = %f\n", _res);


	_res = (float)i_a / i_b;

	printf("i_a / i_b = %f\n", _res);

	// (바꿀 자료형) 변수명
	// 변수명의 자료형을 일시적으로 소괄호 안에 있는 자료형으로 바꿔서 코드를 실행시킨다.
	// 위의 계산은 정수 / 정수 가 아닌 실수 / 정수로 취급이 되어 결과물이 실수로 나옴.

	float f_a = 20, f_b = 3;
	_res = f_a / f_b;
	printf("\nf_a / f_b = %f\n", _res);

	_res = (int)f_a / (int)f_b;
	printf("(int)f_a / (int)f_b = %f\n", _res);
	// f_a와 f_b는 실수이지만 형변환 연산자를 통해 일시적으로 int형으로 변경하여 계산하게되면
	// 정수와 정수의 계산이 되어 결과값 역시 정수로 나오게 된다.

	// 삼항(조건)연산자

	_a = 100;
	_b = 200;
	printf("(_a > _b) ? _a : _b = %d\n", (_a > _b) ? _a : _b);

	return 0;
}