#include<stdio.h>

int countSetBits(unsigned int n)
{
	int count = 0;
	while(n>0)
	{
		if(n&1==1)
		{
			count++;
		}
		n = n>>1;
	}

	return count;
}

int main()
{
	int n = 0;
	printf("enter number : ");
	scanf("%d",&n);
	int ans = countSetBits(n);
	printf("Total set bits : %d \n",ans);


	return 0;

}
