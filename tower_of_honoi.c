#include <stdio.h>

void toh(int n ,char initial ,char helper ,char final)
{
	if(n==1)
	{
		printf("%c -> %c \n",initial,final);
		return;
	}
	//printf("%c -> %c \n",initial,final);
	toh(n-1,initial,final,helper);
	printf("%c -> %c \n",initial,final);
	toh(n-1,helper,initial,final);
}


int main()
{
	char a = 'a' , b = 'b' , c = 'c';
	int n;
	printf(" n : ");
	scanf("%d",&n);
	toh(n,a,b,c);


	return 0;
}
