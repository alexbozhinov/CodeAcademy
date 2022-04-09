#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    node *nodes = (node *)malloc(10 * sizeof(node));

    for (int i = 0; i < 10; i++)
    {
        nodes[i].data = i;
        nodes[i].next = &nodes[i + 1];
    }
    nodes[9].next = NULL;

    node *curr = &nodes[0];

    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }

    free(nodes);

    return 0;
}

/*
Задача 8. Напишете собствен тип за структура node, съдържаща един член
от тип int и един указател към тип самата структура. Заделете динамично
памет за масив от 10 елемента от тази структура с malloc. За всеки елемент
от масива попълнете цялото число с неговия пореден номер. Принтирайте
резултатите.
*/