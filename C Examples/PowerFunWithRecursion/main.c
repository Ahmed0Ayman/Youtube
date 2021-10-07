/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int recursve_power_x(int x,int y);


int recursve_power_x(int x,int y)
{
    if(y==1)
    return x;
    
    
    return x*recursve_power_x(x,y-1);
}


int main()
{

int result=recursve_power_x(3,3);
printf("%i\n",result);


    return 0;
}

