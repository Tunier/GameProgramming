#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		int menu = 0;
		printf("1),2),3),4),5),6),7),0)종료\n");
		scanf(" %d", &menu);

		if (menu == 1)
		{
			// 1. 반복문을 이용해서 @@@@@를 출력.
			for (int i = 0; i < 5; i++)
			{
				printf("@");
			}

			printf("\n\n");

			// 1-1. 반복문을 이용해서 
			/*
				@
				@
				@
				@
				@
				를 출력하라
			*/
			for (int i = 0; i < 5; i++)
			{
				printf("@\n");
			}

			printf("\n\n");
		}
		if (menu == 2)
		{
			// 2.자신의 이름을 7번 반복해서 출력하라.
			for (int i = 0; i < 7; i++)
			{
				printf("양명균");
			}

			printf("\n\n");

			// 2-1. 자신의 이름을 몇번 반복할지 입력 받아서 입력받은 횟수만큼 반복해서 출력하라
			int input;

			printf("출력할 횟수를 입력하세요.");
			scanf(" %d", &input);

			for (int i = 0; i < input; i++)
			{
				printf("양명균\n");
			}

			printf("\n\n");
		}
		if (menu == 3)
		{
			// 3. 반복문을 이용해서 보기처럼 화면에 출력하라.
			// -*-*-*-*-

			for (int i = 0; i < 9; i++)
			{
				if (i % 2 == 0)
				{
					printf("-");
				}
				else
				{
					printf("*");
				}
			}

			printf("\n\n");

			// 3.2 반복문을 이용해서 보기처럼 화면에 출력하라.
			/*
				-
				*
				-
				*
				-
				*
				-
			*/

			for (int i = 0; i < 7; i++)
			{
				if (i % 2 == 0)
				{
					printf("-");
				}
				else
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n\n");
		}
		if (menu == 4)
		{
			// 4. 숫자 1부터 10까지 반복문을 이용해서 출력하라.(1~10)
			for (int i = 1; i <= 10; i++)
			{
				printf("%d ", i);
			}

			printf("\n\n");

			// 4-1. 숫자 1부터 10까지 반복문을 이용해서 반대로 출력하라.(10~1)
			for (int i = 10; i >= 1; i--)
			{
				printf("%d ", i);
			}

			printf("\n\n");
		}
		if (menu == 5)
		{
			// 5. 반복문을 이용해서 50~100의 숫자를 큰 숫자에서 작은 숫자로 출력하라.
			for (int i = 100; i >= 50; i--)
			{
				printf("%d ", i);
			}

			/*
			for (int i = 0; i <= 50; i++)
			{
				printf("%d\n", 100 - i);
			}
			*/

			printf("\n\n");

			// 5-1. 반복문을 이용해서 50~100의 숫자중에서 5의 배수를 작은 숫자부터 큰 숫자 순서로 출력하라.
			for (int i = 50; i <= 100; i++)
			{
				if (i % 5 == 0)
				{
					printf("%d ", i);
				}
			}
			printf("\n\n");
		}
		if (menu == 6)
		{
			// 6. 구구단 2단을 출력하라.
			int i, insert;
			for (i = 1; i <= 9; i++)
			{
				printf("2 x %d = %d", i, 2 * i);
				printf("\n");
			}

			// 6-1. 구구단중 입력한 단을 출력하라.
			printf("2~9사이의 정수를 입력해주세요.");
			scanf(" %d", &insert);

			for (i = 1; i <= 9; i++)
			{
				printf("%d x %d = %d", insert, i, insert * i);
				printf("\n");
			}
		}
		if (menu == 7)
		{
			printf_s("1\n");

			for (int i = 1; i <= 5; i++)
			{
				for (int j = 1; j <= 5; j++)
				{
					if (i < j)
						printf_s(" ");
					else
						printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");

			printf_s("2\n");

			for (int i = 5; i >= 1; i--)
			{
				for (int j = 1; j <= 5; j++)
				{
					if (i >= j)
						printf_s("*");
					else
						printf_s(" ");
				}
				printf_s("\n");
			}
			printf_s("\n");

			printf_s("3\n");

			for (int i = 5; i > 0; i--)
			{
				for (int j = 1; j <= 5; j++)
				{
					if (i <= j)
						printf_s("*");
					else
						printf_s(" ");
				}
				printf_s("\n");
			}
			printf_s("\n");

			printf_s("4\n");

			for (int i = 1; i <= 5; i++)
			{
				for (int j = 1; j <= 5; j++)
				{
					if (i <= j)
						printf_s("*");
					else
						printf_s(" ");
				}
				printf_s("\n");
			}
			printf_s("\n");

			printf_s("5\n");

			int i;
			int height = 5;
			int length = 9;
			int center = height;
			
			for (height = 5; height >= 1; height--)
			{
				for (int i = 1; i < 5; i++)
				{
					if (height <= i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				for (int i = 5; i <= 9; i++)
				{
					if (i > length - height + 1)
					{
						printf(" ");
					}
					else
					{
						printf("*");
					}
				}
				printf_s("\n");
			}
			printf_s("\n");

			printf_s("6\n");
			
			i;
			height = 5;
			length = 9;
			center = 5;

			for (height = 5; height >= 1; height--)
			{
				for (int i = 5; i > 1; i--)
				{
					if (height >= i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				for (int i = 9; i >= 5; i--)
				{
					if (i < length - height + 1)
					{
						printf(" ");
					}
					else
					{
						printf("*");
					}
				}
				printf_s("\n");
			}
			printf_s("\n");

			printf_s("7\n");

			i;
			height = 10;
			length = 9;
			center = 5;

			for (height = 10; height >= 1; height--)
			{
				if (height > 5)
				{
					for (int i = 1; i < 5; i++)
					{
						if (height <= i)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}
					for (int i = 5; i <= 9; i++)
					{
						if (i > length - height + 1)
						{
							printf(" ");
						}
						else
						{
							printf("*");
						}
					}
				}
				else 
				{
					for (int i = 5; i > 1; i--)
					{
						if (height >= i)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}
					for (int i = 9; i >= 5; i--)
					{
						if (i < length - height + 1)
						{
							printf(" ");
						}
						else
						{
							printf("*");
						}
					}
				}
				printf_s("\n");
			}
			printf_s("\n");

		}
		if (menu == 0)
		{
			return 0;
		}
	}
	return 0;
}

/*
		 *
		***
	   *****
*******************
  ***************
	***********     // 넓이 19 높이 11
  ***************
*******************
	   *****
		***
		 *


		 *
		***
  ***************
	***********
	  *******
	***********
  ***************
		***
		 *
*/
