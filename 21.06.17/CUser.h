#pragma once
#include <iostream>

class CUser
{
public:
	// 클래스의 생성자와 소멸자는 해당 클래스의 생성과 소멸 단계에서
	// 별도로 실행할 내용이 없다면 생략해도된다.
	CUser();

	int hp;
	int mp;

	void printInfo();
	void useItem(int i);
};

