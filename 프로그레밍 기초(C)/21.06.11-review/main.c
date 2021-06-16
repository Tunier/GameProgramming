#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

void add(int _i, int _j, int _k)
{
	// 매개변수를 일반변수로 사용한경우.
	printf("함수에서 매개변수의 주소\n");
	printf("&i : %p &j : %p &k : %p\n", &_i,&_j,&_k);

	_k = _i + _j;
}

void add_pointer(int* pi, int* pj, int* pk)
{
	// 매개변수로 포인터를 사용한 경우.
	printf("\n함수에서 포인터 매개변수의 값\n");
	printf("i : %p j : %p k : %p\n", pi, pj, pk);

	printf("함수에서 포인터 매개변수의 주소\n");
	printf("&pi : %p &pj : %p &pk : %p\n", &pi, &pj, &pk);

	*pk = *pi + *pj;
}

int main()
{
	// 포인터 : 주소를 저장하는 변수.

	int* pi;
	// 포인터 생성방법 : 자료형과 변수명 사이에 *을 붙여서 생성한다.

	int i = 99;
	pi = &i;
	// 변수의 주소를 가져오는 방법은 생성된 변수명의 앞에 &를 붙이면 해당 변수가 저장된 주소를 가져올수 있다.

	*pi = 30;
	// 생성된 포인터 변수 앞에 *을 붙이면 해당 포인터가 가리키는 주소값에 저장된 데이터에 접근할 수 있다.
	// 해당 포인터가 가리키는 주소값에 저장된 데이터(==i)에 접근할 수 있다.
	i = *pi + 99;// i = i+99와 같은 의미의 코드
	// 접근한 데이터를 가져와서 다른 함수나 수식에 사용할수도 있고

	*pi = 50; // i = 50과 같은 의미의 코드
	// 접근한 데이터에 저장되어있는 값을 바꿀수도 있다.

	// i와 *pi가 같은 의미를 가지고,(i에 저장된 데이터)
	// pi와 &i가 같은 의미를 가진다.(i의 주소)

	printf("i : %d *pi : %d\npi : %p &i : %p\n", i, *pi, pi, &i);

	int x = 10;
	int* p_x = &x;
	int _x = x;

	printf("x값 변경전\n x : %d\n*p_x : %d\n_x : %d\n", x, *p_x, _x);

	x = 20;
	printf("x값 변경후\n x : %d\n*p_x : %d\n_x : %d\n", x, *p_x, _x);

	int q = 10;
	int w = 20;
	int e = 0;
	
	printf("main에서 매개변수의 주소\n");
	printf("&i : %p &j : %p &k : %p\n", &q, &w, &e);

	printf("함수에 넣기 전 - q : %d w : %d e : %d\n",q,w,e);
	add(q, w, e);
	printf("함수에 넣은 후 - q : %d w : %d e : %d\n", q, w, e);

	q = 50;
	w = 30;
	e = 0;

	printf("함수에 넣기 전 - q : %d w : %d e : %d\n", q, w, e);
	add_pointer(&q, &w, &e);
	printf("함수에 넣은 후 - q : %d w : %d e : %d\n", q, w, e);





	return 0;
}
