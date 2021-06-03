#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	printf("1)\n");
	/*
	*
	**
	***
	****
	*****
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("2)\n");
	/*
	*****
	****
	***
	**
	*
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	// 반복문의 증감자가 ++라면(반복할때마다 증가하면)
	// 반복문의 변수값은 특정 값보다 작은값을 기준으로 하며
	// 증감자가 --면, 특정 값보다 크다. 를 조건문으로 작성하면 된다.

	printf("3)\n");
	/*
		*
	   **
	  ***
	 ****
	*****
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("4)\n");
	/*
	*****
	 ****
	  ***
	   **
		*
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 5 - i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("5)\n");
	/*
		*
	   ***
	  *****
	 *******
	*********

	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("6)\n");
	/*
	*********
	 *******
	  *****
	   ***
		*
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (5 - i) * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("7)\n");
	/*
		*
	   ***
	  *****
	 *******
	*********
	 *******
	  *****
	   ***
		*
	*/
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= (i * 2); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (4 - i) * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");*/
	for (int i = -4; i < 5; i++)
	{
		int x = i;
		if (i < 0)
		{
			x *= -1;
		}
		for (int j = 0; j < x; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (9 - (x * 2)); k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("8)\n");
	/*
	*       *
	 *     *
	  *   *
	   * *
		*
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (int k = 0; k < (5 - i) * 2 - 3; k++)
		{
			printf(" ");
		}
		if (i != 4)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("9)\n");
	/*
		*
	   * *
	  *   *
	 *     *
	*       *
	*/
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (int k = 0; k < (i * 2) - 1; k++)
		{
			printf(" ");
		}
		if (i != 0)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}