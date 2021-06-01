#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int insert, insert2;
	printf("2개의 숫자 입력 : ");
	scanf(" %d %d", &insert, &insert2);

	if ((insert >= 1) && (insert <= 9) && (insert2 >= 1) && (insert2 <= 9))
	{
		if (insert >= insert2)
		{
			for (int i = insert2; i <= insert; i++)
			{
				printf("%d단 시작\n", i);

				for (int j = 1; j <= 9; j++)
				{
					printf("%d x %d = %d\t", i, j, i * j);
				}
				printf("\n");
			}
		}
		else
		{
			for (int i = insert; i <= insert2; i++)
			{
				printf("%d단 시작\n", i);

				for (int j = 1; j <= 9; j++)
				{
					printf("%d x %d = %d\t", i, j, i * j);
				}
				printf("\n");
			}
		}
	}
	else
	{
		return 0;
	}

	return 0;
}