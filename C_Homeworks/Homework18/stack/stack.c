#include "stack.h"

Stack *stackConstructor(int max_size)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->max_size = max_size;
    stack->top = -1;
    stack->array = (item_type *)malloc(stack->max_size * sizeof(item_type));
    return stack;
}

void stackDestructor(Stack *stack)
{
    free(stack->array);

    free(stack);
}

void stackPush(Stack *stack, item_type item)
{
    if (stack->top == stack->max_size)
    {
        return;
    }

    stack->array[++stack->top] = item;
}

void stackPop(Stack *stack)
{
    if (stack->top == -1)
    {
        return;
    }
    stack->array[--stack->top];
}

item_type stackPeek(Stack *stack)
{
    if (stack->top == -1)
    {
        return 0;
    }
    return stack->array[stack->top];
}

void menu()
{
    Stack *stack = stackConstructor(100);
    item_type new_item = 0;

    do
    {
        printf("Input new item: ");
        scanf("%d", &new_item);

        if (new_item != 0)
        {
            stackPush(stack, new_item);
        }

    } while (new_item != 0);

    while (stack->top != -1)
    {
        printf("The top element is: %d\n", stackPeek(stack));
        stackPop(stack);
    }
}