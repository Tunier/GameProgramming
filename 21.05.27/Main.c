#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello World\n\n");

	printf("���� %d���Դϴ�.\n", 26);
	printf("���� %.1f�Դϴ�.\n", 168.9f);
	printf("���� %c�Դϴ�.\n", 'A');
	printf("���� %s�Դϴ�.\n", "����");

	printf("5+9=%d\n", 5 + 9);

	int Level;
	Level = 10;

	printf("\n�� ������ %d�Դϴ�.\n", Level);

	Level = 11;

	printf("\n�� ������ %d�Դϴ�.\n", Level);

	int i = 100;		//����
	float f = 3.14f;	//�Ǽ�
	char c = 'A';		//����

	printf("\n2 x 1 = %d\n", 2);
	printf("2 x 2 = %d\n", 2*2);
	printf("2 x 3 = %d\n", 2*3);
	printf("2 x 4 = %d\n", 2*4);
	printf("2 x 5 = %d\n", 2*5);
	printf("2 x 6 = %d\n", 2*6);
	printf("2 x 7 = %d\n", 2*7);
	printf("2 x 8 = %d\n", 2*8);
	printf("2 x 9 = %d\n", 2*9);

	int age = 26;
	float weight = 68.5f;
	float height = 168.9f;

	printf("\n����:%d\nü��:%.1f\n����:%.1f\n", age, weight, height);

	return 0;
}