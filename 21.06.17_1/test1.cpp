#include "test1.h"
#include "test2.h"

test1::test1()
{
	tt = new test2;
	// c언어의 malloc과 동일.
	i = 1;
}

void test1::print()
{
	printf("test 2의 값은 %d,", tt->i);
}
