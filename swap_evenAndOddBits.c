#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	int x = n , temp1 = 1, temp2 = 2;
	
	while(temp1<=x)
	{
		if(n&temp1==n&temp2)
		{
			temp1 = temp1<<2;
			temp2 = temp2<<2;
		}
		else
		{
			n^=temp1;
			n^=temp2;
			temp1 = temp1<<2;
                        temp2 = temp2<<2;

		}
	
	}
	printf("ans  : %d \n",n);
	return 0;


}
