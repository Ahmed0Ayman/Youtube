/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

    int arr0[15]={0,1,0,1,0,1,0,0,0,1,0,1,0,1,0};    
    int arr1[15]={0,0,0,0,0,1,0,0,0,0,0,1,0,0,0};   
    int arr2[15]={0,1,0,0,0,1,0,1,0,1,0,0,0,1,0};    
    int arr3[15]={0,1,0,0,0,1,0,1,0,0,0,1,0,1,0};
    int arr4[15]={0,0,0,1,0,1,0,1,0,0,0,1,0,0,0};    
    int arr5[15]={0,1,0,1,0,0,0,1,0,0,0,1,0,1,0};   
    int arr6[15]={0,1,0,1,0,0,0,1,0,1,0,1,0,1,0};
    int arr7[15]={0,1,0,0,0,1,0,0,0,0,0,1,0,0,0};
    int arr8[15]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    int arr9[15]={0,1,0,1,0,1,0,1,0,0,0,1,0,1,0};


    
    int * TotalNum[10] = {arr0,arr1,arr2,arr3,arr4,arr5,arr6,arr7,arr8,arr9};
    
    
void PrintNum(int Number);
void CollectDigits(int **arr,int Digits,int *NumOfDigits);


int main()
{
    int Number = 123450 ;

    PrintNum(Number);
    
    PrintNum(67890 );

   exit(0);
}



void PrintNum(int Number)
{
    int * TempArr = NULL ,NumOfDigits =0 ;
    CollectDigits(&TempArr,Number,&NumOfDigits);
    
    if(TempArr == NULL)
    exit(2);
        
    for(int i =0 ;i<5;i++)
    {
            
        for(int j =0 ;j<3*NumOfDigits;j++)
        {
            if(TempArr[i*3*NumOfDigits +j])
            {
                if(j%3 == 1)
                {
                    printf("--");
                }else{
                    printf("|");
                    
                }
            }else{
                if(j%3 == 1)
                {
                printf("  ");    
                }else{
                printf(" ");
                }
                
            }
            
        }
            printf("\n");
    }
    
 
    
}

void CollectDigits(int ** arr ,int Digits,int *NumOfDigits)
{
    if((arr == NULL)|(NumOfDigits == NULL))
    exit(1);
    
    int  DigitsArr[10] = {0};
    int * ArrLcd[10] = {0};
    int * ArrRes = NULL ;
    int NewArrResSize = 0 ;
    int size =0 ;
    
    /* seprate nuber into digits */
    while(Digits)
    {
        DigitsArr[size++] = Digits%10 ;
        Digits /= 10 ;
    }
    
    /* return the number of Digits to caller */
    *NumOfDigits = size ;
    
    for(int i = size-1 ;i>=0 ;--i)
    {
        ArrLcd[i] = TotalNum[DigitsArr[size-1-i]];
    }
    
    NewArrResSize = 15*size; /* total size plus the number of internal spaces */
    ArrRes = calloc(NewArrResSize,sizeof(int));
    
    if(ArrRes == NULL)
    exit(1);
    
    
    for(int i =0 ;i<5;i++) /* ietrate on each number */
    {
        for(int j =0 ;j<size;j++)
        {
            for(int k =0 ;k < 3 ;k++ )
            {
                ArrRes[i*(size*3)+(j*3)+k] = (ArrLcd[j])[k+(i*3)];
            }
            
        }
        
    }
    
    /* return Result ( new Array ) 
    the caller has full responsabilty to free arr pointer */
    *arr = ArrRes ;
    
}


