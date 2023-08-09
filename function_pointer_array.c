#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}


int main()
{
	int (*funPointer[4])(int, int) = {add,subtract,multiply,divide};
	printf("%d \n",funPointer[2](3,5));	
	return 0;
}
