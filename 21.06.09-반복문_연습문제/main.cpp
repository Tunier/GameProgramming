#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int input;

	// 1. 1���� 10������ ���ڸ� �ݺ����� �̿��Ͽ� ����ض�.
	printf("1�� ���� �Դϴ�.\n");

	for (int i = 0; i < 10; i++)
		printf("%d ", i + 1);

	printf("\n");

	// 2. ���ڸ� �Է¹޾� 0���� �Է��� ���ڱ����� ����϶�.
	printf("2�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.");

	scanf(" %d", &input);

	for (int i = 0; i < input; i++)
		printf("%d ", i);

	// 3. 100 ������ ���� �߿��� ¦���� ����϶�.
	printf("3�� ���� �Դϴ�.\n");

	for (int i = 1; i <= 100; i++)
		if (i % 2 == 0)
			printf("%d ", i);

	printf("\n\n");

	// 4. 100 ������ ���� �߿��� Ȧ���� ����϶�.
	printf("4�� ���� �Դϴ�.\n");

	for (int i = 1; i <= 100; i++)
		if (i % 2 == 1)
			printf("%d ", i);

	printf("\n\n");

	// 5. 100 ������ ��� �߿��� 3�� ������� ����϶�.
	printf("5�� ���� �Դϴ�.\n");

	for (int i = 1; i <= 100; i++)
		if (i % 3 == 0)
			printf("%d ", i);

	printf("\n\n");

	// 6. 100 ������ ���� �߿��� �Է��� ������ ����� ����϶�.
	printf("6�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0)
			printf("%d ", i);

	printf("\n\n");

	// 7. 100 ������ ���� �߿��� �Է��� ������ ����� �����ϰ� ��� ����϶�.
	printf("7�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0) {}
		else
			printf("%d ", i);
			
	printf("\n\n");

	





	return 0;
}