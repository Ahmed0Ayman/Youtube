/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MIN_LINE_SIZE 5 



int main()
{
    int Line =0 , Temp = 0 ,T = 0  , len =0 ; 
    int Car1 = 0 ,Car2 = 0 , *lineRes = NULL;

    int ** arr = NULL ;
    printf("enter the num of lines  : \n");
    scanf("%d",&Line);
    
    arr = (int **)malloc(sizeof(int *)*Line);
    lineRes = malloc(sizeof(int)*Line);
    
    if((arr == NULL)||(lineRes == NULL))
    exit(1);
    
    
    
    for(int i =0 ; i<Line ;i++)
    {
        arr[i] =   malloc(sizeof(int)*20);     
    }
    Temp = Line ;
        for(int i = 1 ; i< 2*(1+Line);i *=2 )
        {
        printf("enter the %d line ",Line-Temp);
        for(int j =0 ;j<i*5 ;j++)
        {
            
            scanf("%d",&T);
            arr[Line-Temp][j] = T;
            
        }
        
              Temp-- ;      
    }

    Temp = Line ;
        for(int i = 1 ; i< 2*(1+Line);i *=2 )
        { 
         for(int j =0 ;j<i*5;j++)
        {
            for(int k =j ;k<i*5 ;k++)
            {
                if(arr[Line-Temp][j] < arr[Line-Temp][k])
                {
                    T = arr[Line-Temp][j] ;
                    arr[Line-Temp][j] = arr[Line-Temp][k];
                    arr[Line-Temp][k] = T ;
                }
            
            }
        }           
         Temp--;
    }    
    
    


    

    Temp = Line ;
        for(int i = 1 ; i< 2*(1+Line);i *=2 )
        { 
        while(len < 5*i)
        {
            if(Car1<Car2)
            {
                for(int j =0 ;j<5*i ;j++)
                {
                    if(!arr[Line-Temp][j])
                    continue ;
                    
                    if((Car1 + arr[Line-Temp][j]) == Car2)
                    {
                        Car1 += arr[Line-Temp][j] ;
                        arr[Line-Temp][j]= 0 ;
                        len++;
                        break;
                    }
                    
                    if(((Car1 + arr[Line-Temp][j]) != Car2) &&(j ==5*i-1 ))
                    {
                        j=0;
                    while(!arr[Line-Temp][j])
                    {
                        j++;
                    }
                    Car1 += arr[Line-Temp][j] ;
                    arr[Line-Temp][j] = 0 ; 
                    len++;
                    break; 
                    }
                }  
            }
            else if(Car1>Car2)
            {
                for(int j =0 ;j<5*i ;j++)
                {
                    if(!arr[Line-Temp][j])
                    continue ;
                    
                    if((Car2 + arr[Line-Temp][j]) == Car1)
                    {
                        Car2 += arr[Line-Temp][j] ;
                        arr[Line-Temp][j]= 0 ;
                        len++;
                        break;
                    }
                    if(((Car2 + arr[Line-Temp][j]) != Car1) &&(j ==5*i-1 ))
                    {
                        j=0;
                    while(!arr[Line-Temp][j])
                    {
                        j++;
                    }
                    Car2 += arr[Line-Temp][j] ;
                    arr[Line-Temp][j] = 0 ; 
                    len++;
                    break; 
                    }
                }  
            }
            else
            {
                for(int j =0 ;j<5*i ;j++)
                {
                    if(!arr[Line-Temp][j])
                    continue ;
                    

                        Car2 += arr[Line-Temp][j] ;
                        arr[Line-Temp][j]= 0 ;
                        len++;
                        break;
                    
                }    
            }
        }
        if(Car1 == Car2)
            lineRes[Line-Temp] = 1 ;
        else
            lineRes[Line-Temp] = 0 ;
         Car1 = 0 ;
         Car2 = 0 ;
         len =0 ;
         Temp--;
        }    
        for(int i =0 ;i<Line;i++)
        {
            if(lineRes[i])
            printf("True\n");
            else
            printf("False\n");
          
        }


    return 0;
}

