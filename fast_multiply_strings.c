#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


int make_equal(char** a, char** b)
{
	//printf("%c \n",*b[2]);

	//printf("input : %s    %s \n",*a,*b);
	int length_a = strlen(*a);
	int length_b = strlen(*b);
	if(length_a<length_b)
	{
		char* temp = (char*) malloc(sizeof(char)*(length_b+1));
		int i = length_b-length_a;
		while(i<length_b)
		{
			temp[i]=(*a)[i-(length_b-length_a)];
			//printf("i:%d  %c \n",i-(length_b-length_a),(*a)[i-(length_b-length_a)]);

			i++;
		}
		//printf("\n");
		temp[length_b]='\0';
		for(i = 0;i<length_b-length_a;i++)
		{
			temp[i]='0';
		}
		*a = temp;

	}
	else if(length_b<length_a)
	{
		char* temp = (char*) malloc(sizeof(char)*(length_a+1));
		int i = length_a-length_b;
		while(i<length_a)
		{
                        temp[i]=(*b)[i-(length_a-length_b)];
                        //printf("i :%d  %c \n",i-(length_a-length_b),(*b)[i-(length_a-length_b)]);
			i++;
                }
		//printf("\n");
                temp[length_a]='\0';
                for(i = 0;i<length_a-length_b;i++)
                {
                        temp[i]='0';
                }
		*b = temp;

	}
	return strlen(*a);
}



int fast_multiply(char** a, char** b)
{
	if(strlen(*a)==0 || strlen(*b)==0)
	{
		return 0;
	}
	make_equal(a,b);
	if(strlen(*a)==1)
	{
		return ((*a)[0]-'0')&((*b)[0]-'0');

	}
	



	return 0;
}


int main()
{
	char* a="11001";
        char* b="101";
	//printf("%c \n",b[2]);
	//printf("input : %s    %s \n",a,b);
	assert(make_equal(&a,&b)==5);
        //printf("%s   %s  \n",a,b);
	/*b = "101";
	assert(make_equal(&b,&b)==3);
	printf("%s   %s  \n",a,b);
	b = "101";
	assert(make_equal(&b,&a)==5);
	printf("%s   %s  \n",a,b);

	*/
	return 0;
}
