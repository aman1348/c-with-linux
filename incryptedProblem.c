#include <stdio.h>


int solution1(int a1[] ,int a2[] ,int n ,int k)
{
	// BRUTE FORCE METHOD

    int max  = 0;
    int temp = 0;
    for(int i = 0;i<=n-k ;i++)
    {
        int sum = 0;
        for(int j = i;j<k+i;j++)
        {
            if(a2[j]==0)
            {
                sum+=a1[j];
            }
        }
        if(sum > max)
        {
            max = sum;
            temp = i;
        }
    }
    for(int i = temp ; i<k+temp;i++)
    {
        a2[i]=1;
        //printf("%d ",i);
    }
    int total = 0;
    for(int i=0;i<n;i++)
    {
        if(a2[i]==1)
        {
            total+=a1[i];
        }
    }
    return total;
}

int solution2(int a1[] ,int a2[] ,int n ,int k)
{
	int initialSum = 0;
	for(int i = 0;i<n;i++)
	{
		if(a2[i]==1)
		{
			initialSum +=a1[i]; 
		}
	}
	int max = 0;
	int sum = 0;
	for(int i = 0;i<k;i++)
	{
		if(a2[i]==0)
		{
			sum +=a1[i];
		}
	}
	for(int i = 1;i<=n-k;i++)
	{
		if(a2[i]==0)
		{
			sum+=a1[i];
		}
		if(a2[i-1]==0)
		{
			sum-=a1[i-1];
		}
		if(sum>max)
		{
			max = sum;
		}
	}
	return initialSum + max;

}


int main() {
    int a1[] = {1,3,5,2,5,4};
    int a2[] = {1,1,0,1,0,0};
    int k = 3 , n = 6;
    int ans1 = solution1(a1,a2,n,k);
    int ans2 = solution2(a1,a2,n,k);
    printf("\n method1 : = %d \n method2 : = %d \n",ans1 ,ans2);
    

    return 0;
}
