#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// ����ü(Struct)
// ���� �⺻ �������ִ� �ڷ����� �ƴ϶� 
// ������� �ʿ信 ���ؼ� ����� ���ο� �ڷ���.
// ������ �����ϴ� �������� �ڷ����� ���
// �ϳ��� �ڷ���ó�� ����Ҽ� �ֵ��� ����� ��.

struct MyCharacter
{
	int level;
	float exp;
	char name[256];
};

void print_struct(struct MyCharacter target)
{
	// ����ü�� ������� �ڷ���ó�� �Լ��� �Ű������ε� �����ִ�.
	printf("����ü�� ������ ����մϴ�.\n");
	printf("�̸� : %s\n", target.name);
	printf("���� : %d\n", target.level);
	printf("����ġ : %.2f\n", target.exp);
}

int main()
{
	struct MyCharacter chara;
	// ���ǵ� ����ü�� ����ϴ� ���
	// struct ����ü�� ������;

	chara.exp = 98.5f;
	chara.level = 10;
	strcpy(chara.name, "AAA");

	// ����ü ���� ������ �����Ϸ���
	// ����ü ������.����ü ���� ������ ���� �����Ѵ�.

	printf("�̸� : %s\n���� : %d\n����ġ : %.2f\n", chara.name, chara.level, chara.exp);

	/*
		MyCharacter �� ������ ����
		�����͸� �Է¹޾� �Էµ� �����͸� ����غ���
	*/

	struct MyCharacter chara2;

	printf("ĳ������ �̸��� �Է����ּ���.\n");

	scanf(" %s", &chara2.name);

	printf("ĳ������ ������ �Է����ּ���.\n");

	scanf(" %d", &chara2.level);

	printf("ĳ������ ����ġ�� �Է����ּ���.\n");

	scanf(" %f", &chara2.exp);

	printf("�̸� : %s\n���� : %d\n����ġ : %.2f\n", chara2.name, chara2.level, chara2.exp);

	struct MyCharacter array[5];
	// ����ü�� �Ϲ����� �ڷ���ó�� �迭�ε� ����� �ִ�.

	for (int i = 0; i < 5; i++)
	{
		strcpy(array[i].name, "����");
		array[i].level = 1;
		array[i].exp = 5.0f;
	}
	// �Ϲ����� �ڷ����� �迭ó�� �ݺ����� ���� �迭 �����͸� �ϰ������� ��ü�Ҽ� �ִ�.

	print_struct(chara);
	print_struct(chara2);
	for (int i = 0; i < 5; i++)
		print_struct(array[i]);



	return 0;
}