#pragma once
#include "Monster.h"

class Dragon : public Monster
{
public:
	Dragon();
	
	void Attack();
	// 함수 오버 라이팅(over writing)
	// 부모클래스에 이미 존재하던 attack함수를
	// 자식클래스인 드래곤에서 다시 선언하고 정의함.
	// 자식은 부모의 변수, 함수를 사용할수 있지만
	// 부모는 자식의 변수, 함수를 사용할수 없다.
};

