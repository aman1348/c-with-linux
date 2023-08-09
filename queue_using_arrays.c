#include <stdio.h>



void add(int ar[], int n, int *pointer, int ele)
{
	if(*pointer==n)
	{
		printf("over flow : %d \n",ele);
		return;
	}
	for(int i = *pointer;i>0;i--)
	{
		ar[i] = ar[i-1];
	}
	ar[0] = ele;
	*pointer+=1;

}

void delete(int ar[] ,int n ,int* pointer)
{
	if(*pointer==0)
	{
		printf("under flow \n");
		return;
	}
	ar[*pointer]=0;
	*pointer-=1;
}
void print(int ar[] ,int pointer)
{
	for(int i = 0;i<pointer;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}

int main()
{
	int n = 10;
	int ar[n];
	for(int i = 0;i<n;i++)
	{
		ar[i] = 0;
	}

	int pointer = 0;
	int c = 0;
	while(1)
	{
		printf("choice :");
		scanf("%d",&c);
		if(c==1)
		{
			int ele;
			printf("enter element : ");
			scanf("%d",&ele);
			add(ar,n,&pointer,ele);
		}
		else if(c==2)
		{
			delete(ar,n,&pointer);
			
			printf("array : ");
			print(ar,pointer);
		}
		else if(c==3)
		{
			print(ar,pointer);
		}
		else
		{
			break;
		}
	}


}
