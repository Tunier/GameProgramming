#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main()
{
	int input = 0;
	int count = 0;
	int max, min;
	int temp;

	//// 1. 배열을 만들고 10, 20, 30, 40, 50을 배열에 넣은 뒤 이를 출력하라.
	//printf("1번 문제 입니다.\n");

	//int ary[5] = { 10,20,30,40,50 };

	//for (int i = 0; i < 5; i++)
	//	printf("ary[%d] : %d\n", i, ary[i]);

	//printf("\n");

	//// 2. 배열을 만들고 10, 20, 30, 40, 50을 배열에 넣은 뒤
	////    배열의 인덱스 번호를 입력받아 해당 인덱스에 저장된 숫자를 출력하라.
	//printf("2번 문제 입니다.\n");

	//int ary2[5] = { 10,20,30,40,50 };

	//printf("인덱스를 입력하세요.(0~4)\n");

	//scanf(" %d", &input);

	//printf("ary2[%d] : %d", input, ary2[input]);

	//printf("\n");

	//// 3. 숫자 5개를 입력받아 이를 배열에 저장하고 이를 순서대로 출력하라.
	//printf("3번 문제 입니다.\n");

	//int ary3[5] = { 0, };

	//printf("배열에 저장할 숫자를 5개 입력하세요.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary3[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	printf("ary3[%d] : %d\n", i, ary3[i]);

	//printf("\n");

	//// 4. 숫자 5개를 입력받아 이를 배열에 저장하고 역순으로 출력하라.
	//printf("4번 문제 입니다.\n");

	//int ary4[5] = { 0, };

	//printf("배열에 저장할 숫자를 5개 입력하세요.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary4[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	printf("ary4[%d] : %d\n", 4 - i, ary4[4 - i]);

	//printf("\n");

	//// 5. 숫자 5개를 입력받아 이를 배열에 저장하고 저장한 숫자가 짝수일때만 출력하라.
	//printf("5번 문제 입니다.\n");

	//int ary5[5] = { 0, };

	//printf("배열에 저장할 숫자를 5개 입력하세요.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary5[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	if (ary5[i] % 2 == 0)
	//		printf("ary5[%d] : %d\n", i, ary5[i]);

	//printf("\n");

	//// 6. 숫자 5개를 입력받아 이를 배열에 저장하고 저장한 숫자가 3의 배수일때만 출력하라.
	//printf("6번 문제 입니다.\n");

	//int ary6[5] = { 0, };

	//printf("배열에 저장할 숫자를 5개 입력하세요.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary6[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	if (ary6[i] % 3 == 0)
	//		printf("ary6[%d] : %d\n", i, ary6[i]);

	//printf("\n");

	//// 7. 숫자 5개를 입력받아 이를 배열에 저장하고,
	////    숫자를 추가로 하나 입력받아 해당 숫자가 배열 내에 몇개 있는지 출력하라.
	//printf("7번 문제 입니다.\n");

	//int ary7[5] = { 0, };

	//printf("배열에 저장할 숫자를 5개 입력하세요.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary7[i] = input;
	//}

	//printf("배열에 몇개있는지 찾고싶은 숫자를 입력하세요.\n");

	//scanf(" %d", &input);

	//for (int i = 0; i < 5; i++)
	//	if (ary7[i] == input)
	//		count++;

	//printf("%d는 ary7에 %d개 있습니다.\n", input, count);

	//printf("\n");

	//// 8. 숫자 5개를 입력받아 이를 배열에 저장하고,
	////    이 중 가장 큰 숫자와 가장 작은 숫자를 배열에서 찾아 출력하라.
	//printf("8번 문제 입니다.\n");

	//int ary8[5] = { 0, };

	//printf("배열에 저장할 숫자를 5개 입력하세요.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary8[i] = input;
	//}

	//max = ary8[0], min = ary8[0];

	//for (int i = 0; i < 5; i++)
	//{
	//	if (ary8[i] > max)
	//		max = ary8[i];

	//	if (ary8[i] < min)
	//		min = ary8[i];
	//}

	//printf("가장 큰 숫자 : %d\n가장 작은 숫자 : %d\n", max, min);

	//printf("\n");

	//// 9. 20개의 배열을 만들고 임의의 숫자로 초기화한 뒤 
	////    5개 단위로 출력하고 줄을 바꾼 뒤 다시 출력하길 반복하여
	//printf("9번 문제 입니다.\n");

	//int ary9[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	//for (int i = 0; i < 20; i++)
	//	if ((i != 0) && ((i+1) % 5 == 0))
	//		printf("%d\n", ary9[i]);
	//	else
	//		printf("%d ", ary9[i]);

	//printf("\n");

	//// 10. 문자열을 만들고 HelloWorld로 초기화 한 뒤 이를 출력하라.
	//printf("10번 문제 입니다.\n");

	//char s[64] = "HelloWorld";

	//printf("%s\n", s);

	//printf("\n");

	// 11. 문자열을 만들고 문자열에 저장할 내용을 입력받은 뒤 이를 출력하라.
	printf("11번 문제 입니다.\n");

	char s2[64];

	printf("문자열에 저장할 문자를 입력하세요.\n");

	scanf(" %s", &s2);

	printf("%s\n", s2);

	printf("\n");

	// 12. HelloWordl라고 저장된 문자열을 만들고 이를 거꾸로 출력하자.
	//     저장된 문자열의 데이터는 건드리지 않는다.
	printf("12번 문제 입니다.\n");

	char s3[11] = { "HelloWorld" };

	for (int i = 0; i < 11; i++)
		printf("%c", s3[10 - i]);

	printf("\n\n");

	// 13. HelloWordl라고 저장된 문자열을 만들고 이를 거꾸로 '저장한 뒤' 출력하자.
	//     저장된 문자열의 데이터를 실제로 뒤집어야 한다.  
	printf("13번 문제 입니다.\n");

	char s4[11] = { "HelloWorld" };

	char s4cpy[11];

	strcpy(s4cpy, s4);

	for (int i = 0; i < 11; i++)
		s4[i] = s4cpy[10 - i];

	for (int i = 0; i < 11; i++)
		printf("%c", s4[i]);

	printf("\n\n");

	// 14. 숫자 5개를 입력받아 이를 배열에 저장하고 가장 큰 숫자부터 차례대로 출력하라.
	printf("14번 문제 입니다.\n");

	int ary14[5] = { 0, };

	printf("배열에 저장할 숫자를 5개 입력하세요.\n");

	for (int i = 0; i < 5; i++)
	{
		scanf(" %d", &input);
		ary14[i] = input;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (ary14[i] <= ary14[j])
			{
				temp = ary14[i];
				ary14[i] = ary14[j];
				ary14[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
		printf("%d ", ary14[i]);


	return 0;
}