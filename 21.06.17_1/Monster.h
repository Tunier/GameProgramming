#pragma once
#include <iostream>

class Monster
{
public:
	Monster();

	int atk; // 공격력
	int def; // 방어력
	int hp; // 체력
	float exp; // 죽였을때 얻는 경험치
	int gold; // 죽였을때 얻는 골드

	void Attack();
	void Damaged(int i);
	void Die();

private:
	float rare_drop; // 레어 드롭 확률
	// private : 외부에서 접근할수 없고
	// 오직 자기자신만 사용할수 있는 데이터들을 지정.

	void rareGet();

protected:
	// protected : 외부에서는 접근할수 없고
	// 자기자신과 자기자신을 상속받은 자식들만 사용할 수 있는 데이터들을 지정
	float deadTime; // 몬스터의 사망시간(다음 리젠까지 필요한 시간)
};

