#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello World\n\n");

	printf("나는 %d살입니다.\n", 26);
	printf("나는 %.1f입니다.\n", 168.9f);
	printf("나는 %c입니다.\n", 'A');
	printf("나는 %s입니다.\n", "양명균");

	printf("5+9=%d\n", 5 + 9);

	int Level;
	Level = 10;

	printf("\n내 레벨은 %d입니다.\n", Level);

	Level = 11;

	printf("\n내 레벨은 %d입니다.\n", Level);

	int i = 100;		//정수
	float f = 3.14f;	//실수
	char c = 'A';		//문자

	return 0;
}