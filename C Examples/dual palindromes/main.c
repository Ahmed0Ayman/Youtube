/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>




int main()
{
    int n =0 ,s =0 ,TempNum =0 ,Base = 2 ;
    int ArrResult[20] = {0},TempArr[20]={0};
    do
    {
        printf("enter n , s \n");
        scanf("%d %d",&n,&s);
    }while(n==0);
    


    int x = 10 ,index =0  ,flag = 0;
    for(s++;n > 0;s++)
    {
    while(x >= Base) /* iterate on each base till reach the true one */
    {
        TempNum = s ;
        for(int i=0 ;TempNum>0;i++,index++)
        {
            TempArr[i] = ((TempNum%x));
            TempNum /= x ;
        }
        
        index--;
        for(int j =0 ;j<= index ;j++)
        {
            if(TempArr[j] != TempArr[index-j])
            {
                flag = 1 ;
                break;  /* break not palindromes*/
            }
            
        }

        
        if(flag == 0)
        {
            ArrResult[--n] = s ;
            printf("%d \n",ArrResult[n]);
            break;  /* break to check next number */
        }else
        {
            flag = 0 ;
        }

        index=0;
        x--;
        
    }
        x=10;
    }
    


    return 0;
}
