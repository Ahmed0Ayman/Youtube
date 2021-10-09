/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "Lcd.h"

    
    
void PrintNum(int Number);
void CollectDigits(int **arr,int Digits,int *NumOfDigits);


int main()
{
    int Number = 123450 ;

    PrintNum(Number);
    printf("\n");
    PrintNum(678901);

   exit(0);
}

