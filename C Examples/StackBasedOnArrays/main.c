/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "stack.h"

/* 
this program using array method to build tstack operation 
*/

int main()
{
    
    
    Stack S =NULL ;
    int D = 10 ;
    

    Stack_Init(&S) ;

    Stack_Push(&S,&D );
    D = 1;
    Stack_Push(&S,&D );    
    Stack_Pop(&S,&D );    
    Stack_Pop(&S,&D );
    printf("%d\n",D);


    printf("Hello World");

    return 0;
}
