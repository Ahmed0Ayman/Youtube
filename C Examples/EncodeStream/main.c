/*
 * This file is a test case you may use and change to check your code
 */
#include "Question1.h"

int main()
{
	unsigned char stream[] = {1, 0, 0, 0, 0, 0, 0,0,1,1,1, 1,0,0,0, 0,1,0,1,0,1,0,1,0,0,0,1}; // The stream of bits
	unsigned char encoded[100] = {0};
	
	encoding(stream,  sizeof(stream), encoded);
	
	for(int i = 0; i < sizeof(stream); i++)
	{
		printf("%d", encoded[i]);
	}
	
    return 0;
}