/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <boolean.h>

    //the fuction that will do this operation 
    _Bool check_fun(int * arr_num,int len ,int digit);

int main()
{
    bool x=false;
    int N=0,T=0;
    printf("enter the number of digits N\n");
    scanf("%d",&N);
    
    int * num_N = (int *) malloc(N * sizeof(int));
    
    
    // request the digits from user  N
    printf("enter the digits that you need to test :\n");
    for(int count =0;count<N;count++)
    {
     scanf("%d",&num_N[count]);   
    }
    
    // request the digit T from the user 
    printf("enter the digit T :\n ");
    scanf("%d",&T);
    
    x=check_fun(num_N,N,T);
    if(x == true)
    printf("TRUE\n");
    else
    printf("False \n");
    
    
    

    return 0;
}

    //the fuction that will do this operation 
    bool check_fun(int * arr_num,int len ,int digit)
    {
        for(int count1 =0;count1<len-2;count1 ++)
        {
        
            if((arr_num[count1]+arr_num[count1+1]+arr_num[count1+2])==digit)
            {
             printf("%d + %d + %d = %d\n",arr_num[count1],arr_num[count1+1],arr_num[count1+2],digit);   
             return true;
            }
            else if((-(arr_num[count1])+arr_num[count1+1]+arr_num[count1+2])==digit)
            {
             printf("-%d + %d + %d = %d\n",arr_num[count1],arr_num[count1+1],arr_num[count1+2],digit);   
             return true;
            }
            else if((arr_num[count1]+arr_num[count1+1]-(arr_num[count1+2]))==digit)
            {
             printf("%d + %d - %d = %d\n",arr_num[count1],arr_num[count1+1],arr_num[count1+2],digit);   
             return true;
            }
            if((arr_num[count1]-(arr_num[count1+1])+arr_num[count1+2])==digit)
            {
             printf("%d - %d + %d = %d\n",arr_num[count1],arr_num[count1+1],arr_num[count1+2],digit);   
             return true;
            }
    
        }

        return false;
    }
    
    
    
