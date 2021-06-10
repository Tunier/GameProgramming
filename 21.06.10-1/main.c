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

typedef struct Book
{
	char title[256];
	char writer[256];
	int price;
	int year;
}Book;

void print_struct(struct MyCharacter target)
{
	// ����ü�� ������� �ڷ���ó�� �Լ��� �Ű������ε� �����ִ�.
	printf("����ü�� ������ ����մϴ�.\n");
	printf("�̸� : %s\n", target.name);
	printf("���� : %d\n", target.level);
	printf("����ġ : %.2f\n", target.exp);
}

void print_Book(struct Book target)
{
	printf("å�� ������ ����մϴ�.\n");
	printf("���� : %s\n", target.title);
	printf("���� : %s\n", target.writer);
	printf("���� : %d\n", target.price);
	printf("���ǳ⵵ : %d\n", target.year);
	printf("\n");
}

void search_book(struct Book books[], int size, char name[256])
{
	for (int i = 0; i < size; i++)
		if (strcmp(books[i].title, name) == 0)
		{
			printf("ã���ô� å�� %d���� �����մϴ�.\n", i);
			break;
		}
		else if (strcmp(books[i].title, name) != 0 && i == size - 1)
			printf("ã���ô� å�� �������� �ʽ��ϴ�.\n");
	// å�� ��ã�� ��� -> ������ å���� ���� �˻��� �Ŀ� �����.
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

	printf("MyCharactor�� ũ�� %d", sizeof(struct MyCharacter)); // 4 + 4 + 256 = 264
	// ����ü�� ũ��(�뷮)�� ����ü �ȿ� �����ϴ� ��� �������� ũ���� ���̴�.

	struct MyCharacter test = { 15,33.3f,"abc" };
	print_struct(test);
	// ����ü�� �迭�� ���������� ����ü ������ �����Ҷ� �߰�ȣ�� ����
	// ����ü ���� �����͸� �ϰ� �ʱ�ȭ�� �� �ִ�.
	// ��, ����ü ������ ������ ������ ������ �°� �Է��ؾ� �Ѵ�.

	struct MyCharacter arrays[5] = { {1,2.2f,"a"}, {2,3.4f,"b"}, {3,5.5,"c"}, {4,5.5f,"d"}, {5,6.6f,"e"} };
	// ����ü �迭�� �ϰ� �ʱ�ȭ �Ҷ��� �迭�� �ʱ�ȭ �ϵ� �߰�ȣ �ȿ� �����͸� �ۼ��ϴµ�
	// �ۼ��ؾ��� �����Ͱ� ����ü�̱� ������ �ٽ� �߰�ȣ�� �ۼ��Ͽ� ������ ����ü�� �� �����͸� �Է����ش�.

	/*
		å�� ������ ������ ����ü�� �����
		10���� å�� �����ؼ� å�� ������ �������ְ�

		���ڸ� �Է��ϸ� �ش� ���ڿ� �ش��ϴ� å�� ������ �ٷ��ϵ��� ������.

		å�� ������ ����ϴ� ���� �Լ��� ���ؼ� ����ؾ��Ѵ�.

		����Ǵ� å�� ������ ����, ����, ����, ���ǳ⵵.
	*/

	Book books[10] = { {"A","a",1,1900}, {"B","b",2,1901}, {"C","c",3,1902}, {"D","d",4,1903}, {"E","e",5,1904}, {"F","f",6,1905},
							{"G","g",7,1906}, {"H","h",8,1907}, {"I","i",9,1908}, {"J","j",10,1909 } };

	printf("å ��ȣ�� �Է��ϼ���.(0~9)\n");

	int book_number;
	scanf(" %d", &book_number);

	print_Book(books[book_number]);


	//=================================================================

	struct Book myBook = { "AB","Tunier",24000,210610 };

	struct Book* p_book = &myBook;
	// ����ü�� �����ͷ� ������ �Ϲ����� ���� �����Ϳ� ����������
	// ������ �տ�(�ڷ��� -����ü- �ڿ�)*�� ���δ�.

	printf("���� : %s\n", (*p_book).title);
	// ����ü�� �����ͷ� ����Ҷ� �������� �Ϸ��� ������ �������� *�� ����ü �����͸� �Ұ�ȣ�� ���ξ� �Ѵ�.

	printf("���� : %s\n", p_book->writer);
	// ����ü �����͸� ���� ����ü ������ �����Ϳ� �����Ҷ���
	// �������� ����� �ʿ���� .��ſ� ->�� ���ؼ� ���� �����Ϳ� �����ϸ� �ȴ�.

	printf("\n");
	search_book(books, 10, "AB");


	return 0;
}