#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


int make_equal(char** a, char** b)
{
	int length_a = strlen(*a);
	int length_b = strlen(*b);
	if(length_a<length_b)
	{
		char* temp = (char*) malloc(sizeof(char)*(length_b+1));
		int i = length_b-length_a;
		while(i<length_b)
		{
			temp[i]=(*a)[i-(length_b-length_a)];

			i++;
		}
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
			i++;
                }
                temp[length_a]='\0';
                for(i = 0;i<length_a-length_b;i++)
                {
                        temp[i]='0';
                }
		*b = temp;

	}
	return strlen(*a);
}


char* get_substring(char* str , int start , int end)
{
	char* sub = (char*)malloc(end-start+2);
	for(int i = start;i<=end;i++)
	{
		sub[i-start] = str[i];
	}
	sub[end-start+1] = '\0';
	return sub;
}

char* sum_strings(char* str1 , char* str2)
{


}


int fast_multiply(char** a, char** b)
{
	if(strlen(*a)==0 || strlen(*b)==0)
	{
		return 0;
	}
	int len = make_equal(a,b);
	if(strlen(*a)==1)
	{
		return ((*a)[0]-'0')&((*b)[0]-'0');

	}

	int length_left = len/2;
	int length_right = len-length_left;
	
	char* a_x = get_substring(*a,0,length_left-1);
	char* a_y = get_substring(*a,length_left,len-1);
	
	char* b_x = get_substring(*b,0,length_left-1);
	char* b_y = get_substring(*b,length_left,len-1);
	
	long a = fast_multiply(&a_x,&b_x);
	long b = fast_multiply(&a_y,&b_y);

	




	return 0;
}


int main()
{
	char* a="11001";
        char* b="101";
	assert(make_equal(&a,&b)==5);
	a = "100100";
	assert(strcmp(get_substring(a,1,3),"001")==0);
	
	assert(strcmp(get_substring(a,0,5),"100100")==0);

	assert(strcmp(get_substring(a,0,0),"1")==0);
	return 0;
}
