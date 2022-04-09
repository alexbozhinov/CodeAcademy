#include "list.h"

/*
Задача 11. Напишете програма, която създава и принтира едностранно свързан
списък. Броя на листата в списъка да бъде въведен потребителя. Данните за
всеки лист - също.
*/

void print(struct List *list)
{
    if (list->head == NULL || list->size == 0)
    {
        printf("The list is empty!\n");
        return;
    }

    struct Node *curr = list->head;

    printf("List elements: [ ");

    while (curr != NULL)
    {
        if (curr->next != NULL)
        {
            printf("%d, ", curr->data);
        }
        else
        {
            printf("%d ]\n", curr->data);
        }
        curr = curr->next;
    }
}

void input(struct List *list, int size)
{
    if (size == 0)
    {
        printf("The size of list is 0!\n");
        return;
    }

    list->size = size;
    list->head = (struct Node *)malloc(sizeof(struct Node));

    scanf("%d", &list->head->data);
    struct Node *curr = list->head;

    for (int i = 1; i < list->size; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        curr->next = newNode;
        curr = curr->next;
    }
    curr->next = NULL;
}

void clean(struct List *list)
{
    if (list->size == 0 || list->head == NULL)
    {
        return;
    }
    struct Node *curr = list->head;

    while (list->head != NULL)
    {
        curr = list->head;
        list->head = list->head->next;
        free(curr);
    }
}

void menu11()
{
    struct List list = {NULL, 0};
    int size = 0;
    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    print(&list);

    clean(&list);
    //print(&list);
}

/*
Задача 12. Напишете програма, която създава и принтира едностранно свързан
списък в обратен ред. Броя на листата в списъка да бъде въведен потребителя.
Данните за всеки лист - също.
*/

void printReverse(struct Node *head)
{
    if (head != NULL)
    {
        printReverse(head->next);
        printf("%d ", head->data);
    }
}

void menu12()
{
    struct List list = {NULL, 0};
    int size = 0;

    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    printReverse(list.head);

    clean(&list);
}

/*
Задача 13. Напишете програма, която въвежда нов лист в началото на
едностранно свързан списък. Принтирайте резултатния списък
*/

void pushFront(struct List *list, int newElement)
{
    struct Node *newHead = (struct Node *)malloc(sizeof(struct Node *));
    newHead->data = newElement;
    newHead->next = list->head;
    list->head = newHead;
    list->size++;
}

void menu13()
{
    struct List list = {NULL};
    int size = 0;
    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    print(&list);

    int newElement = 0;
    printf("Input new element: ");
    scanf("%d", &newElement);

    pushFront(&list, newElement);
    print(&list);

    clean(&list);
}

/*
Задача 14. Напишете програма, която въвежда нов лист в края на едностранно
свързан списък. Принтирайте резултатния списък.
*/

void pushBack(struct List *list, int newElement)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node *));
    newNode->data = newElement;
    newNode->next = NULL;

    struct Node *curr = list->head;

    for (int i = 0; i < list->size - 1; i++)
    {
        curr = curr->next;
    }
    curr->next = newNode;
    list->size++;
}

void menu14()
{
    struct List list = {NULL};
    int size = 0;
    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    print(&list);

    int newElement = 0;
    printf("Input new element: ");
    scanf("%d", &newElement);

    pushBack(&list, newElement);
    //print(&list);

    clean(&list);
}

/*
Задача 15. Напишете програма, която въвежда нов лист в средата на
едностранно свързан списък. Принтирайте резултатния списък.
*/

void pushAt(struct List *list, int newElement, int position)
{
    if (list->head == NULL)
    {
        printf("Invalid push at index! The list is empty!\n");
        return;
    }

    if (position == 0)
    {
        pushFront(list, newElement);
        return;
    }

    struct Node *curr = list->head;
    struct Node *prev = NULL;

    for (int i = 0; i < position; i++)
    {
        if (curr != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        else
        {
            printf("Invalid push at index! You are out of bounds!\n");
            return;
        }
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node *));
    newNode->data = newElement;

    prev->next = newNode;
    newNode->next = curr;
    list->size++;
}

void menu15()
{
    struct List list = {NULL};
    int size = 0;
    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    print(&list);

    int newElement = 0;
    printf("Input new element: ");
    scanf("%d", &newElement);

    int position = 0;
    printf("Input new element's position: ");
    scanf("%d", &position);

    pushAt(&list, newElement, position);
    print(&list);

    clean(&list);
}

/*
Задача 16. Напишете програма, която изтрива първия лист на едностранно
свързан списък. Принтирайте резултатния списък.
*/

void removeFront(struct List *list)
{
    struct Node *toRemove = list->head;

    if (list->head != NULL)
    {
        list->head = list->head->next;
        free(toRemove);
        list->size--;
    }
}

void menu16()
{
    struct List list = {NULL};
    int size = 0;
    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    print(&list);

    removeFront(&list);
    print(&list);

    clean(&list);
}

/*
Задача 17. Напишете програма, която изтрива средния лист на едностранно
свързан списък. Принтирайте резултатния списък.
*/

void removeAt(struct List *list, int position)
{
    if (list->size == 0)
    {
        printf("The list is empty!\n");
        return;
    }
    if (list->size == 1 || position == 0)
    {
        removeFront(list);
        return;
    }

    struct Node *curr = list->head;
    struct Node *prev = NULL;

    for (int i = 0; i < position; i++)
    {
        if (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        else
        {
            printf("Invalid position!\n");
            return;
        }
    }

    prev->next = curr->next;

    free(curr);
    list->size--;
}

void menu17()
{
    struct List list = {NULL};
    int size = 0;
    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    print(&list);

    int position = 0;
    printf("Input position to remove: ");
    scanf("%d", &position);

    removeAt(&list, position);
    print(&list);

    clean(&list);
}

/*
Задача 18. Напишете програма, която търси данните на определен елемент в
едностранно свързан списък. Принтирайте къде номера на листа, където са
намерени.
*/

int search(struct List *list, int searched)
{
    struct Node *curr = list->head;
    int position = 0;

    while (curr != NULL)
    {
        if (curr->data == searched)
        {
            return position;
        }
        position++;
        curr = curr->next;
    }

    return -1;
}

void menu18()
{
    struct List list = {NULL};
    int size = 0;
    printf("Input list size: ");
    scanf("%d", &size);

    input(&list, size);
    print(&list);

    int toSearch = 0;
    printf("Input number to search: ");
    scanf("%d", &toSearch);

    int position = search(&list, toSearch);

    if (position >= 0)
    {
        printf("Found at: %d position!\n", position);
    }
    else
    {
        printf("Element does not exist!\n");
    }

    clean(&list);
}
