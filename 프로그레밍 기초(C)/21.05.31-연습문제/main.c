#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		int menu = 0;
		printf("1),2),3),4),5),6),7),0)����\n");
		scanf(" %d", &menu);

		if (menu == 1)
		{
			// 1. �ݺ����� �̿��ؼ� @@@@@�� ���.
			for (int i = 0; i < 5; i++)
			{
				printf("@");
			}

			printf("\n\n");

			// 1-1. �ݺ����� �̿��ؼ� 
			/*
				@
				@
				@
				@
				@
				�� ����϶�
			*/
			for (int i = 0; i < 5; i++)
			{
				printf("@\n");
			}

			printf("\n\n");
		}
		if (menu == 2)
		{
			// 2.�ڽ��� �̸��� 7�� �ݺ��ؼ� ����϶�.
			for (int i = 0; i < 7; i++)
			{
				printf("����");
			}

			printf("\n\n");

			// 2-1. �ڽ��� �̸��� ��� �ݺ����� �Է� �޾Ƽ� �Է¹��� Ƚ����ŭ �ݺ��ؼ� ����϶�
			int input;

			printf("����� Ƚ���� �Է��ϼ���.");
			scanf(" %d", &input);

			for (int i = 0; i < input; i++)
			{
				printf("����\n");
			}

			printf("\n\n");
		}
		if (menu == 3)
		{
			// 3. �ݺ����� �̿��ؼ� ����ó�� ȭ�鿡 ����϶�.
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

			// 3.2 �ݺ����� �̿��ؼ� ����ó�� ȭ�鿡 ����϶�.
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
			// 4. ���� 1���� 10���� �ݺ����� �̿��ؼ� ����϶�.(1~10)
			for (int i = 1; i <= 10; i++)
			{
				printf("%d ", i);
			}

			printf("\n\n");

			// 4-1. ���� 1���� 10���� �ݺ����� �̿��ؼ� �ݴ�� ����϶�.(10~1)
			for (int i = 10; i >= 1; i--)
			{
				printf("%d ", i);
			}

			printf("\n\n");
		}
		if (menu == 5)
		{
			// 5. �ݺ����� �̿��ؼ� 50~100�� ���ڸ� ū ���ڿ��� ���� ���ڷ� ����϶�.
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

			// 5-1. �ݺ����� �̿��ؼ� 50~100�� �����߿��� 5�� ����� ���� ���ں��� ū ���� ������ ����϶�.
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
			// 6. ������ 2���� ����϶�.
			int i, insert;
			for (i = 1; i <= 9; i++)
			{
				printf("2 x %d = %d", i, 2 * i);
				printf("\n");
			}

			// 6-1. �������� �Է��� ���� ����϶�.
			printf("2~9������ ������ �Է����ּ���.");
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
	***********     // ���� 19 ���� 11
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
