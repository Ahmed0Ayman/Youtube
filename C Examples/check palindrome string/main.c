/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void Check_String(char * Str)
{
    if(Str == NULL) /* check input parameter  */
    {
        return ;
    }
    int flag =0 ,len =0 ;
    char * Temp_Str  = Str ;
    while(*Str++ != '\0')
    {
        Temp_Str = Str ;
        while(*Temp_Str++ != '\0')
        {
            if(*Temp_Str == *Str)
            {

                len = Temp_Str - Str ;
                
                for(int i =0 ;i<len/2 ;i++)
                {
                    if(*(Temp_Str-i) == *(Str+i))
                    {
                        flag = 1 ;

                    }
                    else
                    {
                        flag =  0 ;
                    }
                }
                if(flag == 1 )
                {
                    break ;
                }
            }
            if(flag == 1 )
            {
                break ;
            }
        }


    }
    
if(flag == 1 )
{
    printf("this string  contain\n ");
}
else
{
    printf("this string not contain \n");
}  
    
}

int main()
{
    
    char  arr[] = "ahmedemdh" ;
    Check_String(arr);
    
    
    printf("Hello World");

    return 0;
}

