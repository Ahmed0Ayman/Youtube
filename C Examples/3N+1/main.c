/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "LogicFun.h"









int main(void)
{

    /* start with 10 element if the user enter more than this we will reallocate more space */
    int *RecArr = (int *)malloc(10*sizeof(int));
 
    /* here counter varible will mark the number of reallocation function used */
    int counter = 1 ;
    
    
    int offset =0 ;
    
    /* here we just inform user with the formate of input */
    printf("enter the two numbers in form such as 1 1 and 1 23\n you need to know termination line is 0 0\n ");
    for(int i =0 ;i< 10 ;i+=2)
    {

        scanf("%d %d",&RecArr[i+offset],&RecArr[i+1+offset]);
        if((RecArr[i+offset] == 0) && (RecArr[i+1+offset] == 0))
        {
        break; /* break only when hit zero & zero */
        }

        if(i >= 8 )
        {
            offset = counter*10 ;
            i = -2 ;
            counter++ ;
            RecArr = (int * )realloc(RecArr , sizeof(int) * 10 * counter) ; /* every time you nedd allocate new space will add 10 integer spaces and then reset the loop */
        }



    }
    
    FunTest(RecArr); /* call the function to perform its operation on the received data */

    return 0;
}
