#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>






// here we will write all stack APIs 
typedef  int Data  ;
typedef struct _Stack  * Stack ;




bool Stack_Init(Stack * S) ;

bool Stack_Push(Stack * S, Data * D );


bool Stack_Pop(Stack * S, Data * D );

bool Stack_IsEmpty(Stack * S);
bool Stack_IsFull(Stack * S);




bool Stack_Top(Stack * S, Data * D );


