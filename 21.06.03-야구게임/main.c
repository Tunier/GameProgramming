#define	_CRT_SECURE_NO_WARNINGS
#define DEBUG_MODE 0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*
		���ھ߱�����
		���ڸ� �迭�� �����ϰ� ����ڰ� �Է��� ���� ���� �迭�� ������ ��
		����� ���ڿ� �Էµ� ���ڰ� ����� �� �迭�� ���ؼ� ���� ��Ʈ����ũ�� ������ ī��Ʈ�Ѵ�.
	*/

	int input = 0; // �Է��ϴ� ��.
	int insert[3] = {0}; // ������ Ȯ���ϱ� ���� �Է��Ѱ�.
	int answer[3] = {0}; // ����.
	int strike = 0, ball = 0;
	int Life = 7;


	printf("���ھ߱�����\n\n");
	/*
	printf("�������� ����� ���� 3���� �Է����ּ���.\n");
	for (int i = 0; i < 3; i++)
		scanf(" %d", &answer[i]);
	// ������ ���� �⺻������ �ƹ� ���ڳ� 3���� �Է¹޴¹�.
	// ������ 10�� �Ѿ �޾��־ ����� ���� ������ �ɼ��ִ�.
	*/

	/*
	printf("�������� ����� ���� 3���� �Է����ּ���.\n");

	for (int i = 0; i < 3; i++)
	{
		scanf(" %d", &input);

		if (input > 0 && input < 10)
			answer[i] = input;
		else
		{
			printf("1 ~ 9 ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ��Է����ּ���.\n");
			i--; // �ٽ� �Է��ؾ� �ϹǷ� for���� ���ư����� Ƚ���� 1ȸ �÷���.
		}
	}
	// ������ �ƹ� ���ڳ� �Է¹ް�, 1~9 ������ ������ ��쿡�� �ش� answer[i]�� �־��ش�.
	// �� ���� ��쿡�� �ٽ� �Է��ϰ� �����.
	*/

	srand(time(NULL)); // ������ ��Ģ���� �����ϴ� �Լ�. �� �Լ��� ������ ����ø��� �׻� ���� ������ ���´�. ����ϱ����ؼ��� #include <time.h> �ʿ�.
	for (int i = 0; i < 3; i++)
	{
		answer[i] = rand() % 9 + 1;
		// 1~9�� ������ ���ڰ� anser[i]�� ��.
		// for������ 3ȸ �ݺ��ǹǷ� 3���� �� ��.
		if (i == 2)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = j + 1; k < 3; k++)
				{
					if (answer[i] != answer[j]) {}
					else
						i -= 3;
				}
			}

			/*if ((answer[0] != answer[1]) && (answer[0] != answer[2]) && (answer[1] != answer[2])) {}
			else
				i -= 3;*/
		}
		// i�� 2�ΰ��(���� 3ȸ �� �������), ���� 3�� ��� ���Ͽ� ���� ���� ������쿡 for���� ����.
		// ���� ���ڰ� �ִ°�� �ٽ� ������ ������ ��� �ٸ� ������ ��쿡�� for�� ����.
	}
#if DEBUG_MODE == 1 // ����� ��尡 1(true)�̶�� #if�� #endif ������ �ڵ带 ��������.
	printf("����׸���Դϴ�.\n");
	printf("������ %d, %d, %d\n\n", answer[0], answer[1], answer[2]); // ����� ���� ���� ������.
#endif // DEBUG_MODE

	printf("������ ��� �ٸ� �����Դϴ�.\n");
	while (1)
	{
		strike = 0;
		ball = 0;
		// �������� ������߱⿡�� ������ ��Ʈ����ũ�� ���� �ʱ�ȭ.

		if (Life > 0)
		{
			printf("Life : %d\n", Life);
			
			printf("���� 3���� �Է����ּ���.\n");

			/*
			for (int i = 0; i < 3; i++)
				scanf(" %d", &insert[i]);
			// ������ ���� ���� �⺻������ �Է°��� �޾Ƽ� insert[i](������ ���߷��� �ϴ� ��ȣ)�� �־��ش�.
			*/

			for (int i = 0; i < 3; i++)
			{
				scanf(" %d", &input);

				if (input > 0 && input < 10)
					insert[i] = input;
				else
				{
					printf("1 ~ 9 ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ��Է����ּ���.\n");
					i--;
				}
			}

			for (int i = 0; i < 3; i++)
			{
				if (insert[i] == answer[i])
					strike++;
				else if (insert[i] == answer[0] || insert[i] == answer[1] || insert[i] == answer[2])
					ball++;
			}

			if (strike == 3)
			{
				printf("�����Դϴ�.\n");
				break; // if���� Ż���ϴ°��� �ƴ϶� ���� ����� �ݺ��� �ϳ��� Ż����.
			}
			else
			{
				Life--; // Ʋ����쿡�� �������� ����. 
						// �������� �����ؼ� ����ؾ��ϹǷ� ���� �������� ��µǱ����� ���� �����ϵ��� ù�ٿ� �ۼ�.
				printf("%d %d %d �� %d��Ʈ����ũ %d�� �Դϴ�.\n\n", insert[0], insert[1], insert[2], strike, ball);
				if (Life>0)
					printf("Life�� 1 �����߽��ϴ�.\n\n");
			}
		}
		else
		{
			system("cls"); // ȭ���� ����. #include <stdlib.h> �ʿ�.
			printf("Life�� 0�� �Ǿ����ϴ�.\n");
			printf("���ӿ���.\n");
			break;
		}
	}

	return 0;
}