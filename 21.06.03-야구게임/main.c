#define	_CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*
		숫자야구게임
		숫자를 배열에 저장하고 사용자가 입력한 숫자 역시 배열에 저장한 뒤
		저장된 숫자와 입력된 숫자가 저장된 두 배열을 비교해서 볼과 스트라이크의 갯수를 카운트한다.
	*/

	int input;
	int insert[3];
	int answer[3];
	int strike = 0, ball = 0;
	int life = 7;


	printf("숫자야구게임\n\n");
	/*
	printf("정답으로 사용할 숫자 3개를 입력해주세요.\n");
	for (int i = 0; i < 3; i++)
		scanf(" %d", &answer[i]);
	*/

	/*printf("정답으로 사용할 숫자 3개를 입력해주세요.\n");

	for (int i = 0; i < 3; i++)
	{
		scanf(" %d", &input);

		if (input > 0 && input < 10)
			answer[i] = input;
		else
		{
			printf("1 ~ 9 사이의 숫자를 입력해야합니다. 다시입력해주세요.\n");
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
			printf("life는 %d개 입니다.\n", life);
			printf("숫자 3개를 입력해주세요.\n");

			/*for (int i = 0; i < 3; i++)
				scanf(" %d", &insert[i]);*/

			for (int i = 0; i < 3; i++)
			{
				scanf(" %d", &input);

				if (input > 0 && input < 10)
					insert[i] = input;
				else
				{
					printf("1 ~ 9 사이의 숫자를 입력해야합니다. 다시입력해주세요.\n");
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
				printf("정답입니다.\n");
				break;
			}
			else
			{
				life--;
				printf("life가 감소했습니다. 남은 life는 %d개 입니다.\n", life);
				printf("%d %d %d 는 %d스트라이크 %d볼 입니다.\n\n", insert[0], insert[1], insert[2], strike, ball);
			}
		}
		else
		{
			printf("게임오버.\n");
			break;
		}
	}

	return 0;
}