#include "CPlayer.h"

CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
}

void CPlayer::print(int i)
{
	printf("�Է��Ͻ� ������ %d�Դϴ�.\n", i);
}

void CPlayer::print(float f)
{
	printf("�Է��Ͻ� �Ǽ��� %f�Դϴ�.\n", f);
}

void CPlayer::print(char c)
{
	printf("�Է��Ͻ� ���ڴ� %c�Դϴ�.\n", c);
}
