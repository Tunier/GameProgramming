#include "myOperator.h"

myOperator::myOperator()
{
	x = 10;
}

int myOperator::operator+(int i)
{
	x += i;
	return x;
}
