/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
  
  /************************************
   * version 2 of Arrangment_N_number**
   *                                  *
   * **********************************/
  
int num_of_ele=10;

int main()
{
    
printf("please enter the number of element you need to sort\n");
scanf("%d", &num_of_ele);
int *arr =(int*)malloc(sizeof(int)*(num_of_ele+1)); //create dynamic array to stor the element
int *arr_descending_odd =(int*)malloc(sizeof(int)*(num_of_ele+1)); //create dynamic array to stor the element
int *arr_ascending_even =(int*)malloc(sizeof(int)*(num_of_ele+1)); //create dynamic array to stor the element
int *swap1_even =(int*)malloc(sizeof(int)*(num_of_ele+1));
int *swap2_odd =(int*)malloc(sizeof(int)*(num_of_ele+1));
int swap=0,index=0;

printf("please enter the  element you need to sort\n");
for(int i=0;i<=num_of_ele;i++)
{
    scanf("%d",(arr+i));
}

for(int i=0;i<=num_of_ele;i++)// this loop for only separate odd numbers and enen numbers
{
    if((arr[i]%2==0))
    {
        arr_ascending_even[i]=arr[i];
        swap1_even[i]=arr[i];
    }
    else
    {
        arr_descending_odd[i]=arr[i];
        swap2_odd[i]=arr[i];
        
    }
}

swap = arr_ascending_even[0];
    
for(int i=0;i<+num_of_ele;i++)// this loop for only sort the even numbers with ascending sequane
{
    for(int j=0;j<+num_of_ele;j++)// this loop for only sort the even numbers with ascending sequane
    {
    
      if(arr_ascending_even[i]<arr_ascending_even[j])
        {
        
         swap1_even[i]=arr_ascending_even[i];
        }
    }
}


    
for(int i=0;i<+num_of_ele;i++)// this loop for only sort the even numbers with ascending sequane
{
    for(int j=0;j<+num_of_ele;j++)// this loop for only sort the even numbers with ascending sequane
    {
    
      if(arr_descending_odd[i]>arr_descending_odd[j])
        {
        
         swap2_odd[i]=arr_descending_odd[i];
        }
    }
}



for(int j=0;j<num_of_ele;j++)
{
if(swap1_even[j] !=0)
printf("%d\n",swap1_even[j]);
}


for(int j=0;j<num_of_ele;j++)
{
if(swap2_odd[j] !=0)
printf("%d\n",swap2_odd[j]);
}



    return 0;
}

