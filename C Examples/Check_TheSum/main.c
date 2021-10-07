/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* for more info about this task please check readme file */


int main()
{
    int len =0 ,Result = 0 , num = 0  ;
    int *arr = NULL;
    
    
    while(!len){
    printf("Please enter the length of numbers : \n");
    scanf("%d",&len);    
    }
    
    arr = malloc(sizeof(int)*len);
    if(arr == NULL)
    exit(1);
    
    
    
    printf("enter the Numbers : \n");
    for(int i = 0 ;i< len ;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter the sum nuber that you need to check \n");
    scanf("%d",&num);
    
    for(int i = 0 ; i<len ;i++)
    {
        for(int j =i ;j<len;j++)
        {
            if(arr[i] + arr[j] == num)
            {
                printf("true\n");
                exit(0);
            }
            
            
        }
        
        
    }
   

    return 0;
}

