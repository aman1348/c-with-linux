#include <stdio.h>
#include <limits.h>
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}

	return n*factorial(n-1);
}

int main()
{
//	int n = 5;
//	printf("factorial : %d \n",factorial(n));
//	unsigned int num = ~0;
	int max = INT_MAX;
	int i = 1;
	int fact = 1;
	while(max-fact>fact)
	{
		fact = factorial(i);
		i++;

	}
	printf(" num : %d \n",i-1);
	printf(" factorial : %d \n",factorial(i-1));
	return 0;
}
