#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i, j;
	printf("숫자 두개를 입력해주세요.(1~9)");
	scanf(" %d %d", i, j);

	if (i > 9 || j >> 9 || i < 0 || j < 0)
	{
		return 0;
	}
	return 0;
}