#include <stdio.h>

int replaceRangeOfBits(unsigned short int value, int i, int j, unsigned short int bits)
{
	printf("value :%d \ni : %d ,j : %d \nreplace bits : %d \n", value, i, j, bits);

	unsigned short int temp = ~0;	//  all bits set : 11111111
	temp = temp<<(j-i+1);		//  adding range bits : 11111000
        temp = ~temp;			//  inversing all bits : 00000111
        temp = ~(temp<<i);		//  shifting i steps and inversing all bits : 11110001
        value = value&temp;		//  creating range bits in valur to 0
        bits = bits<<i;			//  shifting bits in right range
        value = value|bits;		//  merging value and bits

	return value;
}

int main() 
{
	
	unsigned short int ans = replaceRangeOfBits(2,1,3,7);
	printf("ans : %d \n",ans);

	return 0;
}
