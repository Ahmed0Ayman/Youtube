#include "Question2.h"

// Complete the function below.

/* IMPORTANT NOTE:	DO NOT use printf and/or scanf in this file*/



/* 
 * brief : this function convert hex to decimal only convert 2 digits 
 * param num : the number you wanted to convert 
 * hex_value : result from the conversion
 * return : Void 
 */
void decimalToHex (unsigned int num, unsigned char* hex_value)
{
	//	Write your code here
	if(hex_value == NULL) return ;
	uint32_t Remander =0 ,Result = num ;
	

	 /* first initialize all bytes with char zore */
	 hex_value[1] = '0' ;
	 hex_value[2] = '0' ;
	 hex_value[3] = '0' ;	
	if(Result == 0) /* check if the num is equal zero or not */
	{
	    hex_value[0] = '0';
	    return ;
	}
	
	Remander = Result%16 ;
	Result = Result/16 ;
	if(Result == 0)/* if anly one digit */
	{
	 
	if((Remander>=0)&&(Remander<=9)) /* check if the result is number */
	{
	    hex_value[0] = Remander+48;
	}
    else if((Remander>=10)&&(Remander<=15))
	{
	    hex_value[0] = Remander+55;
	}
	else
	{
	   hex_value[0] = 0 ;
	}

	return ;
	}
	else /* here means there is another digit will be calculated */
	{
	if((Remander>=0)&&(Remander<=9))
	{
	    hex_value[1] = Remander+48;
	}
    else if((Remander>=10)&&(Remander<=15))
	{
	    hex_value[1] = Remander+55;
	}
	else
	{
	   hex_value[1] = 0 ;
	}	    
	}

	
	Remander = Result%16 ;
	Result /= 16 ;
	if((Remander>=0)&&(Remander<=9))
	{
	    hex_value[0] = Remander+48;
	}
    else if((Remander>=10)&&(Remander<=15))
	{
	    hex_value[0] = Remander+55;
	}

	
	
}/* END_FUN decimalToHex() */