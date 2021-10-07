#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



int  Result =0 ;

/* please check readme file for more details about this assignment */
int main(void)
{

  uint32_t X_axis = 0  ,Y_axis = 0 ;
  
  
  /* loop till receive correct dimentions */
  while((X_axis < 100 )&&(X_axis > 1)&&(Y_axis > 2))
  {
    printf("enter the gird dimentions X , Y_axis\n");
    scanf("%d",&X_axis);
    scanf("%d",&Y_axis);
  }

    /* allocate 2D array */
  int **arr = malloc(sizeof(int *) * X_axis);
  
  /* check allocated Ptr before access */
    if(arr == NULL)
    exit(1);
    
    

    for(int y =0 ; y< Y_axis ; y++ )
    {
        arr[y] = malloc(sizeof(int* ) * X_axis);  
        
        
        if(arr[y] == NULL)
        exit(1);
    }

  //now we are ready to receive tne grid
  printf("Enter the gird array \n" );

    /* now we're ready to receive array elements */
    for(int y = 0 ;y < Y_axis ; y++)
    {
        for(int x =0 ; x< X_axis ; x++ )
        {
            scanf("%d", &arr[y][x] );
        }
    }
  


    /* initiate Result with (0,0) element */
    Result = arr[0][0];  

    for(int j =0 ;j< Y_axis ;j++)
    
        for(int i =0 ;i< X_axis;++i)
        {
                if(i == X_axis-1)
                {
                    Result += arr[j+1][i];
                    i--;j++;
                    
                    
                    if(j == Y_axis-1)
                    break ;
                    
                    
                    continue ;
                }
                if(j == Y_axis-1)
                {
                    Result += arr[j][i+1];
                    i++;
                }
                else if(arr[j+1][i]>arr[j][i+1])
                {
                    Result += arr[j+1][i];
                    j++;i--;
                }
                else
                {
                    
                    Result += arr[j][i+1];
                    
                     
                }
            
            
            
            }
        }


  /* now we wil print the Result on screen as a output */
  printf("result is : %d\n",Result);

}


