#include <stdio.h>
#include "palindrome.h"

int main()
{
	int num = 1001;
	if(palindrome(num))
	{
		printf("is palindrome : %d \n",num);

	}
	else
	{
		printf("not palindrome : %d \n",num);
	}

	return 0;
       	
}
