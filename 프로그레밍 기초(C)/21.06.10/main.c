#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Swap(int _a, int _b)
{
	printf("_a의 주소 : %p\n", &_a);
	printf("_b의 주소 : %p\n", &_b);
	printf("함수 실행 중1 _a : %d, _b: %d\n", _a, _b);

	int tmp = _a;
	_a = _b;
	_b = tmp;

	printf("함수 실행 중2 _a : %d, _b: %d\n", _a, _b);
}

void Swap_Pointer(int* p_a, int* p_b)
{
	printf("_a에 저장된 주소 : %p\n", p_a);
	printf("_b에 저장된 주소 : %p\n", p_b);

	int tmp = *p_a;
	*p_a = *p_b;
	*p_b = tmp;
}

void SumAndSwap(int _i, int _j, int* p_k)
{
	*p_k = _i + _j;
}

void SumAndSwap2(int* p_i, int* p_j, int* p_k)
{
	*p_k = *p_i + *p_j;
}


int main()
{
	// 포인터
	// 데이터가 저장된 메모리의 위치값(주소값)을 저장하는 변수.

	int i = 50;

	int* p_i = &i;
	// 변수 생성시 자료형과 변수명 사이에 *을 붙이면 해당 변수는 주소값을 저장하는 변수가 된다.
	// 여기서 *은 곱하기의 의미가 아닌 포인터 변수를 만들겠다는 의미가 된다.

	printf("i : %d\n", i);
	printf("&i : %p\n", &i);
	printf("p_i : %p\n", p_i);
	// 생성한 데이터가 저장되는 주소값은 실행 할때마다 현재 비어있는 메모리 위치 중에서 프로그램이 자동적으로 선택하기 때문에
	// 실행할때마다 그 값이 바뀌고, 사용자가 임의의 주소값에 데이터를 넣을순 없다.

	// 변수 앞에 &기호를 붙이면 해당 변수가 저장된 주소값을 나타낸다.

	//=================================================================================

	// 포인터의 역참조
	// 포인터는 데이터가 저장된 주소값을 저장하는 변수이기에 주소값을 알고 있다면 해당 주소값의 위치로 직접 찾아가서
	// 어떤 데이터가 저장되어있는지 확인할 수 있다.
	// 때문에 포인터를 통해 해당 주소에 저장된 값을 실제로 가져와서 사용하는 것이 가능하다.
	printf("*p_i : %d\n", *p_i);
	// 포인터의 역참조는 이미 생성된 포인터 변수 앞에 *을 붙이면 사용할수 있다.

	*p_i = 100;
	printf("i : %d\n", i);
	// 포인터의 역참조를 이용하면 주소값에 저장된 데이터를 사용할 수 있을 뿐 아니라 저장된 데이터를 직접 바꿀 수도 있다.
	// 포인터 p_i는 변수 i의 주소이기 때문에 p_i의 역참조값을 바꾸면 i의 값 역시 바뀐다.

	// 포인터 변수값을 scanf로 대입할수 있지만, 정상적인 주소가 아닐 가능성이 매우 높기때문에 사실상 사용하지 않는다.
	// p_i = 5000; // 5000은 숫자가 아닌 메모리 주소 5000을 의미.
	// printf("*p_i : %d\n", *p_i); (X)
	// 포인터 변수에 정수값을 대입하는 것도 가능은 하지만 위와 같은 이유로 해당 주소가 정상적인 주소가 아닐 가능성이 매우 높기때문에
	// 사용하려하면 에러가 발생한다.

	printf("10 + *p_i : %d\n", 10 + *p_i);
	// 포인터의 역참조는 해당 주소값에 저장된 데이터만 가져오기에 역참조를 통해 가져온 데이터로 연산, 대입 등이 가능하다.

	printf("*(&i) : %d\n", *(&i));
	// 변수 i의 주소값 &i의 역참조 *(&i) 같은 식으로도 사용은 가능하다.

	// i; 저장된 변수.
	// p_i; 변수가 저장된 주소값.
	// &i; 변수가 저장된 주소값.
	// *p_i; 저장된 변수.

	/*
		int형 변수를 만들어서 데이터를 입력하고
		int형 포인터변수를 생성해서 int형 변수의 주소를 저장하고,
		포인터를 이용해서 변수의 값을 바꾸고

		변수, 포인터변수, 변수의 주소, 포인터변수의 역참조를 출력해보자.
	*/

	printf("\n");

	int i2 = 10;
	int* p_i2 = &i2;
	*p_i2 = 20;

	printf("i2 : %d\n", i2);
	printf("p_i2 : %p\n", p_i2);
	printf("&i2 : %p\n", &i2);
	printf("*p_i2 : %d\n", *p_i2);

	printf("\n");

	//=================================================================================

	char c = 'a';
	char* p_c = &c;

	// 포인터 변수를 만들때는 해당 포인터 변수에 저장할 데이터의 자료형과
	// 동일한 자료형 포인터로 만들어줘야 한다.
	// 이는 포인터의 역참조와 관련이 있는데 포인터변수는 주소값이 시작되는 위치만 저장한다.
	// 하지만 데이터에 따라 차지하는 메모리상의 공간의 크기가 다르기 때문에
	// 해당 주소값 위치에서 몇개의 데이터를 가져올지 결정하는 것이 포인터 변수의 자료형이다.

	// 만약, int형 변수의 주소를 char형 포인터에 저장하게 되면 해당 포인터를 역참조할때 int형을 4byte의 데이터를 저장하지만,
	// 포인터는 char형, 즉 1byte의 테이터로 판단하기 때문에 전체 데이터에서 1byte만 가져오게 되고
	// 이는 정상적인 데이터가 아니게 된다.

	//=================================================================================
	// 포인터와 매개변수의 관계
	int p = 10;
	int q = 20;

	printf("p의 주소 : %p\n", &p);
	printf("q의 주소 : %p\n", &q);
	printf("Swap 함수 실행 전 p : %d, q: %d\n", p, q);

	Swap(p, q);

	printf("Swap 함수 실행 후 p : %d, q: %d\n", p, q);

	printf("\n");

	printf("p의 주소 : %p\n", &p);
	printf("q의 주소 : %p\n", &q);
	printf("Swap_Pointer 함수 실행 전 p : %d, q: %d\n", p, q);

	Swap_Pointer(&p, &q);

	printf("Swap_Pointer 함수 실행 후 p : %d, q: %d\n", p, q);

	printf("\n");

	int s = 10;
	int* p_s = &s;
	scanf(" %d", p_s);
	printf("s : %d\n", s);

	printf("\n");

	/*
		s = 10, s는 메모리 99번에 저장되어있음.
		p_s에는 99(s의 주소값)가 저장되어 있음.
		&p_s에 s의 주소값을 저장한 변수의 주소값이 저장되어있음.
	*/

	/*
		매개변수를 3개 입력받고 첫번째, 두번째 변수값을 더해서
		세번째 변수에 대입해주는 함수를 만들자.
		해당 함수는 반환자가 없으며 세번째 변수에 대입된 값은
		함수 밖에도 실제로 적용이 되어있어야 한다.
	*/

	int input, input2, input3;

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("SumAndSwap 함수 실행 전\ninput : %d\ninput2 : %d\ninput3 : %d\n", input, input2, input3);

	printf("\n");

	SumAndSwap(input, input2, &input3);

	printf("SumAndSwap 함수 실행 후\ninput : %d\ninput2 : %d\ninput3 : %d\n", input, input2, input3);

	printf("\n");

	scanf(" %d %d %d", &input, &input2, &input3);

	printf("SumAndSwap2 함수 실행 전\ninput : %d\ninput2 : %d\ninput3 : %d\n", input, input2, input3);

	printf("\n");

	SumAndSwap2(&input, &input2, &input3);

	printf("SumAndSwap2 함수 실행 후\ninput : %d\ninput2 : %d\ninput3 : %d\n", input, input2, input3);

	/*
		1. 실수를 저장하는 변수 A를 만들고, A의 주소를 저장하는 _A를 만든뒤, _A를 이용해서 A의 값을 출력하라

		2. 문자를 저장하는 변수 B를 만들고, B의 주소를 저장하는 _B를 만든뒤, _B를 이용해서 B의 값을 바꾸고 B를 출력하라.

		3. 정수를 저장하는 변수 C를 만들고, C의 주소를 저장하는 _C를 만든뒤, _C를 이용해서 변수 C에 데이터를 입력 받아서(scanf)
		   _C를 이용해 C에 저장된 값을 출력하라.
	*/

	printf("1번 문제 입니다.\n");

	float A = 1;
	float* _A = &A;

	printf("A : %.2f\n", *_A);

	printf("\n");

	printf("2번 문제 입니다.\n");

	char B = 'H';
	char* _B = &B;

	printf("바꾸기전 B : %c\n", B);

	*_B = 'I';

	printf("바꾼후 B : %c\n", B);

	printf("\n");

	printf("3번 문제 입니다.\n");

	int C = 123;
	int* _C = &C;

	printf("바꾸기전 C : %d\n", *_C);

	scanf(" %d", _C);

	printf("바꾼후 C : %d\n", *_C);

	printf("\n");

	//=================================================================================
	// 포인터간의 대입
	int p1 = 999;
	int q1 = 111;
	int* p2 = &p1;
	int* q2 = &q1;

	printf("p1 : %d\n", p1);
	printf("q1 : %d\n", q1);
	printf("p2 : %d\n", *p2);
	printf("q2 : %d\n", *q2);

	p2 = q2;

	printf("p1 : %d\n", p1);
	printf("q1 : %d\n", q1);
	printf("p2 : %d\n", *p2);
	printf("q2 : %d\n", *q2);

	int xi = 100;
	int* p_xi = &xi;
	int j = xi;

	printf("i : %d\n", xi);
	printf("*p_i : %d\n", *p_xi);
	printf("j : %d\n", j);

	xi = 200;
	printf("i : %d\n", xi);
	printf("*p_i : %d\n", *p_xi);
	printf("j : %d\n", j);
	// 포인터와 일반 변수간의 대입의 가장 큰 차이는 변수간의 대입은 현재 시점의 변수 값을 복사(대입)하기 때문에
	// 이후에 복사했던 변수값이 바뀐다고 해서 복사된 값이 변경되지는 않는다.
	// 반면에, 포인터변수의 경우 해당 주소에 저장된 내용물이 아니라 주소를 복사했기 때문에
	// 변수의 내용물이 바뀌더라도 주소가 유지되어 포인터는 변경된 내용물을 실시간으로 확인할수 있다.

	//=================================================================================
	int ii = 10;
	float ff = 3.14;
	char cc = 'c';

	int* pii = &ii;
	float* pff = &ff;
	char* pcc = &cc;

	printf("int형의 크기 : %d\n", sizeof(ii));
	printf("float형의 크기 : %d\n", sizeof(ff));
	printf("char형의 크기 : %d\n", sizeof(cc));

	printf("int*형의 크기 : %d\n", sizeof(pii));
	printf("float*형의 크기 : %d\n", sizeof(pff));
	printf("char*형의 크기 : %d\n", sizeof(pcc));

	// 포인터를 만들때 저장할 변수의 자료형에 맞춰서 만드는 이유는
	// 포인터는 데이터가 저장된 위치의 시작점 좌표만 저장하고
	// 데이터가 어디서 끝나는지는 저장하지 않아서 
	// 포인터를 통해 해당 주소에 저장된 내용물을 가져올때
	// 몇byte크기의 데이터를 가져와야할지 알수가 없다.
	// 때문에 포인터를 만들때는 몇byte의 자료를 저장한 주소인지 
	// 구분하기 위해서 자료형을 붙여서 만든다.

	// 자료형의 크기는 항상 동일하지 않고
	// 해당 프로그램이 실행되는 환경에 따라 달라질수 있다.
	// 32비트 운영체제, 64비트 운영체제
	// 윈도우인지, 맥, 리눅스
	// 사용 프로그램,언어의 차이(비주얼스튜디오, devC++, swift, Xcode 등)


	printf("doulbe형의 크기 : %d\n", sizeof(double));
	// sizeof함수는 변수의 크기를 반환하는 함수이며
	// 매개변수로 변수를 직접 넣을수도 있고 자료형을 넣어서 크기를 확인할수도 있다.

	return 0;
}