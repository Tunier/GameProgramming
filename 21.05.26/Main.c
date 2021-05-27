#include "stdio.h"
/*
#include : 외부에서 미리 만들어놓은
프로그램 코드를 가져와서 내 프로그램에서 사용하겠다.

stdio.h : 내가 가져오고자 하는 프로그램 코드의 이름
	stdio :Standard Input Output
*/
int main()
//int main():프로그램 코드 내에서 가장 먼저 실행되는
//코드의 이름
{
	//중괄호{} : 해당 코드 이름을 가진 프로그램이
	//실제로 실행될때 작동하는 코드들이 중괄호 안에
	//들어가게 된다.



	//====================================글자의 출력===================================
	printf("게임 프로그래밍\n\n");
	/*
	printf :화면에 글자를 출력해주는 명령어
	소괄호() 안에 입력한 내용을 바탕으로 하여 글자를 출력.
	 세미콜론(;)  : 프로그래밍에서 세미콜론(;)은
			프로그램 코드의 한줄이 끝났음을 나타내는 문자.
	 \n : 줄바꿈 문자.
			문자이기 때문에 여러개를 사용할수도 있고
			문장의 중간, 시작, 끝 어디에든 넣을수 있다.
	 프로그래밍에서 글을 작성하면 프로그램 코드로써
	인식하기 때문에, 순수하게 글자 그대로의 의미로 사용하려면
	문장의 앞뒤로 큰따움표("")를 적어준다.
	*/
	printf("\n제 이름은\n강동안\n입니다.");


	/*
	텍스트 출력 연습문제)
	이름: 강동안

	나이: 32
	키: 100
	몸무게: 100
	*/
	printf("\n\n이름:강동안\n");
	printf("\n");
	printf("나이:32\n");
	printf("키:100\n");
	printf("몸무게:100\n");

	printf("\n\n이름:강동안\n\n나이:32\n키:100\n몸무게:100");



	printf("\n\n\n내 나이는 32살입니다.\n"); //글자를 그대로 출력
	printf("내 나이는 %d살입니다.\n", 32);//글자가 아닌 숫자를 입력

	/*
	===========================================서식문자===============================================
	출력할 내용을 글자로 직접 입력하는게 아니라
	다른 형태(숫자, 문자, 기타등등)로 외부에서 입력받아서
	글자로 전환하여 출력하고자 할때 사용하는 문자
	*/

	printf("\n1+2 =%d입니다.", 1 + 2);
	//서식문자를 사용하면 계산식의 결과를 출력할수도 있다.


	/*
		%d :decimal 십진수(정수, 마이너스, 플러스, 0 모두 포함)
		%f  :float 실수(마이너스, 플러스, 0 포함해서 소수점을 가지는 숫자)
		%c :character 문자(글자 1개)
		%s :string 문장(여러개의 글자가 합쳐진 하나의 문장)

		%o :octal 8진수
		%x :Hexadecimal 16진수
	*/

	printf("\n %d", 1000);  //1000	:10진수
	printf("\n %o", 1000);  //1750	:8진수
	printf("\n %x", 1000);  //3e8	:16진수
	//같은 값을 입력하더라도 출력하는 방식에 따라
	//서로 다른값으로 출력될수 있다.

	printf("\n%f", 3.14f);				//실수
	printf("\n%c", 'a');				//문자(작은따옴표로 표시)
	printf("\n%s", "abcde");		//문장(큰따옴표로 표시)




	/*
	서식문자 연습문제)
	서식문자를 이용해서 출력하자.

	이름: 강동안  (문장)

	나이: 32    (정수)
	키: 123.4   (실수)
	몸무게: 12.3	  (실수)
	*/


	printf("\n이름:%s\n\n", "강동안");
	printf("나이:%d살\n", 32);
	printf("키:%fcm\n", 123.4f);
	printf("몸무게:%0.2fKg", 12.3f);
	/*서식문자를 사용할때
	소수점을 나타내는 %f의 경우
	별도로 지정하지 않으면
	소수점 이하 6자리까지 표기가 된다.
	다만, 이 경우 컴퓨터의 실수표현방식의 한계로 인해
	오차가 발생할수 있어
	소수점 표기를 잘라서 표현한다.
	%와 f 사이에 0.소수점자릿수 를 작성하면
	해당 자리수까지만 소수점을 표현한다.
	ex)%0.3f  ->소수점 3자리까지 표기
	잘리는 자릿수는 반올림된다.
	*/



	//===========================================================================
	//====================================변수===================================
	//===========================================================================
	//같은 이름을 가지고 있지만, 그 안에 들어가는
	//내용물(데이터)이 변경될수 있는 수치들을 통틀어 변수라고 한다.
	//ex)나이, 키, 몸무게, 시력, 등등.
	//		나이라는 이름은 항상 같지만 그 값은 매년 바뀐다.

	int age;
	//변수를 만드는 순서
	//1. 해당 변수가 어떤 데이터를 저장하는지 선언한다.(int)
	//2. 해당 변수의 이름을 선언.(age)
	//위 코드는 int형 데이터를 저장하는 age라는 이름을 가진 변수를 만듦.
	//int:정수를 나타내는 데이터 형태(자료형)

	age = 10;
	//변수에 데이터를 입력하는 방법
	//변수명 = 대입할 데이터;
	//프로그래밍에서의 =의 의미: 오른쪽의 데이터를 왼쪽에 대입한다.

	printf("\nage는 %d입니다.", age);
	//문자열 출력을 할때 변수를 서식문자에 전달하면
	//해당 변수에 저장된 데이터(내용물)가 출력이 된다.

	age = -500;
	printf("\nage는 %d입니다.", age);

	printf("\n f로 출력합니다. %f", age);
	//잘못된 서식문자로 변수를 출력하려고 하면
	//엉뚱한 값으로 출력된다.

	//==========================================================================
	//=================================변수의 특징================================
	//==========================================================================
	//1. 변수의 이름은 알파뱃, 숫자, 일부 특수문자만 사용가능하다.
	//(일부 특수문자는 _를 의미한다.)
	int a123_4;

	//2. 변수명(이름)의 첫글자는 숫자가 될수 없다.
	//int 2abc; (사용불가)

	//3. 같은 변수명이라도 대소문자가 다르면 다른 변수명으로 인식한다.
	int Abc;
	int abc; //같은 이름이지만 대소문자가 다르기 때문에 서로 다른 변수임

	//4. 같은 이름을 가진 변수를 여러개 만들어서 사용할수 없다.
	//int x=10;
	//int x=20; //(이렇게 사용하면 안됨.)

	//5. 변수들끼리 계산과 대입이 가능하다.
	int q = 10;
	int w = 20;
	int e = q + w;
	int r = e + 30;

	/*
	===================================대표적인 자료형======================================
	int :정수
	float :실수
	char :문자
	*/
	int i1 = 100;
	float f1 = 314;
	char c1 = 'x';



	//p.57
	//자료형마다 표현 가능한 범위에 한계가 존재한다.
	//int형: 4byte ->1byte=8bit=2^8-1
	//char형: 1byte




	int d1 = 30;
	int d2 = 80;
	printf("\n %d", d1 + d2);
	printf("\n %d", d1 + 30);
	//출력할때 서식문자에 전달되는 값을 변수간의 계산식으로도 만들수 있다.






	float ff = 10 + 3.5;
	float ff2 = 10 + 10;
	float ff3 = 10 / 3;
	//정수와 정수의 계산=정수
	//정수와 실수의 계산=실수
	//실수와 실수의 계산=실수

	//정수와 정수의 계산 결과를 실수에 대입하면
	//결과값이 정수로 나온 후에 실수에 대입이 되기 때문에
	//계산의 결과에 소수점이 포함된다면 소수점은 날아가고
	//정수부분만 실수에 저장이 된다.

	printf("\n\n%f", ff3);//출력값은 3.3333이 아닌 3.000000이 나온다.

	return 0;
	//프로그램을 여기서 종료시키라는 명령
}