#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// 구조체(Struct)
// 언어에서 기본 제공해주는 자료형이 아니라 
// 사용자의 필요에 의해서 만드는 새로운 자료형.
// 기존에 존재하는 여러개의 자료형을 묶어서
// 하나의 자료형처럼 사용할수 있도록 만드는 것.

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
	// 구조체도 통상적인 자료형처럼 함수의 매개변수로도 쓸수있다.
	printf("구조체의 정보를 출력합니다.\n");
	printf("이름 : %s\n", target.name);
	printf("레벨 : %d\n", target.level);
	printf("경험치 : %.2f\n", target.exp);
}

void print_Book(struct Book target)
{
	printf("책의 정보를 출력합니다.\n");
	printf("제목 : %s\n", target.title);
	printf("저자 : %s\n", target.writer);
	printf("가격 : %d\n", target.price);
	printf("출판년도 : %d\n", target.year);
	printf("\n");
}

void search_book(struct Book books[], int size, char name[256])
{
	for (int i = 0; i < size; i++)
		if (strcmp(books[i].title, name) == 0)
		{
			printf("찾으시는 책이 %d번에 존재합니다.\n", i);
			break;
		}
		else if (strcmp(books[i].title, name) != 0 && i == size - 1)
			printf("찾으시는 책이 존재하지 않습니다.\n");
	// 책을 못찾은 경우 -> 마지막 책까지 전부 검사한 후에 실행됨.
}



int main()
{
	struct MyCharacter chara;
	// 정의된 구조체를 사용하는 방법
	// struct 구조체명 변수명;

	chara.exp = 98.5f;
	chara.level = 10;
	strcpy(chara.name, "AAA");

	// 구조체 내의 변수에 접근하려면
	// 구조체 변수명.구조체 내부 변수명 으로 접근한다.

	printf("이름 : %s\n레벨 : %d\n경험치 : %.2f\n", chara.name, chara.level, chara.exp);

	/*
		MyCharacter 형 변수를 만들어서
		데이터를 입력받아 입력된 데이터를 출력해보자
	*/

	struct MyCharacter chara2;

	printf("캐릭터의 이름을 입력해주세요.\n");

	scanf(" %s", &chara2.name);

	printf("캐릭터의 레벨을 입력해주세요.\n");

	scanf(" %d", &chara2.level);

	printf("캐릭터의 경험치을 입력해주세요.\n");

	scanf(" %f", &chara2.exp);

	printf("이름 : %s\n레벨 : %d\n경험치 : %.2f\n", chara2.name, chara2.level, chara2.exp);

	struct MyCharacter array[5];
	// 구조체는 일반적인 자료형처럼 배열로도 만들수 있다.

	for (int i = 0; i < 5; i++)
	{
		strcpy(array[i].name, "행인");
		array[i].level = 1;
		array[i].exp = 5.0f;
	}
	// 일반적인 자료형의 배열처럼 반복문을 통해 배열 데이터를 일괄적으로 교체할수 있다.

	print_struct(chara);
	print_struct(chara2);
	for (int i = 0; i < 5; i++)
		print_struct(array[i]);

	printf("MyCharactor의 크기 %d", sizeof(struct MyCharacter)); // 4 + 4 + 256 = 264
	// 구조체의 크기(용량)은 구조체 안에 존재하는 모든 변수들의 크기의 합이다.

	struct MyCharacter test = { 15,33.3f,"abc" };
	print_struct(test);
	// 구조체는 배열과 마찬가지로 구조체 변수를 생성할때 중괄호를 통해
	// 구조체 내의 데이터를 일괄 초기화할 수 있다.
	// 단, 구조체 내에서 변수를 선언한 순서에 맞게 입력해야 한다.

	struct MyCharacter arrays[5] = { {1,2.2f,"a"}, {2,3.4f,"b"}, {3,5.5,"c"}, {4,5.5f,"d"}, {5,6.6f,"e"} };
	// 구조체 배열을 일괄 초기화 할때는 배열을 초기화 하듯 중괄호 안에 데이터를 작성하는데
	// 작성해야할 데이터가 구조체이기 때문에 다시 중괄호를 작성하여 각각의 구조체에 들어갈 데이터를 입력해준다.

	/*
		책의 정보를 저장할 구조체를 만들고
		10권의 책을 생성해서 책의 정보를 대입해주고

		숫자를 입력하면 해당 숫자에 해당하는 책의 정보를 줄력하도록 만들어보자.

		책의 정보를 출력하는 것은 함수를 통해서 출력해야한다.

		저장되는 책의 정보는 제목, 저자, 가격, 출판년도.
	*/

	Book books[10] = { {"A","a",1,1900}, {"B","b",2,1901}, {"C","c",3,1902}, {"D","d",4,1903}, {"E","e",5,1904}, {"F","f",6,1905},
							{"G","g",7,1906}, {"H","h",8,1907}, {"I","i",9,1908}, {"J","j",10,1909 } };

	printf("책 번호를 입력하세요.(0~9)\n");

	int book_number;
	scanf(" %d", &book_number);

	print_Book(books[book_number]);


	//=================================================================

	struct Book myBook = { "AB","Tunier",24000,210610 };

	struct Book* p_book = &myBook;
	// 구조체를 포인터로 쓸때도 일반적인 변수 포인터와 마찬가지로
	// 변수명 앞에(자료형 -구조체- 뒤에)*을 붙인다.

	printf("제목 : %s\n", (*p_book).title);
	// 구조체를 포인터로 사용할때 역참조를 하려면 역참조 연산자인 *과 구조체 포인터를 소괄호로 감싸야 한다.

	printf("저자 : %s\n", p_book->writer);
	// 구조체 포인터를 통해 구조체 내부의 데이터에 접근할때는
	// 역참조를 사용할 필요없이 .대신에 ->를 통해서 내부 데이터에 접근하면 된다.

	printf("\n");
	search_book(books, 10, "AB");


	return 0;
}