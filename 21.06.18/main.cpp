#pragma once
#include "Headers.h"
#include "MyPlayer.h"
#include "HpPotion.h"

void AmStudy()
{
	MyPlayer player;
	HpPotion hPotion;

	while (1)
	{
		printf("사용할 인벤토리 번호를 입력하세요.\n");
		int input;
		char input2;
		scanf(" %d", &input);

		player.UseMyItem(input);
		/*
			1. 스테미너 포션을 만들고 플래이어의 인벤토리에 추가해서
			   스테미너 포션을 사용하여 효과가 적용되는지 확인해보자.

			2. 체력/마력포션을 종류를 늘리자.
			   신규 클래스를 만들지 않고 기존 클래스에서
			   수치값을 다르게 생성할수 있도록 구조를 고쳐보자.
		*/
		player.CreatePotion();
	}
}

int main()
{
	srand(time(NULL));
	// 랜덤한 숫자를 만들때 기준이 되는 값을 바꿔주는 함수
	// 일반적으로는 기준값을 현재 시간으로 삼는다.

	// srand는 반복해서 사용하면 매번 기준을 다시 잡고 시작하기 때문에
	// 정상적인 랜덤값이 나오지 않는다.
	// 따라서 프로그램 전체에서 한번만 사용한다.
	// 한번만 사용해도 다른 클래스에서 사용하는 rand에 영향을 끼치기 때문에
	// 각 클래스마다 srand를 해줄 필요는 없다.




	return 0;
}