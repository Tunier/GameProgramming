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

void print_struct(struct MyCharacter target)
{
	// 구조체도 통상적인 자료형처럼 함수의 매개변수로도 쓸수있다.
	printf("구조체의 정보를 출력합니다.\n");
	printf("이름 : %s\n", target.name);
	printf("레벨 : %d\n", target.level);
	printf("경험치 : %.2f\n", target.exp);
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



	return 0;
}