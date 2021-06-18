#include "CUser.h"

#include "hpPotion.h"
#include "mpPotion.h"
// 클래스를 cpp에서만 사용한다면 굳이 헤더에서 인클루드 할 필요는 없다.

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
		printf("%d만큼 회복되어 hp가 %d가 됬습니다.\n", hpPot.value, hp);
	}
	else if (i == 2)
	{
		mpPotion mpPot;
		mp += mpPot.value;
		printf("%d만큼 회복되어 mp가 %d가 됬습니다.\n", mpPot.value, mp);
	}
	else
		printf("잘못 입력했습니다.\n");


}
