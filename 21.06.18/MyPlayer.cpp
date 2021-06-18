#include "MyPlayer.h"
#include "HpPotion.h"
#include "MpPotion.h"
#include "StaminaPotion.h"
// ��������� ����Ŭ������ ������� ������ cpp������ ����Ŭ������ ����ϱ� ������
// cpp���� ����Ŭ������ include�Ѵ�.

MyPlayer::MyPlayer()
{
	hp = 30;
	mp = 20;
	stamina = 10;
	strcpy(name, "�÷��̾�_1");

	Inventory[0] = new HpPotion;
	Inventory[1] = new HpPotion;
	Inventory[2] = new MpPotion;
	Inventory[3] = new MpPotion;
	Inventory[4] = new StaminaPotion;
	// NULL -> nullptr�� ��ü����.
	// ������ �������� �����Ǹ� �⺻������ �����Ⱚ�� ������ �ȴ�.
	// ������ �̴� �����Ͱ� ���°� �ƴ϶� ������ ���� ���� ���̱� ������
	// �������� �������� �Ǵ��� �Ұ����ϴ�.
	// ���� �������� ���, �����Ͱ� ���ٸ� �ش� �����ʹ� ����ִٴ� �ǹ̷� 
	// ��������(nullptr)�� �����μ� �������ش�.
}

MyPlayer::~MyPlayer()
{

}

void MyPlayer::UseMyItem(int index)
{
	if (index >= 0 && index <= 4)
	{
		if (Inventory[index] != NULL) // �ش� �κ��丮�� ������� ������.
		{
			Inventory[index]->Item_use(this);
			if (Inventory[index]->count <= 0) // �ش� �κ��丮�� ��� �������� ���������
			{
				delete Inventory[index];
				// �������� new�� ������� ������ delete�� �����ش�.
				Inventory[index] = NULL;
				// delete�� �����͸� ������ �ּҰ��� �������� �ʱ⋚���� �ּҰ� ���� �ݵ�� null�� �ٲ��ش�.
			}
		}
		else
			printf("�ش� �κ��丮�� �������� �����ϴ�.\n");
	}
	else
		printf("�������� �ʴ� �κ��丮�Դϴ�.\n");
}

void MyPlayer::CreatePotion()
{
	int input;
	printf("������ ���������� �Է��ϼ���. 1) Hp���� 2) Mp���� 3) ��������\n");
	scanf(" %d", &input);
	if (input == 1)
	{
		while (true)
		{
			printf("���ο� Hp������ �����Ͻðڽ��ϱ�? 1) Yes 2) No\n");
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
				printf("�߸��Է��ϼ̽��ϴ�.\n");
			}
		}

		for (int i = 0; i < 5; i++)
		{
			if (Inventory[i] == NULL)
			{
				while (1)
				{
					printf("������ Hp���ǵ���� �Է��ϼ���.\n");
					scanf(" %d", &input);
					HpPotion* p = new HpPotion;
					if ((input >= 0) && (input <= 5))
					{
						p->SetGrade(input);
						Inventory[i] = p;
						printf("%d��° �κ��丮�� Hp������ ��������ϴ�.\n", i);
						break;
					}
					else
					{
						printf("0��� �̸��̰ų� 5����� �ʰ��ϴ� ������ ����� �����ϴ�.\n");
					}
				}
				break;
			}

			if (i == 4)
				if (Inventory[4] != NULL)
				{
					printf("�κ��丮�� ��á���ϴ�.\n");
					break;
				}
		}
	}
	else if (input == 2)
	{
		while (true)
		{
			printf("���ο� Mp������ �����Ͻðڽ��ϱ�? 1) Yes 2) No\n");
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
				printf("�߸��Է��ϼ̽��ϴ�.\n");
			}
		}

		for (int i = 0; i < 5; i++)
		{
			if (Inventory[i] == NULL)
			{
				while (1)
				{
					printf("������ Mp���ǵ���� �Է��ϼ���.\n");
					scanf(" %d", &input);
					MpPotion* p = new MpPotion;
					if ((input >= 0) && (input <= 5))
					{
						p->SetGrade(input);
						Inventory[i] = p;
						printf("%d��° �κ��丮�� Mp������ ��������ϴ�.\n", i);
						break;
					}
					else
					{
						printf("0��� �̸��̰ų� 5����� �ʰ��ϴ� ������ ����� �����ϴ�.\n");
					}
				}
				break;
			}

			if (i == 4)
				if (Inventory[4] != NULL)
				{
					printf("�κ��丮�� ��á���ϴ�.\n");
					break;
				}
		}
	}
	else if (input == 3) {}
	else
	{
		printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
}
