#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "myString.h"

typedef String item_type;

typedef struct Queue
{
    item_type *array;
    int capacity;
    int size;
    int top;
    int rear;
} Queue;

Queue *queueConstructor(int capacity);

void queueDestructor(Queue *queue);

void queuePush(Queue *queue, item_type item);

void queuePop(Queue *queue);

item_type queuePeek(Queue *queue);

void menu();
