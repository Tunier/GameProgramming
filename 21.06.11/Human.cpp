#include "human.h"

void Human::PrintInfo(int i)
{
	cout << "이름 :" << name << endl
		<< "나이 :" << age << endl
		<< "키:" << height << endl
		<< "몸무게 : " << weight << endl
		<< "성별 :" << gender << endl
		<< "비밀번호 : " << password << endl;
	cout << "입력한 매개변수는 " << i << "입니다." << endl;
}

Human::Human()
{
	cout << "생성됐습니다.\n";
	name = "NPC1";
	age = 40;
	height = 160.f;
	weight = 50.f;
	gender = 2;
	password = 0000;
	// 일반적으로 클래스에서 변수를 초기화 할때는 
	// 헤더가 아니라 소스코드의 생성자에서 해주는 경우가 많다.
}

Human::~Human()
{
	cout << "삭제됩니다.\n";
}
