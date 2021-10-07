/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "Sort.h"



int main()
{
    
    int * arr , SizeOfArr =0 ;
    
    printf("enter the number of elents \n ");
     scanf("%d",&SizeOfArr);
    
    while(SizeOfArr == 0 )/* iterate till receive correct number */
    {
    printf("enter the number of elents \n ");
    scanf("%d",&SizeOfArr);        
    }
    
    arr  = malloc(SizeOfArr * (sizeof(int)));
    for(int i =0 ; i< SizeOfArr ; i++)
    {
        scanf("%d",&arr[i]);
    }

    
    
    
    
     SortFun(arr,8); 
    
    
   
    

        
        printf("the output arr is : \n" );
         for(int i =0 ;i<15;i++)
         {
             printf("\n%d\n",arr[i]);
         }
    
    
    
    
    printf("Hello World");

    return 0;
}
