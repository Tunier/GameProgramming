#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int input, input2, input3, input4;
	float finput, finput2, finput3;
	int maximum, minimum;

	// 1. ���ڸ� �Է¹޾� �������, �������� �������.
	printf("1�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է��� �ּ���.\n");

	scanf(" %d", &input);

	if (input > 0)
		printf("%d�� ����Դϴ�.\n", input);
	else if (input == 0)
		printf("%d�� 0�Դϴ�.\n", input);

	printf("\n");

	// 2. ���ڸ� �Է��ؼ� �ش� ���ڰ� Ȧ������, ¦������ ����� ��.
	//    ��, 0�� Ȧ¦ ��𿡵� ���Ե��� �ʵ��� �Ѵ�.
	printf("2�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է��� �ּ���.\n");

	scanf(" %d", &input);

	if (input == 0)
		printf("0�� �Է��ϼ̽��ϴ�.\n");
	else if (input % 2 == 0)
		printf("%d�� ¦���Դϴ�.\n", input);
	else if (input % 2 == 1)
		printf("%d�� Ȧ���Դϴ�.\n", input);

	printf("\n");

	// 3. �� ���ڸ� �Է¹޾Ƽ� ���� �� ū ���� ����϶�.
	printf("3�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է��� �ּ���.\n");

	scanf(" %d %d", &input, &input2);

	if (input > input2)
		printf("%d�� Ů�ϴ�.\n", input);
	else if (input2 > input)
		printf("%d�� Ů�ϴ�.\n", input2);
	else
		printf("�Է��Ͻ� �� ���ڰ� %d�� �����ϴ�.\n", input);

	printf("\n");

	// 4. ���� 2���� �Է¹޾� �� ���� ���� ����غ���. 
	//    ��, �Է� ������ ������� �� ������ ū���ڿ��� ���� ���ڸ� �������Ѵ�.
	printf("4�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է��� �ּ���.\n");

	scanf(" %d %d", &input, &input2);

	if (input >= input2)
		printf("%d - %d = %d�Դϴ�.\n", input, input2, input - input2);
	else if (input2 > input)
		printf("%d - %d = %d�Դϴ�.\n", input2, input, input2 - input);

	printf("\n");

	// 5. ���� 2���� �Է¹޾Ƽ� ���� �Է��� ���ڸ� ���߿� �Է��� ���ڷ� ���� ��� �������� �������.
	//    ��, ���߿� �Է��� ���ڴ� 0�� �� �� ����.
	printf("5�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է��� �ּ���.\n");

	scanf(" %d %d", &input, &input2);

	if (input2 == 0)
		printf("�ڿ� �Է��� ���ڴ� 0�� �ɼ� �����ϴ�.\n");
	else
		printf("���� %d, �������� %d�Դϴ�.\n", input / input2, input % input2);

	printf("\n");

	// 6. �� ���ڸ� �Է¹޾Ƽ� ���� ���ڰ� ū ������ ������� �ƴ��� ����϶�.
	printf("6�� ���� �Դϴ�.\n");

	printf("���ڸ� 2�� �Է��� �ּ���.\n");

	scanf(" %d %d", &input, &input2);

	if (input > input2)
		if (input % input2 == 0)
			printf("%d��(��) %d�� ����Դϴ�.\n", input2, input);
		else
			printf("%d��(��) %d�� ����� �ƴմϴ�.\n", input2, input);
	else
		if (input2 % input == 0)
			printf("%d��(��) %d�� ����Դϴ�.\n", input, input2);
		else
			printf("%d��(��) %d�� ����� �ƴմϴ�.\n", input, input2);

	printf("\n");

	// 7. ���ڸ� �Է¹޾Ƽ� 60�̻��̸� �հ� �ƴϸ� ���հ��� �������.
	printf("7�� ���� �Դϴ�.\n");

	printf("���ڸ� �Է��� �ּ���.\n");

	scanf(" %d", &input);

	if (input >= 60)
		printf("%d������ �հ��Դϴ�.\n", input);
	else
		printf("%d������ ���հ��Դϴ�.\n", input);

	printf("\n");

	// 8. �Ǽ��� �����ͷ� ������ 3�� �Է¹޾Ƽ� ��� 60 �̻��̸� �հ�, �ƴϸ� ���հ��� ���.
	//    ������� ���� �Բ� ����� ��.
	printf("8�� ���� �Դϴ�.\n");

	printf("���ڸ� 3�� �Է��� �ּ���.\n");

	scanf(" %f %f %f", &finput, &finput2, &finput3);

	if ((finput + finput2 + finput3) / 3 >= 60)
		printf("�հ��Դϴ�.\n");
	else
		printf("���հ��Դϴ�.\n");

	printf("\n");

	// 9. 4���� ������ �Է¹޾� �� ��տ� ���� ������ �������.
	printf("9�� ���� �Դϴ�.\n");

	printf("���ڸ� 4�� �Է��� �ּ���.\n");

	scanf(" %d %d %d %d", &input, &input2, &input3, &input4);

	if ((input + input2 + input3 + input4) / 4 >= 90)
		printf("A\n");
	else if ((input + input2 + input3 + input4) / 4 >= 80)
		printf("B\n");
	else if ((input + input2 + input3 + input4) / 4 >= 70)
		printf("C\n");
	else if ((input + input2 + input3 + input4) / 4 >= 60)
		printf("D\n");
	else
		printf("F\n");

	printf("\n");

	// 10. ȸ�� ����� �Է��ϸ� ��޿� ���� �ٸ� ���ѵ��� �������.
	printf("10�� ���� �Դϴ�.\n");

	printf("ȸ������� �Է��� �ּ���.(1~3)\n");

	scanf(" %d", &input);

	switch (input)
	{
	case 1:
		printf("�ش� ����� ������ �б��Դϴ�.\n");
		break;
	case 2:
		printf("�ش� ����� ������ ����, �б��Դϴ�.\n");
		break;
	case 3:
		printf("�ش� ����� ������ ����, ����, �б��Դϴ�.\n");
		break;
	default:
		break;
	}
}