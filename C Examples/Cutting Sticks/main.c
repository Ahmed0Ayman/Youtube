/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


    int Len =0 ,n = 0 ;
    int result  ;  
    
    void Recurve(int start ,int end ,int arr[]);
 
    int CalRes(int arr[],int size );
 
 
 
int CalRes(int arr[],int size )
{
        size--; /* array index form 0 - n-1*/
        Recurve(0,size/2 , arr);
        Recurve(size/2,size , arr);
}


void Recurve(int start ,int end ,int arr[])
{

    if((start !=0)&&(end != n-1))    /* first cut with start point zero*/
    result += arr[end] - arr[start] ;    
    else if(end == n-1)            /* last cut with end point len */
    result += Len - arr[start] ;     
    else
    result += arr[end] - 0 ;  
    
    
    if(end-start <= 1) /* base condition */
    {
        return ;
    }   
    
    
    
    Recurve(start,end/2 , arr);
    
}

int main()
{

    do
    {
        printf("enter the total len \n");
        scanf("%d",&Len);
        printf("enter n \n");
        scanf("%d",&n);
    }while(Len == 0);
    
    result = Len;
    
    if(n == 0) /* there is no cutting */
    {
        printf(" the total cost %d \n",Len);
        return 0;
    }
    
    
    int * arr = malloc(sizeof(int )*n);
    if(arr == NULL)
    return -1 ; /* error in allocation (heap ) */
    
    printf("enter cutting points \n");
    for(int i =0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    

    

	CalRes(arr,n);
    
    
    
    printf("the result is %d\n",result);

    return 0;
}

