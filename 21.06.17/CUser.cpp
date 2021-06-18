#include "CUser.h"

#include "hpPotion.h"
#include "mpPotion.h"
// Ŭ������ cpp������ ����Ѵٸ� ���� ������� ��Ŭ��� �� �ʿ�� ����.

CUser::CUser()
{
	hp = 30;
	mp = 10;
}

void CUser::printInfo()
{
	printf("hp : %d mp : %d\n", hp, mp);
}

void CUser::useItem(int i)
{
	if (i == 1)
	{
		hpPotion hpPot;
		hp += hpPot.value;
		printf("%d��ŭ ȸ���Ǿ� hp�� %d�� ����ϴ�.\n", hpPot.value, hp);
	}
	else if (i == 2)
	{
		mpPotion mpPot;
		mp += mpPot.value;
		printf("%d��ŭ ȸ���Ǿ� mp�� %d�� ����ϴ�.\n", mpPot.value, mp);
	}
	else
		printf("�߸� �Է��߽��ϴ�.\n");


}
