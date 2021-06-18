#include "test2.h"
#include "test1.h"

test2::test2()
{
	t = new test1;
	// c언어의 malloc과 동일.
	i = 2;
}

void test2::print()
{
	printf("test 1의 값은 %d,", t->i);
}
