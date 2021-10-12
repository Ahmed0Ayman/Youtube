/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>




int NumberOfCoins =0 ,MoneyToConstruct = 0 ;


int main()
{
    int sum=0,result=0;
    printf("please enter v , n \n");
    scanf("%d %d",&NumberOfCoins,&MoneyToConstruct);
    
    if(NumberOfCoins == 0)
    {
        printf("wrong number of coins please try again \n");
        exit(1);
    }

    int * ArrCoins = calloc(NumberOfCoins,sizeof(int));
    int * ArrCond  = calloc(NumberOfCoins,sizeof(int));

    
    if((ArrCond == NULL)||(ArrCoins == NULL))
        exit(2);
        
        
        
    printf("enter coins \n");
    for(int i =0 ;i< NumberOfCoins;i++)
    scanf("%d",&ArrCoins[i]);
    
    int j =0 ,flag =0 ;

        for(int i =0 ;i<=11;i++)
        {
            
            ArrCond[j]++;
            if(ArrCond[j] == 11)
            {
                 i=0;
                 while((ArrCond[j]==11)&&(j<NumberOfCoins))
                 {
                     if((ArrCond[j+1]!=11)&&(j<NumberOfCoins-1))
                     {                         
                         ArrCond[j++]=0;
                         ArrCond[j]++;
                     }else
                     {
                         if(j<NumberOfCoins-2)
                         {                             
                             ArrCond[j++]=0;                             
                             ArrCond[j++]=0;
                             ArrCond[j]++;
                         }
                         else
                         {
                             flag = 1 ;
                         }
                         
                     }
                     if(flag == 1)
                     break ;                     
                 }
                 
            }
                    
                for(int n =0 ;n<NumberOfCoins;n++)
                { 
                    sum += ArrCond[n]*ArrCoins[n];
                
                }
                   if(sum == MoneyToConstruct)
                    result++; 
                sum=0;
                j=0;
                
                
            if(flag == 1)
            break ;
        }
        
        
        
    
    
    
    printf("the result is  %d\n",result);

    return 0;
}
