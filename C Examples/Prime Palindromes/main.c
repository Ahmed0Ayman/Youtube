/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*
hint prime number generate with two equations 
6k+1 , 6k-1
*/


#include <stdlib.h>
#include <stdio.h>


#define K_SecondPrime(k)     (((k)*6)+1)

#define K_FirstPrime(k)      (((k)*6)-1)




int main()
{
    int a =0 ,b= 0  ,k_Start=0 ,K_end=0 ; 
    int *arr  = NULL,*result = NULL ;
    int first_num =0 ,Second_num = 0 ,flag=0;
    int Temp_first_num =0 ,Temp_Second_num = 0 ;
    
    int temp_Arr[10] = {0};
    
    
    printf("enter the two integers \n");
    scanf("%d %d",&a ,&b);
    
    if(b<a)
    {
        int temp = a ;
        a = b ;
        b = temp ;
    }
    
    // to know whick k we will start with 
    
    if((a+1)%6)
        k_Start  = (a+1)/6;
    else
        k_Start  = (a-1)/6;
        
        
    
    
    if((b+1)%6)
        K_end  = (b+1)/6;
    else
        K_end  = (b-1)/6;
        
    int j =0 ;
    for(int i = k_Start ;i<= K_end;i++)
    {
        j=0;
        first_num = K_FirstPrime(i);
        if((first_num>0)&&(first_num >= a))
        {
        Temp_first_num = first_num ;
        while(Temp_first_num > 0)
        {
            temp_Arr[j++] = Temp_first_num%10;
            Temp_first_num /= 10;
        }
        for(int x =0 ;x<j;x++)
        {
            if(temp_Arr[x] == temp_Arr[j-x-1])
            {
                flag = 1 ;
            }
            else
            {
                flag = 0 ;
                break ;
            }
        }
        if(flag == 1)
        printf("%d\n",first_num);
        }
        
        j=0;
        Second_num = K_SecondPrime(i);
        if((Second_num>0)&&(Second_num >= a))
        {
        Temp_Second_num = Second_num ;
        while(Temp_Second_num > 0)
        {
            temp_Arr[j++] = Temp_Second_num%10;
            Temp_Second_num /= 10;
        }
        for(int x =0 ;x<j;x++)
        {
            if(temp_Arr[x] == temp_Arr[j-x-1])
                flag = 1 ;
            else
            {
                flag = 0 ;
                break ;
            }
        }
        if(flag == 1)
        printf("%d\n",Second_num);
        }
              
        
        
    }
        
    
    printf("%d , %d \n",k_Start ,K_end);
    printf("%d , %d \n",k_Start*6+1 ,K_end*6+1 );

    return 0;
}
