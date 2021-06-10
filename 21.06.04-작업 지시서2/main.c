#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_array(int ary[], int leagth, char name[])
{
	printf("%s배열 : ", name);
	for (int i = 0; i < leagth; i++)
	{
		if (i < leagth - 1)
			printf("%d, ", ary[i]);
		else
			printf("%d", ary[i]);		
	}
	
	if (name == "ary_hol")
		printf(" - 홀수 %d개", leagth);
	else if (name == "ary_jjak")
		printf(" - 짝수 %d개", leagth);
	
	printf("\n");
}

int main()
{
	int ary[10], ary_hol[10], ary_jjak[10];
	int hol_count = 0, jjak_count = 0;
	int input;

	printf("숫자를 10개 입력해 주세요.\n");
	for (int i = 0; i < 10; i++)
	{
		scanf(" %d", &input);
		ary[i] = input;
	}

	for (int i = 0; i < 10; i++)
	{
		if (ary[i] % 2 == 1)
		{
			ary_hol[hol_count] = ary[i];
			hol_count++;			
		}
		else
		{
			ary_jjak[jjak_count] = ary[i];
			jjak_count++;
		}
	}

	print_array(ary, 10, "ary");

	printf("\n");

	print_array(ary_hol, hol_count, "ary_hol");

	printf("\n");

	print_array(ary_jjak, jjak_count, "ary_jjak");

	return 0;
}