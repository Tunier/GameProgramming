#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int input = 0, input2 = 0;
	int sum = 0;

	// 1. 1���� 10������ ���ڸ� �ݺ����� �̿��Ͽ� ����ض�.
	printf("1�� ���� �Դϴ�.\n");

	for (int i = 0; i < 10; i++)
		printf("%d ", i + 1);

	printf("\n");

	// 2. ���ڸ� �Է¹޾� 0���� �Է��� ���ڱ����� ����϶�.
	printf("2�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.\n");

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

	printf("���ڸ� �Է����ּ���.\n");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0)
			printf("%d ", i);

	printf("\n\n");

	// 7. 100 ������ ���� �߿��� �Է��� ������ ����� �����ϰ� ��� ����϶�.
	printf("7�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.\n");

	scanf(" %d", &input);

	for (int i = 1; i <= 100; i++)
		if (i % input == 0) {}
		else
			printf("%d ", i);

	printf("\n\n");

	// 8. 100 ������ ���� �߿��� 3�� ����̸鼭 5�� ����� ���ڸ� ����϶�.
	printf("8�� ���� �Դϴ�.\n");

	for (int i = 1; i <= 100; i++)
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%d ", i);

	printf("\n\n");

	// 9. ���ڸ� �Է¹޾� �ش� ������ ����� 10�� ����϶�.
	printf("9�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.\n");

	scanf(" %d", &input);

	for (int i = 0; i < 10; i++)
		printf("%d ", input * (i + 1));

	printf("\n\n");

	// 10. ���ڸ� �Է¹޾� 1���� �ش� ���ڱ����� ��� ���� ���� ����϶�.
	printf("10�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է����ּ���.\n");

	scanf(" %d", &input);

	for (int i = 1; i <= input; i++)
		sum += i;

	printf("1���� %d������ �� ���� %d\n", input, sum);

	printf("\n");

	// 11. ���� 2���� �Է¹޾� �� �� ������ ���ڵ��� ���� ����϶�.
	printf("11�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է����ּ���.\n");

	scanf(" %d %d", &input, &input2);

	sum = 0;

	if (input < input2)
		for (int i = input; i <= input2; i++)
			sum += i;
	else
		for (int i = input2; i <= input; i++)
			sum += i;

	printf("�� �� ������ ���ڵ��� ���� %d\n", sum);

	printf("\n");

	// 12. ���� 0�� �Է��� ������ ��� ���ڸ� �Է¹ް�, 0�� �Է��ϸ� ���±��� �Է��ߴ� ��� ���ڵ��� ���� ����϶�.
	printf("12�� ���� �Դϴ�.\n");

	sum = 0;

	while (1)
	{
		printf("���ڸ� �Է����ּ���.\n");

		scanf(" %d", &input);

		sum += input;

		if (input == 0)
		{
			printf("�Է��ߴ� ��� ���ڵ��� ���� %d",sum);
			break;
		}
	}


	return 0;
}