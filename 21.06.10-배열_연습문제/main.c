#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main()
{
	int input = 0;
	int count = 0;
	int max, min;
	int temp;

	//// 1. �迭�� ����� 10, 20, 30, 40, 50�� �迭�� ���� �� �̸� ����϶�.
	//printf("1�� ���� �Դϴ�.\n");

	//int ary[5] = { 10,20,30,40,50 };

	//for (int i = 0; i < 5; i++)
	//	printf("ary[%d] : %d\n", i, ary[i]);

	//printf("\n");

	//// 2. �迭�� ����� 10, 20, 30, 40, 50�� �迭�� ���� ��
	////    �迭�� �ε��� ��ȣ�� �Է¹޾� �ش� �ε����� ����� ���ڸ� ����϶�.
	//printf("2�� ���� �Դϴ�.\n");

	//int ary2[5] = { 10,20,30,40,50 };

	//printf("�ε����� �Է��ϼ���.(0~4)\n");

	//scanf(" %d", &input);

	//printf("ary2[%d] : %d", input, ary2[input]);

	//printf("\n");

	//// 3. ���� 5���� �Է¹޾� �̸� �迭�� �����ϰ� �̸� ������� ����϶�.
	//printf("3�� ���� �Դϴ�.\n");

	//int ary3[5] = { 0, };

	//printf("�迭�� ������ ���ڸ� 5�� �Է��ϼ���.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary3[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	printf("ary3[%d] : %d\n", i, ary3[i]);

	//printf("\n");

	//// 4. ���� 5���� �Է¹޾� �̸� �迭�� �����ϰ� �������� ����϶�.
	//printf("4�� ���� �Դϴ�.\n");

	//int ary4[5] = { 0, };

	//printf("�迭�� ������ ���ڸ� 5�� �Է��ϼ���.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary4[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	printf("ary4[%d] : %d\n", 4 - i, ary4[4 - i]);

	//printf("\n");

	//// 5. ���� 5���� �Է¹޾� �̸� �迭�� �����ϰ� ������ ���ڰ� ¦���϶��� ����϶�.
	//printf("5�� ���� �Դϴ�.\n");

	//int ary5[5] = { 0, };

	//printf("�迭�� ������ ���ڸ� 5�� �Է��ϼ���.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary5[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	if (ary5[i] % 2 == 0)
	//		printf("ary5[%d] : %d\n", i, ary5[i]);

	//printf("\n");

	//// 6. ���� 5���� �Է¹޾� �̸� �迭�� �����ϰ� ������ ���ڰ� 3�� ����϶��� ����϶�.
	//printf("6�� ���� �Դϴ�.\n");

	//int ary6[5] = { 0, };

	//printf("�迭�� ������ ���ڸ� 5�� �Է��ϼ���.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary6[i] = input;
	//}

	//for (int i = 0; i < 5; i++)
	//	if (ary6[i] % 3 == 0)
	//		printf("ary6[%d] : %d\n", i, ary6[i]);

	//printf("\n");

	//// 7. ���� 5���� �Է¹޾� �̸� �迭�� �����ϰ�,
	////    ���ڸ� �߰��� �ϳ� �Է¹޾� �ش� ���ڰ� �迭 ���� � �ִ��� ����϶�.
	//printf("7�� ���� �Դϴ�.\n");

	//int ary7[5] = { 0, };

	//printf("�迭�� ������ ���ڸ� 5�� �Է��ϼ���.\n");

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf(" %d", &input);
	//	ary7[i] = input;
	//}

	//printf("�迭�� ��ִ��� ã����� ���ڸ� �Է��ϼ���.\n");

	//scanf(" %d", &input);

	//for (int i = 0; i < 5; i++)
	//	if (ary7[i] == input)
	//		count++;

	//printf("%d�� ary7�� %d�� �ֽ��ϴ�.\n", input, count);

	//printf("\n");

	//// 8. ���� 5���� �Է¹޾� �̸� �迭�� �����ϰ�,
	////    �� �� ���� ū ���ڿ� ���� ���� ���ڸ� �迭���� ã�� ����϶�.
	//printf("8�� ���� �Դϴ�.\n");

	//int ary8[5] = { 0, };

	//printf("�迭�� ������ ���ڸ� 5�� �Է��ϼ���.\n");

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

	//printf("���� ū ���� : %d\n���� ���� ���� : %d\n", max, min);

	//printf("\n");

	//// 9. 20���� �迭�� ����� ������ ���ڷ� �ʱ�ȭ�� �� 
	////    5�� ������ ����ϰ� ���� �ٲ� �� �ٽ� ����ϱ� �ݺ��Ͽ�
	//printf("9�� ���� �Դϴ�.\n");

	//int ary9[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	//for (int i = 0; i < 20; i++)
	//	if ((i != 0) && ((i+1) % 5 == 0))
	//		printf("%d\n", ary9[i]);
	//	else
	//		printf("%d ", ary9[i]);

	//printf("\n");

	//// 10. ���ڿ��� ����� HelloWorld�� �ʱ�ȭ �� �� �̸� ����϶�.
	//printf("10�� ���� �Դϴ�.\n");

	//char s[64] = "HelloWorld";

	//printf("%s\n", s);

	//printf("\n");

	// 11. ���ڿ��� ����� ���ڿ��� ������ ������ �Է¹��� �� �̸� ����϶�.
	printf("11�� ���� �Դϴ�.\n");

	char s2[64];

	printf("���ڿ��� ������ ���ڸ� �Է��ϼ���.\n");

	scanf(" %s", &s2);

	printf("%s\n", s2);

	printf("\n");

	// 12. HelloWordl��� ����� ���ڿ��� ����� �̸� �Ųٷ� �������.
	//     ����� ���ڿ��� �����ʹ� �ǵ帮�� �ʴ´�.
	printf("12�� ���� �Դϴ�.\n");

	char s3[11] = { "HelloWorld" };

	for (int i = 0; i < 11; i++)
		printf("%c", s3[10 - i]);

	printf("\n\n");

	// 13. HelloWordl��� ����� ���ڿ��� ����� �̸� �Ųٷ� '������ ��' �������.
	//     ����� ���ڿ��� �����͸� ������ ������� �Ѵ�.  
	printf("13�� ���� �Դϴ�.\n");

	char s4[11] = { "HelloWorld" };

	char s4cpy[11];

	strcpy(s4cpy, s4);

	for (int i = 0; i < 11; i++)
		s4[i] = s4cpy[10 - i];

	for (int i = 0; i < 11; i++)
		printf("%c", s4[i]);

	printf("\n\n");

	// 14. ���� 5���� �Է¹޾� �̸� �迭�� �����ϰ� ���� ū ���ں��� ���ʴ�� ����϶�.
	printf("14�� ���� �Դϴ�.\n");

	int ary14[5] = { 0, };

	printf("�迭�� ������ ���ڸ� 5�� �Է��ϼ���.\n");

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