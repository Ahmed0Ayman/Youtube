/*
 * This file is a test case you may use and change to check your code
 */
#include "Question2.h"

int main()
{
	unsigned int num = 188;
	unsigned char hex_value[4] = {0};
	
	decimalToHex (num, hex_value);
	
	for(int i = 0; i < 4; i++)
	{
		printf("%c", hex_value[i]);
	}
	
    return 0;
}