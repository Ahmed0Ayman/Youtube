#include "stack.h"

static unsigned int StackFullSize , StackCurrSize  ;

struct _Stack {
    
    Data d ;
    
};

bool Stack_Init(Stack * S) 
{
    
    *S = malloc(sizeof(struct _Stack)*10);
    StackFullSize  = 10 ;
    StackCurrSize = 0 ;
}



bool  Stack_Push(Stack *  S, Data * D )
{
    if(StackCurrSize < StackFullSize )
    {
        ((*S+StackCurrSize++))->d = *D ;
    }
    else
    {
        *S = realloc(*S,sizeof(struct _Stack)*(StackFullSize+10));
        StackFullSize += 10 ;
        
    }
}


bool  Stack_Pop(Stack * S, Data * D )
{
    if(StackCurrSize != 0)
    *D =    ((*S+StackCurrSize--))->d ;
    else
    false ;
}


bool  Stack_Top(Stack * S, Data * D )
{
    if(StackCurrSize != 0)
    *D =    ((*S+StackCurrSize))->d ;
    else
    false ;
}


bool  Stack_IsEmpty(Stack * S)
{
    return !StackCurrSize ? true : false ;
}

bool  Stack_IsFull(Stack * S)
{
    return (StackCurrSize==StackFullSize) ? true : false ;
}