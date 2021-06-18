#include "MyPlayer.h"
#include "HpPotion.h"
#include "MpPotion.h"
#include "StaminaPotion.h"
// 헤더에서는 포션클래스가 사용하지 않지만 cpp에서는 포션클래스를 사용하기 때문에
// cpp에서 포션클래스를 include한다.

MyPlayer::MyPlayer()
{
	hp = 30;
	mp = 20;
	stamina = 10;
	strcpy(name, "플레이어_1");

	Inventory[0] = new HpPotion;
	Inventory[1] = new HpPotion;
	Inventory[2] = new MpPotion;
	Inventory[3] = new MpPotion;
	Inventory[4] = new StaminaPotion;
	// NULL -> nullptr로 대체가능.
	// 포인터 변수들은 생성되면 기본적으로 쓰레기값을 가지게 된다.
	// 하지만 이는 데이터가 없는게 아니라 쓰레기 값을 가진 것이기 때문에
	// 정상적인 데이터의 판단이 불가능하다.
	// 따라서 포인터의 경우, 데이터가 없다면 해당 포인터는 비어있다는 의미로 
	// 널포인터(nullptr)을 값으로서 대입해준다.
}

MyPlayer::~MyPlayer()
{

}

void MyPlayer::UseMyItem(int index)
{
	if (index >= 0 && index <= 4)
	{
		if (Inventory[index] != NULL) // 해당 인벤토리가 비어있지 않을때.
		{
			Inventory[index]->Item_use(this);
			if (Inventory[index]->count <= 0) // 해당 인벤토리의 모든 아이템을 사용했을때
			{
				delete Inventory[index];
				// 아이템을 new로 만들었기 때문에 delete로 지워준다.
				Inventory[index] = NULL;
				// delete는 데이터만 지우지 주소값을 지우지는 않기떄문에 주소값 역시 반드시 null로 바꿔준다.
			}
		}
		else
			printf("해당 인벤토리에 아이템이 없습니다.\n");
	}
	else
		printf("존재하지 않는 인벤토리입니다.\n");
}

void MyPlayer::CreatePotion()
{
	int input;
	printf("생성할 포션종류를 입력하세요. 1) Hp포션 2) Mp포션 3) 생성안함\n");
	scanf(" %d", &input);
	if (input == 1)
	{
		while (true)
		{
			printf("새로운 Hp포션을 생성하시겠습니까? 1) Yes 2) No\n");
			scanf(" %d", &input);
			if (input == 1)
			{
				break;
			}
			else if (input == 2)
			{
				return;
			}
			else
			{
				printf("잘못입력하셨습니다.\n");
			}
		}

		for (int i = 0; i < 5; i++)
		{
			if (Inventory[i] == NULL)
			{
				while (1)
				{
					printf("생성할 Hp포션등급을 입력하세요.\n");
					scanf(" %d", &input);
					HpPotion* p = new HpPotion;
					if ((input >= 0) && (input <= 5))
					{
						p->SetGrade(input);
						Inventory[i] = p;
						printf("%d번째 인벤토리에 Hp포션이 생성됬습니다.\n", i);
						break;
					}
					else
					{
						printf("0등급 미만이거나 5등급을 초과하는 포션은 만들수 없습니다.\n");
					}
				}
				break;
			}

			if (i == 4)
				if (Inventory[4] != NULL)
				{
					printf("인벤토리가 꽉찼습니다.\n");
					break;
				}
		}
	}
	else if (input == 2)
	{
		while (true)
		{
			printf("새로운 Mp포션을 생성하시겠습니까? 1) Yes 2) No\n");
			scanf(" %d", &input);
			if (input == 1)
			{
				break;
			}
			else if (input == 2)
			{
				return;
			}
			else
			{
				printf("잘못입력하셨습니다.\n");
			}
		}

		for (int i = 0; i < 5; i++)
		{
			if (Inventory[i] == NULL)
			{
				while (1)
				{
					printf("생성할 Mp포션등급을 입력하세요.\n");
					scanf(" %d", &input);
					MpPotion* p = new MpPotion;
					if ((input >= 0) && (input <= 5))
					{
						p->SetGrade(input);
						Inventory[i] = p;
						printf("%d번째 인벤토리에 Mp포션이 생성됬습니다.\n", i);
						break;
					}
					else
					{
						printf("0등급 미만이거나 5등급을 초과하는 포션은 만들수 없습니다.\n");
					}
				}
				break;
			}

			if (i == 4)
				if (Inventory[4] != NULL)
				{
					printf("인벤토리가 꽉찼습니다.\n");
					break;
				}
		}
	}
	else if (input == 3) {}
	else
	{
		printf("잘못입력하셨습니다.\n");
	}
}
