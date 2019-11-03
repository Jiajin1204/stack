#include <stdio.h>
#include <stdlib.h>
#include "./inc/stack.h"

int main()
{
    struct Stack *stack = NULL;
    stack = StackInit();
    for(int i = 0; i < 5; i++){
        StackPush(stack, i);
    }

    for(int i = 0; i < 5; i++){
        int data = 0;
        StackPop(stack, &data);
        printf("%d ", data);
    }
    FreeStack(stack);
    printf("\n");

    return 0;
}