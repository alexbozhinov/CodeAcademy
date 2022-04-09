#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct List
{
    struct Node *head;
    int size;
};

void clean(struct List *list);

void print(struct List *list);

void input(struct List *list, int size);

void menu11();

void printReverse(struct Node *head);

void menu12();

void pushFront(struct List *list, int newElement);

void menu13();

void pushBack(struct List *list, int newElement);

void menu14();

void pushAt(struct List *list, int newElement, int position);

void menu15();

void removeFront(struct List *list);

void menu16();

void removeAt(struct List *list, int position);

void menu17();

int search(struct List *list, int searched);

void menu18();