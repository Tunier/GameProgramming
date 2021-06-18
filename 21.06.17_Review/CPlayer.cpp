#include "CPlayer.h"

CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
}

void CPlayer::print(int i)
{
	printf("입력하신 정수는 %d입니다.\n", i);
}

void CPlayer::print(float f)
{
	printf("입력하신 실수는 %f입니다.\n", f);
}

void CPlayer::print(char c)
{
	printf("입력하신 문자는 %c입니다.\n", c);
}
