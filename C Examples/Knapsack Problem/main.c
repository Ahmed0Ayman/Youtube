/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>



uint32_t w;
uint32_t n;
uint32_t w_max;

int main()
{
    printf("enter the max weight , number of elements in store W ,N \n ");
    scanf("%d %d",&n,&w_max);
    
    uint32_t  *ptr_w = (uint32_t *)calloc(n,sizeof(uint32_t));
    uint32_t  *ptr_p = (uint32_t *)malloc(n,sizeof(uint32_t));   
    
    uint32_t  *ptr_w_new = (uint32_t *)calloc(n*n,sizeof(uint32_t));
    uint32_t  * ptr_p_new = (uint32_t *)calloc(n*n,sizeof(uint32_t));  
    
    
    

    printf("enter the  price of each element in the store \n");
    for(volatile int i=0;i<n;i++)  /* volatile keyword help to avoid bugs when enable optimization */
    {
    scanf("%d",&ptr_p[i]);
    }
 
    printf("enter the  weight of each element in the store \n");
    for(volatile int i=0;i<n;i++)
    {
    scanf("%d",&ptr_w[i]);
    }
    
    
    uint32_t count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j )  /* to avoid duplication of array element */
            continue ;
            
            
            /* here check every two contigous numbers because there is unlimited numbers of probabilities */
            ptr_p_new[count] = ptr_p[i]+ptr_p[j];
            ptr_w_new[count] = ptr_w[i]+ptr_w[j];
            count++;

        
        }
    }
    uint32_t index=0,max=0;
    
    /* traverse on all array elements */
    for(int i=0;i<n*n;i++)
    {
        
        if(ptr_w_new[i]<=w_max)
        {
            if(max <= ptr_p_new[i])
            {
                index = i;
                max = ptr_p_new[i] ;
            }
        }
    }
    
    /* print result on screen */
    printf("the total waight is : %d\n",ptr_w_new[index]);
    printf("the total price is :%d\n",ptr_p_new[index]);
    return 0;
}


