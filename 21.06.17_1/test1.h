#pragma once
#include <iostream>

// 클래스끼리 서로 헤더에서 include를 하게 되면
// 서로서로 계속해서 서로를 인클루드 하는 코드가 반복되기 때문에
// 클래스들의 헤더에서 서로를 include하는 것은 불가능하다.

// 만약 클래스들이 서로 해당 클래스를 사용해야 한다면, 해더에서는 클래스를 선언만 해주고
// include는 cpp에서 해주도록 하며 사용하는 클래스 변수는 포인터로 선언을 해준다.

class test2;

class test1
{
public:
	test1();

	test2* tt;
	int i;
	void print();
};

