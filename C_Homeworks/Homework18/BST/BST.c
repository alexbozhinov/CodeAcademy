#include "vector.h"
#include "BST.h"

Node *BSTNewNode(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    temp->parent = NULL;

    return temp;
}

void BSTdestructor(Node *tree)
{
    if (tree != NULL)
    {
        BSTdestructor(tree->left);
        BSTdestructor(tree->right);
        // BSTdestructor(tree->parent);
        free(tree);
    }
}

void BSTinsert(int x, Node *tree)
{
    if (tree == NULL)
    {
        tree = BSTNewNode(x);
    }
    if (tree->data > x)
    {
        if (tree->left == NULL)
        {
            tree->left = BSTNewNode(x);
            tree->left->parent = tree;
        }
        BSTinsert(x, tree->left);
        return;
    }
    else if (tree->data < x)
    {
        if (tree->right == NULL)
        {
            tree->right = BSTNewNode(x);
            tree->right->parent = tree;
        }
        BSTinsert(x, tree->right);
        return;
    }
}

void BSTinorder(Node *tree)
{
    if (tree != NULL)
    {
        BSTinorder(tree->left);
        printf("%d \n", tree->data);
        BSTinorder(tree->right);
    }
}

void demoMenu()
{
    printf("Demo Menu\n\n");
    Node *tree = BSTNewNode(10);

    BSTinsert(5, tree);
    BSTinsert(12, tree);
    BSTinsert(7, tree);
    BSTinsert(11, tree);
    BSTinsert(2, tree);
    BSTinsert(21, tree);

    BSTinorder(tree);

    BSTdestructor(tree);
}

void menuA()
{
    printf("Menu A\n\n");
    Node *tree = BSTNewNode(7);

    BSTinsert(14, tree);
    BSTinsert(28, tree);
    BSTinsert(35, tree);
    BSTinsert(65, tree);
    BSTinsert(12, tree);
    BSTinsert(18, tree);
    BSTinsert(42, tree);
    BSTinsert(81, tree);
    BSTinsert(64, tree);
    BSTinsert(61, tree);
    BSTinsert(4, tree);
    BSTinsert(13, tree);

    BSTinorder(tree);

    BSTdestructor(tree);
}

void menuB()
{
    printf("Menu B\n\n");
    Node *tree = BSTNewNode(12);

    BSTinsert(7, tree);
    BSTinsert(14, tree);
    BSTinsert(81, tree);
    BSTinsert(42, tree);
    BSTinsert(18, tree);
    BSTinsert(61, tree);
    BSTinsert(4, tree);
    BSTinsert(64, tree);
    BSTinsert(35, tree);
    BSTinsert(13, tree);
    BSTinsert(28, tree);
    BSTinsert(65, tree);

    BSTinorder(tree);

    BSTdestructor(tree);
}

void menuC()
{
    printf("Menu C\n\n");
    Node *tree = BSTNewNode(4);

    BSTinsert(7, tree);
    BSTinsert(12, tree);
    BSTinsert(13, tree);
    BSTinsert(14, tree);
    BSTinsert(18, tree);
    BSTinsert(28, tree);
    BSTinsert(35, tree);
    BSTinsert(42, tree);
    BSTinsert(61, tree);
    BSTinsert(64, tree);
    BSTinsert(65, tree);
    BSTinsert(81, tree);

    BSTinorder(tree);

    BSTdestructor(tree);
}

void menuD()
{
    printf("Menu D\n\n");
    Node *tree = BSTNewNode(81);

    BSTinsert(65, tree);
    BSTinsert(64, tree);
    BSTinsert(61, tree);
    BSTinsert(42, tree);
    BSTinsert(35, tree);
    BSTinsert(28, tree);
    BSTinsert(18, tree);
    BSTinsert(14, tree);
    BSTinsert(13, tree);
    BSTinsert(12, tree);
    BSTinsert(7, tree);
    BSTinsert(4, tree);

    BSTinorder(tree);

    BSTdestructor(tree);
}

Node *removeLastLeaves(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    root->left = removeLastLeaves(root->left);
    root->right = removeLastLeaves(root->right);

    return root;
}

void removeTest()
{
    printf("Remove Test\n\n");
    Node *tree = BSTNewNode(6);

    BSTinsert(5, tree);
    BSTinsert(3, tree);
    BSTinsert(1, tree);
    BSTinsert(10, tree);
    BSTinsert(8, tree);
    BSTinsert(7, tree);
    BSTinsert(13, tree);
    BSTinsert(14, tree);
    BSTinsert(11, tree);
    BSTinsert(12, tree);

    removeLastLeaves(tree);

    BSTinorder(tree);

    BSTdestructor(tree);
}

void mergeTrees(Node *leftTree, Node *rightTree)
{
    Vector vec = vectorConstructor(10);

    returnData(rightTree, &vec);

    for (int i = 0; i < vec.size; i++)
    {
        BSTinsert(vec.elements[i], leftTree);
    }
    vectorDestructor(&vec);
    BSTdestructor(rightTree);
}

void mergeTest()
{
    printf("Merge Test\n\n");
    Node *treeL = BSTNewNode(10);

    BSTinsert(5, treeL);
    BSTinsert(12, treeL);
    BSTinsert(7, treeL);
    BSTinsert(11, treeL);
    BSTinsert(2, treeL);
    BSTinsert(21, treeL);

    printf("Left tree:\n");
    BSTinorder(treeL);

    Node *treeR = BSTNewNode(13);

    BSTinsert(3, treeR);
    BSTinsert(15, treeR);
    BSTinsert(6, treeR);
    BSTinsert(8, treeR);

    printf("Right tree:\n");
    BSTinorder(treeR);

    mergeTrees(treeL, treeR);

    printf("Merged tree:\n");
    BSTinorder(treeL);

    BSTdestructor(treeL);
    // BSTdestructor(treeR);
}

void returnData(Node *tree, Vector *vec)
{

    if (tree != NULL)
    {
        returnData(tree->left, vec);
        pushBack(vec, tree->data);
        returnData(tree->right, vec);
    }
}