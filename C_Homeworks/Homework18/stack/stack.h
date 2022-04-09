#include <stdlib.h>
#include <stdio.h>

typedef int item_type;

typedef struct Stack
{
    item_type *array;
    int max_size;
    int top;
} Stack;

Stack *stackConstructor(int max_size);

void stackDestructor(Stack *stack);

void stackPush(Stack *stack, item_type item);

void stackPop(Stack *stack);

item_type stackPeek(Stack *stack);

void menu();
