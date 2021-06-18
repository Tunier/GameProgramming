#include "Header.h"

#include "CPlayer.h"
#include "Calculater.h"
#include "CUser.h"

int main()
{
	CPlayer cp;

	cp.print(5.55f);
	cp.print(10);
	cp.print('Q');
	// 매개변수로 무엇을 넣느냐에 따라서 같은 이름의 함수라 할지라도 실행되는 함수가 달라진다.

	cp.print(3, 9, 20);
	cp.print(99, 3.14f, 'p');
	cp.print(666, 777);

	cp.print((float)10);
	// 인수를 실수로 바꿨기 때문에 매개변수가 실수인 함수가 실행된다.

	/*
		새로운 클래스를 만들고 매개변수가 정수 2개면 첫번째 수를 두번쨰로 수로
		나눴을때의 나머지를 출력하는 함수.

		매개변수가 실수 2개면 첫번째 수를 두번째 수로 나눈 몫을 출력하는 함수.

		매개변수가 실수 3개면 세 숫자의 평균을 출력하는 함수.

		매개변수가 정수 3개면 세 숫자중 가장 큰 수를 출력하는 함수.

		매개변수가 정수와 문자면 해당 문자를 정수번 만큼 반복해서 출력하는 함수.
	*/

	Calculater Cal;

	Cal.print(2, 3);
	Cal.print(6.2f, 3.1f);
	Cal.print(2.5f, 3.5f, 4.5f);
	Cal.print(5, 15, 3);
	Cal.print(5, 'C');

	CUser user;

	user.printInfo();
	user.useItem(1);
	user.useItem(2);
	user.useItem(3);
	user.printInfo();







	return 0;
}