#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int menu = 0;
	printf("메뉴를 선택하세요.\n");
	printf("1. 연습 1번문제\n2. 연습 2번문제\n3. 연습 3번문제\n4. 연습 4번문제\n5. 연습 5번문제\n6. 연습 6번문제\n");
	printf("7. 응용 1번문제\n8. 응용 2번 문제\n9. 응용 3번 문제\n10. 응용 4번 문제\n11. 응용 5번문제\n");
	scanf(" %d", &menu);

	//연습문제

	if (menu == 1)
	{
		//1. 점수를 입력받아 60점 이상이면 합격 / 미만이면 불합격을 출력하기
		int score;

		printf("점수를 입력하세요.\n");
		scanf(" %d", &score);
		if (score >= 60)
		{
			printf("합격");
		}
		else
		{
			printf("불합격");
		}
	}
	else if (menu == 2)
	{
		//	2. 숫자 입력해서 7의 배수인지 출력(switch문 사용)
		int i;
		printf("숫자를 입력하세요.\n");
		scanf(" %d", &i);
		switch (i &= 7 == 0)
		{
		case 0:
			printf("7의 배수 입니다.\n");
			break;
		default:
			printf("7의 배수가 아닙니다.\n");
			break;
		}
	}
	else if (menu == 3)
	{
		//	3. 점수를 입력해서 학점을 출력(90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만 F)
		int score;
		printf("점수를 입력하세요.\n");
		scanf(" %d", &score);
		if (score >= 90)
		{
			printf("당신의 학점은 A입니다.\n");
		}
		else if (score >= 80)
		{
			printf("당신의 학점은 B입니다.\n");
		}
		else if (score >= 70)
		{
			printf("당신의 학점은 C입니다.\n");
		}
		else if (score >= 60)
		{
			printf("당신의 학점은 D입니다.\n");
		}
		else
		{
			printf("당신의 학점은 F입니다.\n");
		}
	}
	else if (menu == 4)
	{
		//	4. 숫자 2개를 입력받아 첫번째 숫자를 두번째 숫자로 나눈 몫과 나머지를 출력하기(나누기: / 나머지 : %)
		int input;
		int input2;

		printf("정수를 두개 입력해 주세요.\n");
		scanf(" %d %d", &input, &input2);

		printf("%d를 %d로 나눈 몫은 %d이고 나머지는 %d입니다.", input, input2, input / input2, input % input2);
	}
	else if (menu == 5)
	{
		//	5. 숫자 3개를 입력받아 3개중에 가장 큰 숫자, 작은 숫자를 출력하기
		int input, input2, input3;
		int biggest = 5;
		int least;

		printf("숫자를 세개 입력해 주세요.\n");
		scanf(" %d %d %d", &input, &input2, &input3);
		// 3 5 2
		if (input >= input2)
		{
			if (input >= input3)
			{
				biggest = input;
			}
			else
			{
				biggest = input3;
			}
		}
		else if (input2 >= input3)
		{
			biggest = input2;
		}
		else
		{
			biggest = input3;
		}

		if (input <= input2)
		{
			if (input <= input3)
			{
				least = input;
			}
			else
			{
				least = input3;
			}
		}
		else if (input2 <= input3)
		{
			least = input2;
		}
		else
		{
			least = input3;
		}

		printf("가장 큰 숫자는 %d이고 가장 작은 숫자는 %d입니다.", biggest, least);
	}
	else if (menu == 6)
	{
		//	6. 숫자 3개를 입력받아서 평균치가 60을 넘으면(이상이면) 합격 넘지 못하면 불합격이라고 출력하기		
		int input, input2, input3;
		printf("점수를 세개 입력해 주세요.\n");
		scanf(" %d %d %d", &input, &input2, &input3);
		int average = (input + input2 + input3) / 3;

		if (average >= 60)
		{
			printf("평균 %d점으로 합격입니다.\n", average);
		}
		else
		{
			printf("평균 %d점으로 불합격입니다.\n", average);
		}
	}
	//======================응용문제======================

	else if (menu == 7)
	{
		// 1. 두개의 숫자를 입력받은 뒤 첫번째 입력한 숫자가 두번째 입력한 숫자의	배수인지 출력하라(swtich문 사용)
		int input;
		int input2;

		printf("숫자를 두개 입력해 주세요.\n");
		scanf(" %d %d", &input, &input2);
		switch (input &= input2 == 0)
		{
		case 0:
			printf("%d는 %d의 배수 입니다.\n", input, input2);
			break;
		default:
			printf("%d는 %d의 배수가 아닙니다.\n", input, input2);
			break;
		}

	}
	else if (menu == 8)
	{
		// 2. 점수를 입력하고, 커트라인을 입력한 뒤 점수가 커트라인 이상이면 합격, 아니면 불합격을	출력하라.
		int score;
		int cutline;

		printf("점수를 입력하세요.\n");
		scanf(" %d", &score);

		printf("커트라인을 입력하세요.\n");
		scanf(" %d", &cutline);

		if (score >= cutline)
		{
			printf("합격");
		}
		else
		{
			printf("불합격");
		}
	}
	else if (menu == 9)
	{
		// 3. 점수를 3개 입력하고, 커트라인을 입력한 뒤	점수의 평균이 커트라인 이상이면 합격, 아니면 불합격을 출력하라.
		int input, input2, input3;
		int cutline;

		printf("숫자를 세개 입력해 주세요.\n");
		scanf(" %d %d %d", &input, &input2, &input3);

		int average = (input + input2 + input3) / 3;

		printf("커트라인을 입력하세요.\n");
		scanf(" %d", &cutline);

		if (average >= cutline)
		{
			printf("평균 %d점으로 합격입니다.\n", average);
		}
		else
		{
			printf("평균 %d점으로 불합격입니다.\n", average);
		}
	}
	else if (menu == 10)
	{
		//​ 4. 숫자 두개를 입력 받아서 둘중 큰 숫자를 작은 숫자로 나눈 몫과 나머지를 출력하라. 같다면 각각 1, 0을 출력한다.
		int input;
		int input2;

		printf("정수를 두개 입력해 주세요.\n");
		scanf(" %d %d", &input, &input2);

		if (input >= input2)
		{
			printf("몫은 %d이고 나머지는 %d입니다.", input / input2, input % input2);
		}
		else
		{
			printf("몫은 %d이고 나머지는 %d입니다.", input2 / input, input2 % input);
		}
	}
	else if (menu == 11)
	{
		// 5. 숫자(실수)를 입력받아서 원화를 달러로 환전시킨 수치를 출력하는 프로그램. (환율 1, 115.70원 기준)
		int i;
		float won, dollor;
		
		firstScean:
		printf("원화를 달러로 환전하시려면 1, 달러를 원화로 환전하시려면 2를 입력해주세요.\n");
		printf("현재 환율은 1달러에 1,115.70원 입니다.\n");
		scanf(" %d", &i);
		
		if (i == 1)
		{
			printf("원화를 입력해주세요.\n");
			scanf(" %f", &won);
			printf("입력하신 원화는 %f원 입니다.\n", won);
			dollor = won / 1115.7;
			printf("달러로 환전하면 %.3f달러 입니다.\n", dollor);
		}
		else if (i == 2)
		{
			printf("달러를 입력해주세요.\n");
			scanf(" %f", &dollor);
			printf("입력하신 달러는 %f달러 입니다.\n", dollor);
			won = dollor * 1115.7;
			printf("원으로 환전하면 %.3f원 입니다.\n", won);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시입력해주세요.\n");
			goto firstScean;
		}
	}

	return 0;
}