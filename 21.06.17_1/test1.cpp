#include "test1.h"
#include "test2.h"

test1::test1()
{
	tt = new test2;
	// c����� malloc�� ����.
	i = 1;
}

void test1::print()
{
	printf("test 2�� ���� %d,", tt->i);
}
