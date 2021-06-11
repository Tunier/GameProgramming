#pragma once
#include <iostream>

using namespace std;
// main과 다른 별도의 파일(클래스)로 만들어서 코드를 작성하고 있기때문에
// main에서와 같이 적어줘야함.

class Human
{
	// 헤더파일(.h)
	// 클래스는 헤더파일(.h)와 소스파일(.cpp) 2개로 이루어지며
	// 헤더파일에는 해당 클래스에서 사용할 변수나 함수를 미리 선언하는 공간이다.

	// 클래스는 C언어에서 사용하던 구조체 개념을 확장하여
	// 나만의 자료형을 만들고 변수 뿐 아니라 함수들도 해당 자료형을 위해 전용으로 만들어주는 것이 가능하다.

public:
	int age;
	float height;
	float weight;
	int gender; //1,2
	string name;
	// public 범위에서 만들어진 것들은 외부에서도 사용할수 있다.
	void PrintInfo(int i);
	// 클래스에서 함수를 만들때는 헤더파일에서 함수 전체를 만드는게 아니라
	// 함수의 반환형과 이름, 매개변수 정도만 먼저 선언한다.
	
	Human();
	// 생성자 : 해당 클래스로 객체를 생성했을때 자동으로 실행되는 함수
	~Human();
	// 소멸자 : 해당 클래스로 만든 객체가 소멸될때 자동으로 실행되는 함수.


private:
	int password;
};

