#include "Question1.h"


// Complete the function below.

/* IMPORTANT NOTE:	DO NOT use printf and/or scanf in this file*/


/*
 * brief : this function used to generate an array of encoded values 
 * param stream : hte stream of bits that you want to convert 
 * param stream_size : size of stream array 
 * param encoded : pointer to arrayt that hold the result 
 * return : void 
 */
void encoding (char* stream, unsigned int stream_size, unsigned char* encoded)
{
    
 	if((encoded == NULL)||(stream == NULL)||(stream_size == 0))
		return ;
		
		
		
    uint32_t count =0 ,bit =0 ;
    uint32_t encoded_index =0 ;
    uint32_t stream_index =0 ;
    
    for(uint32_t iterat1 =0 ;iterat1 <stream_size; iterat1++) /* loop over the received array */
    {
        count = 0;
        for(uint32_t iterat2 = iterat1 ;iterat2 < stream_size ;iterat2++ ) /* loop over the similar contiguous elements */
        {
            
            if(stream[iterat1] == stream[iterat2])
            {
                count++;
            if(iterat2 == stream_size-1)
            {

                stream_index = iterat1 ;
                iterat1 = stream_size ;
                break ; 
            }
            }
            else
            {
                stream_index = iterat1 ;
                iterat1 = iterat2-1 ;
                break ;
            }
            
            
        }
        if(stream[stream_index]> 0) /* this function encode only zero's and one's so any value larger than 1 will interpreter as one before store result */
        bit = 1 ;
        else
        bit  =0 ;
        encoded[encoded_index++] = bit;
        encoded[encoded_index++] = count ;
        
    }
    

}/* END_FUN encoding() */