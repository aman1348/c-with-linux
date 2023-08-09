#include <stdio.h>
#include <assert.h>

void swap(int *i , int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
	/**i = *i + *j;
	*j = *i - *j;
	*i = *i - *j;
	*/
}

void print(int ar[] ,int start ,int end)
{
	//int n = sizeof(ar)/sizeof(int);
	for(int i = start;i<end;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");

}

int kthSmallestElement(int ar[] , int k , int start , int end)
{
	if(start>end-1)
	{
		//printf("start : %d , end : %d \n",start,end);
		return -1; 
	}
	int ans = 0;

	//swap(ar+start,ar+(start+end)/2);
	//int pviot = start;
	int l = start;
	for(int i = start;i<end;i++)
	{
		if(ar[i]<ar[start])
		{
			l++;
			swap(ar+l,ar+i);
		}
	}
	swap(ar + start , ar + l);
	//print(ar,start,end);
	//printf("index : %d  ,pviot : %d \n",l,ar[l]);
	if(l+1==k+start)
	{
		//printf("%d + %d \n",k,start);
		return ar[l];
	}
	if(l+1>k+start)
	{
		ans = kthSmallestElement(ar,k,start,l);
	}
	else
	{
		ans = kthSmallestElement(ar,k-l+start-1,l+1,end);
	}

	return ans;
}


int main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	//print(ar,0,10);
	//printf("k = 6 \n");
	//int ans = kthSmallestElement(ar,6,0,10);
	//printf("ans : %d \n",ans );
	// for sorted array
	assert(kthSmallestElement(ar,6,0,10)==6);

	// for reversly sorted array
	int ar1[] = {10,9,8,7,6,5,4,3,2,1};
	assert(kthSmallestElement(ar1,5,0,10)==5);
	
	// for unsorted array
	int ar2[] = {10,1,9,2,8,3,7,4,6,5};
	assert(kthSmallestElement(ar2,3,0,10)==3);
	return 0;

}
