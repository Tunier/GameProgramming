#pragma once
#include <iostream>

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	void print(int i);
	void print(float f);
	void print(char c);
	// c++에서는 같은 이름을 가진 함수라 할지라도
	// 매개변수가 다르다면 다른 함수로 인식한다.
	// 동일한 이름의 함수를, 다른 매개변수로 작성하여 몇개든지 만들수 있다.

	// 함수 오버로딩(overloading)
	// 사용자가 어떠한 매개변수를 넣었느냐에 따라
	// 클래스가 알아서 같은 이름을 가진 함수 중에서
	// 해당 매개변수를 사용하는 함수를 실행시켜준다.

	void print(int i, int j, int k);
	void print(int i, int j);
	void print(int i, float j, char k);
};

