#include <stdio.h>
#include <assert.h>

int bitAnd(int x, int y)
{
	return ~(~x|~y);
}



int main()
{
	assert(bitAnd(6,5)==(6&5));
	assert(bitAnd(10,20)==(10&20));


	return 0;
}
