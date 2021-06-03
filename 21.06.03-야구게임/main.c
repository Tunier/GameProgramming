#define	_CRT_SECURE_NO_WARNINGS
#define DEBUG_MODE 0

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

	int input = 0; // 입력하는 값.
	int insert[3] = {0}; // 정답을 확인하기 위해 입력한값.
	int answer[3] = {0}; // 정답.
	int strike = 0, ball = 0;
	int Life = 7;


	printf("숫자야구게임\n\n");
	/*
	printf("정답으로 사용할 숫자 3개를 입력해주세요.\n");
	for (int i = 0; i < 3; i++)
		scanf(" %d", &answer[i]);
	// 정답을 가장 기본적으로 아무 숫자나 3개를 입력받는법.
	// 음수나 10이 넘어도 받아주어서 맞출수 없는 정답이 될수있다.
	*/

	/*
	printf("정답으로 사용할 숫자 3개를 입력해주세요.\n");

	for (int i = 0; i < 3; i++)
	{
		scanf(" %d", &input);

		if (input > 0 && input < 10)
			answer[i] = input;
		else
		{
			printf("1 ~ 9 사이의 숫자를 입력해야합니다. 다시입력해주세요.\n");
			i--; // 다시 입력해야 하므로 for문이 돌아가야할 횟수를 1회 늘려줌.
		}
	}
	// 정답을 아무 숫자나 입력받고, 1~9 사이의 숫자일 경우에만 해당 answer[i]에 넣어준다.
	// 그 외의 경우에는 다시 입력하게 만든다.
	*/

	srand(time(NULL)); // 랜덤의 규칙성을 제거하는 함수. 이 함수가 없으면 실행시마다 항상 같은 난수가 나온다. 사용하기위해서는 #include <time.h> 필요.
	for (int i = 0; i < 3; i++)
	{
		answer[i] = rand() % 9 + 1;
		// 1~9의 랜덤한 숫자가 anser[i]에 들어감.
		// for문으로 3회 반복되므로 3개가 다 들어감.
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
		// i가 2인경우(숫자 3회 다 넣은경우), 숫자 3개 모두 비교하여 서로 같지 않은경우에 for문을 끝냄.
		// 같은 숫자가 있는경우 다시 랜덤을 돌려서 모두 다른 숫자일 경우에만 for문 종료.
	}
#if DEBUG_MODE == 1 // 디버그 모드가 1(true)이라면 #if와 #endif 사이의 코드를 컴파일함.
	printf("디버그모드입니다.\n");
	printf("정답은 %d, %d, %d\n\n", answer[0], answer[1], answer[2]); // 디버그 모드시 답을 공개함.
#endif // DEBUG_MODE

	printf("정답은 모두 다른 숫자입니다.\n");
	while (1)
	{
		strike = 0;
		ball = 0;
		// 이전번의 정답맞추기에서 증가한 스트라이크와 볼을 초기화.

		if (Life > 0)
		{
			printf("Life : %d\n", Life);
			
			printf("숫자 3개를 입력해주세요.\n");

			/*
			for (int i = 0; i < 3; i++)
				scanf(" %d", &insert[i]);
			// 정답의 경우와 같이 기본적으로 입력값을 받아서 insert[i](정답을 맞추려고 하는 번호)에 넣어준다.
			*/

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
				break; // if문을 탈출하는것이 아니라 가장 가까운 반복문 하나를 탈출함.
			}
			else
			{
				Life--; // 틀린경우에만 라이프가 감소. 
						// 라이프가 감소해서 출력해야하므로 남은 라이프가 출력되기전에 먼저 감소하도록 첫줄에 작성.
				printf("%d %d %d 는 %d스트라이크 %d볼 입니다.\n\n", insert[0], insert[1], insert[2], strike, ball);
				if (Life>0)
					printf("Life가 1 감소했습니다.\n\n");
			}
		}
		else
		{
			system("cls"); // 화면을 지움. #include <stdlib.h> 필요.
			printf("Life가 0이 되었습니다.\n");
			printf("게임오버.\n");
			break;
		}
	}

	return 0;
}