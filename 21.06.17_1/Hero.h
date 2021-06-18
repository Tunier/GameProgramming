#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Hero
{
public:
	Hero();

public:
	int str;
	int dex;
	int wis;
	int hp;
	int mp;
	float exp;
	int gold;

	char name[256];

	virtual void info();
	virtual void attack();
	virtual void skill();
	virtual void damaged(int i);
	// 가상함수
	// 부모 클래스에 자식 클래스를 대입하더라도
	// 겉모습이 부모클래스이기 때문에 함수를 실행하면
	// 부모클래스를 기준으로하여 실행이 된다.
	// 따라서 겉모습이 아니라 실제 들어있는 데이터를 기준으로
	// 함수가 동작해주도록 하기 위해서 해당 함수를
	// 내용물을 기준으로 동작하도록 '가상함수'로 선언할 수 있다.
	// 함수 선언 앞에 virtual을 붙여주면 된다.

private:
	void die();
	// 사망 함수는 외부에서 부르는게 아니라 내부에서 사용됨.
};

