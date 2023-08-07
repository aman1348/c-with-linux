#include <stdio.h>

void swap(int* i ,int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
	/*
	*i = *i^*j;
	*j = *i^*j;
	*i = *i^*j;
	*/
}

void print(int ar[] ,int n)
{
        for(int i = 0; i < n; i++)
        {
                printf("%d ",ar[i]);
        }
        printf("\n");
}

void  quickSort(int ar[] ,int l ,int r)
{
	if( l>=r-1 )
	{
		return;
	}
	int temp = l;	
	int it = l+1; 
	for(it = l+1; it < r; it++)
	{
		if(ar[it]<ar[l])
		{
			temp++;
			swap(ar+temp,ar+it);
		}
	}
	swap(ar+temp,ar+l);
	
	quickSort(ar,l,temp);
	quickSort(ar,temp+1,r);

}


int main()
{
	int ar[] = {5 ,4 ,3 ,1 ,6 ,7};
	print(ar,6);
	quickSort(ar,0,6);
	print(ar,6);

	return 0;
}
