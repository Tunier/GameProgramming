#define	_CRT_SECURE_NO_WARNINGS

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

	int input;
	int insert[3];
	int answer[3];
	int strike = 0, ball = 0;
	int life = 7;


	printf("���ھ߱�����\n\n");
	/*
	printf("�������� ����� ���� 3���� �Է����ּ���.\n");
	for (int i = 0; i < 3; i++)
		scanf(" %d", &answer[i]);
	*/

	/*printf("�������� ����� ���� 3���� �Է����ּ���.\n");

	for (int i = 0; i < 3; i++)
	{
		scanf(" %d", &input);

		if (input > 0 && input < 10)
			answer[i] = input;
		else
		{
			printf("1 ~ 9 ������ ���ڸ� �Է��ؾ��մϴ�. �ٽ��Է����ּ���.\n");
			i--;
		}
	}*/

	srand(time(NULL));
	for (int i = 0; i < 3; i++)
		answer[i] = rand() % 9 + 1;

	while (1)
	{
		strike = 0;
		ball = 0;

		if (life > 0)
		{
			printf("life�� %d�� �Դϴ�.\n", life);
			printf("���� 3���� �Է����ּ���.\n");

			/*for (int i = 0; i < 3; i++)
				scanf(" %d", &insert[i]);*/

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
				break;
			}
			else
			{
				life--;
				printf("life�� �����߽��ϴ�. ���� life�� %d�� �Դϴ�.\n", life);
				printf("%d %d %d �� %d��Ʈ����ũ %d�� �Դϴ�.\n\n", insert[0], insert[1], insert[2], strike, ball);
			}
		}
		else
		{
			printf("���ӿ���.\n");
			break;
		}
	}

	return 0;
}