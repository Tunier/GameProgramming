#include "test2.h"
#include "test1.h"

test2::test2()
{
	t = new test1;
	// c����� malloc�� ����.
	i = 2;
}

void test2::print()
{
	printf("test 1�� ���� %d,", t->i);
}
