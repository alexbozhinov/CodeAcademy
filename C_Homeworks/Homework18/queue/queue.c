#include "queue.h"

Queue *queueConstructor(int capacity)
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->size = 0;
    queue->top = 0;
    queue->rear = capacity - 1;
    queue->array = (item_type *)malloc(queue->capacity * sizeof(item_type));
    return queue;
}

void queueDestructor(Queue *queue)
{
    for (int i = 0; i < queue->size; i++)
    {
        stringDestructor(&queue->array[i]);
    }

    free(queue->array);

    free(queue);
}

void queuePush(Queue *queue, item_type item)
{
    if (queue->size == queue->capacity)
    {
        return;
    }

    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size++;
}

void queuePop(Queue *queue)
{
    if (queue->size == 0)
    {
        return;
    }
    //String item;
    //strcpy(item.text, queue->array[queue->top].text);
    queue->top = (queue->top + 1) % queue->capacity;
    queue->size--;
}

item_type queuePeek(Queue *queue)
{
    if (queue->size == 0)
    {
        exit(1);
    }
    return queue->array[queue->top];
}

void menu()
{
    Queue *queue = queueConstructor(100);
    item_type new_item;

    do
    {
        char item[100];
        stringInput(item);
        fflush(stdin);
        new_item = stringConstructor(item);

        if (strcmp(new_item.text, "0") != 0)
        {
            queuePush(queue, new_item);
        }

    } while (strcmp(new_item.text, "0") != 0);

    while (queue->size != 0)
    {
        printf("The top element is: %s\n", queuePeek(queue).text);
        queuePop(queue);
    }
}