#include <iostream>

using namespace std;

#include "Human.h"
// 사용자가 직접만든(우측 솔루션 탐색기에 표시되는) 클래스들은 ""로 include 한다.

// 해당 코드 내에서 사용되는 명령어나 함수들은 
// 네임스페이스인 std에 포함된 것을 사용하는 것으로 잠정적으로 정의하겠다.


int main() 
{
	std::cout << "Hellow World!\n" << std::endl;
	// std : 네임스페이스
	// 같은 이름을 가진, 서로 다른 클래스에 포함된 함수나 변수들을 혼동하지 않도록 
	// 구체적으로 해당 이름이 어디에 포함되어 있는 이름인지를 표시하기 위한 기능.

	// std::endl : cout으로 문자열을 출력했을때 줄을 바꿔주는 명령어.
	// 직접 문자열 안에 \n을 넣어도 되지만 명령어를 통해 줄을 바꿀수도 있다.

	int i = 30;

	std::cout << "i는 " << i << "입니다.\n";

	std::cin >> i;

	std::cout << "i는 " << i << "입니다.\n";
	// cout이 문자열을 화면에 출력하는 함수라면, 
	// cin은 화면을 통해 데이터를 입력받아서 변수에 저장해주는 함수.

	std::string str;
	str = "abc";
	str = "qwe";
	str = str + "qqq";
	// 문자열을 저장하는 자료형 std::string
	// 특징 1. 언제든지 초기화 및 대입이 가능하다.
	// 특징 2. 문자열 길이에 제한이 없다.
	// 특징 3. 문자열끼리 더하기가 가능하다.
	// 이외에도 문자열을 편집하기위한 여러가지 기능이 포함되었다. (검색, 치환, 삭제 등)

	Human yang;
	// 클래스 객체의 생성은 구조체처럼 
	// 클래스명 객체명; 로 생성한다.
	
	yang.age = 26;
	yang.gender = 1;
	yang.height = 168.5f;
	yang.weight = 64.5f;
	yang.name = "양명균";
	// public 범위에서 만들어진 것들은 외부에서도 사용할수 있다.

	yang.PrintInfo(777);
	// 클래스 내에서 생성된 함수 역시 변수와 마찬가지로 .으로 접근한다.

	Human* p_yang = new Human;
	// c++에서의 동적할당
	// c에서는 malloc을 통해서 구체적인 메모리크기를 지정하여 동적할당을 받지만
	// c++에서는 malloc이 할당한 메모리의 주소를 자동으로 반환하지 않기때문에 수동으로 전달해야한다.
	// 하지만 c++에는 malloc 대신 new라고하는 동적할당을 실행시켜주는 명령어가 존재한다.
	// new 뒤에 무엇을 생성할지를 적어주면 해당 형식에 맞게 동적할당을 해준다.

	p_yang->PrintInfo(15);

	delete(p_yang);

	cout << "메인 함수가 종료됩니다.\n";

	Human a;
	Human b;
	Human c;

	a.name = "대장간 주인";
	b.height = 150;
	c.age = 800;

	return 0;
}