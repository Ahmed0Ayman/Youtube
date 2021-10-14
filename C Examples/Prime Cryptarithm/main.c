/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0,result=0,counter =0 ,temp_num21=0,temp_num22=0;
    int arr[5] = {0},arrResult[4] = {0};
    while(n <=0 )
    {
    printf("enterr the total number \n");
    scanf("%d",&n);
    }
    
    printf("enter the numbers \n");
    for(int i =0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int num1 =0 ,num21 =0 ,num22=0;
    int j=0 ,l=0, x =0 ,flag =0 ;

    for(int i =0 ;i< 3 ;i++)
    {

        
        if(!((i+1)%5))
        {
            if(!((j+1)%5))
            {
                
                l++;
                j=0;
            }
            else
            j++;
        }
            
        num1 = arr[i]+arr[j]*10 + arr[l]*100 ;           

        for(int k =0 ;k < 5 ;k++)
        {                     
            temp_num22 = num22 = arr[k]* num1;
            x=0;
            while(num22)
             {
                arrResult[x++] = num22%10 ; 
                 num22 /= 10 ;
             }
             
             flag= 0 ;
             while(--x)
             {
                 if(arrResult[0] == arrResult[x])
                 flag =1;
             }
             if(!flag)
             continue ;
             
             
            for(int f =0 ;f<5 ;f++)
            {

                 temp_num21 = num21 =  arr[f] * num1;
                 x=0;
                 while(num21)
                 {
                    arrResult[x++] = num21%10 ; 
                     num21 /= 10 ;
                 }
                 
                 
                 flag= 0;
                 while(--x)
                 {
                     if(arrResult[0] == arrResult[x])
                     flag =1;
                 }
                 if(!flag)
                    continue ;

                 
                 result = temp_num21*10 +temp_num22;
                 x=0;
                 while(result)
                 {
                    arrResult[x++] = result%10 ; 
                     result /= 10 ;
                 }                    
                 
                 for(int x =0 ;x<4;x++)
                 {
                    for(int d =0 ;d<5;d++)
                    {
                        if(arrResult[x] == arr[d])
                        {
                            flag = 1;
                            break ;
                        }
                        else
                            flag =0 ;
                    }
                 
                     if(flag == 0)
                         break ;
                 }
                 if(flag == 1)
                 {
                    counter++; 
                    flag =0;
                 }
                 
            }
        }
            
    }
        
        
        
    
    
    printf("%d",counter);
    
    

    return 0;
}

