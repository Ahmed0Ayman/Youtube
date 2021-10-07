/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main()
{
int r,c;
//first we need to determine the lenght of the grid 

printf("enter the lenght of coulmn\n ");
scanf("%d",&c);
printf("enter the lenght of rows\n ");
scanf("%d",&r);
int *arr[r];
    for(int i=0;i<r;i++)
    {
    arr[i]=(int *)malloc(c * sizeof(int));   
    }
    
    // now we need to initialize the grid
    
    printf("enter the elemets of the grid :");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
     printf("\n");   
    }
    
    
    int sum=arr[0][0];
    int i=0,j=0;
    while(i<r-1)
    {
    while(j<c-1)
    {
        if(arr[i][j+1]<arr[i+1][j])
        {
            sum +=arr[i+1][j];
            printf("%d\n",arr[i+1][j]);
            i++;
            
        }
        else if((arr[i][j+1]>arr[i+1][j]))
        {
            sum +=arr[i][j+1];
            printf("%d\n",arr[i][j+1]);
            j++;

        }
    }

        
    }
    
    
    
    
    printf("############## x=%d\n",sum);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
     printf("\n");   
    }
    

    return 0;
}

