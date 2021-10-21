/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[30] = {0},arrResult[20] = {0} ,Temp_num =0,flag =0  ;
    
    int n =0,num =0  , counter = 0 ;
    do
    {
        printf("enter the maximun numbers of list do you want to figerout \n");
        scanf("%d",&n);
    }while(n<=0 );
    
    int i =0 ,j= 0,k=0;
    while(counter < n)
    {
        Temp_num = num = i*i ;
        j =0 ;
        while(num > 0)
        {
            arrResult[j++] = num%10 ;
            num /= 10 ;
        }
        
        j--;
        flag = 0 ;
        for(int i =0 ;i<= j ;i++)
        {
            if(arrResult[i] != arrResult[j-i])
            {
                flag = 1 ;
                break ;
            }
            
        }
        
        if(flag == 0 )
        {
            arr[k++] = Temp_num ;
            arr[k++] = i ;
            counter++;
        }
        
        i++ ;
    }
    
    
    for(int i = 0 ;i < k;)
    {
        printf("%d  %d \n",arr[i++],arr[i++]);
    }
    
}


