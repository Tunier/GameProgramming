#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
// standard library
// 구체적으로 분류가 어려운 이런저런 프로그램 기능(함수)들을 모아놓은 해더파일.
// 포인터에게 온전한 자기만의 주소를 할당해주기 위해서 필요한 함수가 여기 포함되어 있다.

int main()
{
	// 포인터와 배열의 관계
	int ary[10] = { 1,2,3,4,5,6,7,8,9,0 };

	printf("ary : %p\n", ary);

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	printf("&a : %d &b : %d &c : %d &d : %d\n", &a, &b, &c, &d);

	printf("&ary[0] : %d\n&ary[1] : %d\n&ary[2] : %d\n&ary[3] : %d\n&ary[4] : %d\n", &ary[0], &ary[1], &ary[2], &ary[3], &ary[4]);

	// 일반 변수 선언의 경우
	// [][][][a][][][b][][c][][][][][][][d][][][][]
	// 이처럼 비어있는 메모리에 무작위로 데이터를 넣는다.

	// 배열로 변수를 선언한 경우
	// [][][][][][a][b][c][d][e][f][g][][][][][][][][]
	// 시작 위치는 무작위더라도 그 시작위치로부터 연속된 메모리공간을 할당 받아서 배열의 데이터를 저장한다.

	printf("\n");
	printf("*ary : %d\nary[0] : %d\n", *ary, ary[0]);

	printf("*(ary + 4) : %d\n", *(ary + 4));
	// 포인터의 연산
	// 포인터에 숫자를 더하거나 빼게되면 실제 주소값에서 해당 숫자만큼을 더하거나 빼는게 아니라
	// 해당 주소의 데이터 형태에 따라 데이터의 크기만큼을 더하거나 뺀다.
	// ex) int형 포인터 -> 1을 더하면 4씩 증가.
	//	   char형 포인터 -> 1을 더하면 1씩 증가.
	//     double형 포인터 -> 1을 더하면 8씩 증가.

	// 포인터는 실수를 더하거나 뺄수 없다.
	// ary * 2; (X)
	// 포인터는 곱하기, 나누기를 사용할 수 없다.
	// 오직 더하기, 빼기만 사용할수있다.

	// ary[3] == *(ary + 3);
	// 배열의 index번호는 사실 ary(ary[0]의 주소)에 index만큼을 더해서
	// 해당주소에 존재하는 데이터를 가져오라는 의미였다.
	// 때문에 배열은 첫번째 데이터가 0번에서부터 시작한다.
	// (ary가 첫번째 데이터의 주소를 가지고 있기 때문에)

	/*
		1. ary를 이용해서 ary[0]~ary[9]까지의 데이터를 출력해보자.

		2. ary[5]를 이용해서 ary[0]~ary[9]까지의 데이터를 출력해보자.
	*/

	/*
	printf("ary[0]:%d\nary[1]:%d\nary[2]:%d\nary[3]:%d\nary[4]:%d\nary[5]:%d\nary[6]:%d\nary[7]:%d\nary[8]:%d\nary[9]:%d\n\n",
		*ary, *(ary + 1), *(ary + 2), *(ary + 3), *(ary + 4), *(ary + 5), *(ary + 6), *(ary + 7), *(ary + 8), *(ary + 9));

	printf("ary[0]:%d\nary[1]:%d\nary[2]:%d\nary[3]:%d\nary[4]:%d\nary[5]:%d\nary[6]:%d\nary[7]:%d\nary[8]:%d\nary[9]:%d\n\n",
		*(&ary[5] - 5), *(&ary[5] - 4), *(&ary[5] - 3), *(&ary[5] - 2), *(&ary[5] - 1), *(&ary[5]), *(&ary[5] + 1), *(&ary[5] +2 ), *(&ary[5] +3), *(&ary[5] + 4));
	*/

	for (int i = 0; i < 10; i++)
		printf("ary[%d]:%d\n", i, *(ary + i));

	printf("\n");

	for (int i = -5; i < 5; i++)
		printf("ary[%d]:%d\n", 5 + i, *(&ary[5] + i));

	printf("\n");

	printf("배열 ary의 크기는 %d입니다.\n\n", sizeof(ary));
	// 본래 포인터를 단독으로 사용하게 되면 그 크기는 32bit 프로그램 기준 4byte가 나오지만
	// 배열의 경우, 포인터가 저장하는 값은 주소 하나지만 실제로 저장해야 하는 값은 ary 기준
	// 10개이기 때문에 총 10배의 저장공간을 할당받는다.

	//====================================================================================
	int* pOnly; // malloc(4)와 같음.
	// malloc(메모리크기) 
	// 매개변수로 입력한 크기만큼의 메모리 공간을 할당해서 해당 메모리의 첫번째 공간의 주소를 반환해주는 함수.
	// 요청한 크기만큼 메모리를 할당하기 때문에 설령 과도한 공간을 달라고 하든, 혹은 더 적은 공간을 달라고 하든
	// 입력한 만큼의 데이터 공간을 할당해준다.
	// 그래서 보통은 sizeof를 이용해서 저장할 데이터의 크기를 전달받아 malloc에 사용하는 경우가 많다.
	pOnly = malloc(sizeof(int));
	*pOnly = 10;
	printf("pOnly : %d\n*pOnly : %d\n\n", pOnly, *pOnly);

	int* m_array = malloc(sizeof(int) * 5);
	// malloc을 이용해서 int형 데이터 5개를 저장할수 있는 만큼의 메모리 공간을 할당했으며
	// m_array에는 해당 공간의 첫번째 위치의 주소를 저장했다.

	m_array[0] = 10;
	m_array[1] = 20;
	m_array[2] = 30;
	m_array[3] = 40;
	m_array[4] = 50;

	for (int i = 0; i < 5; i++)
		printf("m_array[%d] : %d\n", i, m_array[i]);

	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("m_array[%d] : %d\n", i, *(m_array + i));
	// 배열처럼 포인터에 메모리공간을 할당할 때 필요보다 많은 공간을 할당받아서 포인터를 배열처럼 사용할 수 있다.

	printf("\n");

	int* p_X;

	{
		int X = 10;
		p_X = &X;
	}
	printf("p_X : %d, *p_X: %d\n", p_X, *p_X);

	int* q_X;
	{
		int* q_XX = malloc(sizeof(int));
		*q_XX = 100;
		q_X = q_XX;
	}
	printf("q_X : %d, *p_X: %d\n\n", q_X, *q_X);

	// 일반적인 변수 선언의 경우 해당 변수의 사용이 끝났을때 즉, 해당 변수가 선언된 범위(중괄호)가 종료됐을때
	// 자동으로 해당 변수가 사용하던 메모리공간을 초기화해서 재사용이 가능하도록 만들어주는데

	// malloc을 통해서 할당해준 메모리공간은 사용이 끝나더라도 자동으로 초기화를 해주지 않는다.
	// 다만 해당 메모리공간의 주소를 저장하고 있던 변수만 삭제될 뿐이다.
	// 해당 메모리 공간의 주소를 저장하던 변수가 삭제됐기 때문에 메모리공간에 접근할수 있는 방법이 삭제된 것이다.
	// 그래서 해당 메모리에 접근할수있는 방법이 없어서 메모리 공간은 사용할 수 없는 채로 방치되게 된다.
	// 이러한 현상을 메모리 누수(Memory Leak)이라고 하며 이현상이 많아지면 프로그램에서 차지하는 메모리공간이
	// 과도하게 많아져서 결국 프로그램이 강제로 종료되게 된다.

	// malloc을 통해서 메모리공간을 받았으면 반드시 사용이 끝난 후에 다시 돌려줘야 하는데
	// 이를 해주는 함수가 free라는 함수이다.

	int* myInt = malloc(sizeof(int));
	*myInt = 100;
	free(myInt);

	int a_size;

	printf("배열의 크기를 입력하세요.\n");
	scanf(" %d", &a_size);

	int* mm_array = malloc(sizeof(int) * a_size);

	for (int i = 0; i < a_size; i++)
		mm_array[i] = i * 10;

	for (int i = 0; i < a_size; i++)
		printf("mm_array[%d] : %d\n", i, mm_array[i]);

	printf("\n");

	int* c_array = calloc(a_size, sizeof(int));

	for (int i = 0; i < a_size; i++)
		printf("c_array[%d] : %d\n", i, c_array[i]);
	// malloc은 메모리공간을 할당만 하고 해당 메모리공간에 데이터를 초기화하지 않기 때문에 쓰레기값이 출력되지만
	// calloc은 메모리 할당과 함께 0으로 초기화를 해준다.

	// realloc은 이미 할당되어있는 메모리공간의 크기를 변경해주는 함수.

	mm_array = realloc(mm_array, sizeof(int) * a_size * 2);

	for (int i = 0; i < a_size * 2; i++)
		printf("mm_array[%d] : %d\n", i, mm_array[i]);
	// realloc(공간을 재할당해줄 대상, 재할당해줄 크기) realloc의 경우 공간의 크기만을 바꾸기 때문에
	// 기존에 저장되어 있던 데이터는 그대로 유지가 된다.

	return 0;
}