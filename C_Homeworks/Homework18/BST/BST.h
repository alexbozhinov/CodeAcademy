#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *parent;
} Node;

Node *BSTNewNode(int data);

void BSTdestructor(Node *tree);

void BSTinsert(int x, Node *tree);

void BSTinorder(Node *tree);

void demoMenu();

void menuA();

void menuB();

void menuC();

void menuD();

Node *removeLastLeaves(Node *tree);

void removeTest();

void mergeTrees(Node *left, Node *right);

void mergeTest();

void returnData(Node *tree, Vector *vec);
