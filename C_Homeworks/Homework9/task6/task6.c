#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

int comp(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;

    return *x - *y;
}

void inputMatrix(int row, int col, int matrix[][col], int from, int to)
{
    time_t t;
    srand((unsigned)time(&t));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = (rand() % (to - from + 1)) + from;
        }
    }
    for (int i = 0; i < row; i++)
    {
        qsort(matrix[i], col, sizeof(int), comp);
    }
}

void printMatrix(int row, int col, int matrix[][col])
{
    printf("\nMatrix:\n[ \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 0)
            {
                printf("[ ");
            }
            printf("%d\t", matrix[i][j]);
            if (j == col - 1)
            {
                printf("]\n");
            }
        }
    }
    printf("]\n");
}

void findNumber(int row, int col, int matrix[][col], int toFind)
{
    int coordinates[20][2];
    int k = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == toFind)
            {
                coordinates[k][0] = i;
                coordinates[k][1] = j;
                k++;
            }
        }
    }
    if (k == 0)
    {
        printf("The number does not exist!\n");
        return;
    }
    else
    {
        printf("Number found at:\n");
        for (int i = 0; i < k; i++)
        {
            printf("%d is on position: (%d, %d) of the matrix\n", toFind, coordinates[i][0], coordinates[i][1]);
        }
    }
}

void menu()
{
    int matrix[10][10];

    int col = 0, row = 0;

    printf("Input number of rows: ");
    scanf("%d", &row);
    printf("Input number of columns: ");
    scanf("%d", &col);
    printf("Input number interval for rand generation:\n");

    int from = 0, to = 0;

    printf("From: ");
    scanf("%d", &from);
    printf("To: ");
    scanf("%d", &to);

    inputMatrix(row, col, matrix, from, to);
    printMatrix(row, col, matrix);

    int toFind = 0;
    printf("Search number: ");
    scanf("%d", &toFind);

    findNumber(row, col, matrix, toFind);
}

/*
int comp(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;

    return *y - *x;
}
#include <stdlib.h>
    qsort(arr1, size1, sizeof(int), comp);
*/