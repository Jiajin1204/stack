#include <stdlib.h>
#include <stdio.h>
#include "../inc/stack.h"

struct Stack * StackInit(void)
{
    struct Stack *stack = NULL;
    stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->head = (struct List *)malloc(sizeof(struct List));
    stack->head->next = NULL;
    stack->size = 0;

    return stack;
} 

int StackPush(struct Stack *stack, int data)
{
    struct List *tmp = (struct List *)malloc(sizeof(struct List));
    tmp->data = data;
    tmp->next = stack->head->next;
    stack->head->next = tmp;
    stack->size ++;
    //printf("push: %d ", data);

    return 0;
}
int IsStackEmpty(struct Stack *stack)
{
    if(stack->head->next == NULL)
        return 1;
    else
        return 0;
}
int StackPop(struct Stack *stack, int *data)
{
    struct List *tmp = NULL;
    if(IsStackEmpty(stack))
        return -1;

    tmp = stack->head->next;
    *data = tmp->data;
    stack->size --;
    stack->head->next = stack->head->next->next;
    free(tmp);
    //printf("pop:%d ", *data);

    return 0;
}

