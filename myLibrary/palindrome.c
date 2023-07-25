#include <stdbool.h>

bool palindrome(int num)
{
	int temp = num;
	int reverse = 0;
	while(temp>0)
	{
		int dig = temp%10;
		reverse = reverse *10 +dig;
		temp/=10;
	}
	return num==reverse;
}
