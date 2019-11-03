#ifndef STACK_H
#define STACK_H
#include <stdio.h>
struct List{
    int data;
    struct List *next;
};

struct Stack{
    struct List *head;
    int size;
};

struct Stack *StackInit(void);
int StackPush(struct Stack *stack, int data);
int IsStackEmpty(struct Stack *stack);
int StackPop(struct Stack *stack, int *data);
int FreeStack(struct Stack *stack);
#endif