#include "Dragon.h"

Dragon::Dragon()
{
	atk = 50;
	def = 30;
	hp = 100;
	exp = 1500;
	gold = 10000;
	
	// rare_drop = 50;
	// 상속받은 자식이라 할지라도 부모의 private로 선언된 데이터에는 접근할수 없다.

	printf("%f초 후에 리젠됩니다.\n", deadTime);
	// protected로 선언된 변수, 함수는 자식도 접근할 수 있다.
}

void Dragon::Attack()
{
	printf("드래곤이 브레스를 내뿜습니다.\n");
	printf("공격력의 10배인 %d의 데미지를 줍니다.\n", atk * 10);
}
