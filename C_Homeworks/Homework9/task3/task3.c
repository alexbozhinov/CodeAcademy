#include <stdio.h>
#include "task3.h"

void inputMatrix(int row, int col, int matrix[][col])
{
    printf("Input matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int row, int col, int matrix[][col])
{
    printf("Matrix:\n[ \n");
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

int compareMatrix(int row, int col, int leftMatrix[][col], int rightMatrix[][col])
{
    int checkEquals = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (leftMatrix[i][j] == rightMatrix[i][j])
            {
                checkEquals++;
            }
        }
    }
    if (checkEquals == row * col)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void menu()
{
    int leftMatrix[10][10];
    int rightMatrix[10][10];

    int col = 0, row = 0;

    printf("Input number of rows: ");
    scanf("%d", &row);
    printf("Input number of columns: ");
    scanf("%d", &col);

    inputMatrix(row, col, leftMatrix);
    inputMatrix(row, col, rightMatrix);

    int comparator = compareMatrix(row, col, leftMatrix, rightMatrix);
    
    if (comparator > 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    printMatrix(row, col, leftMatrix);
    printMatrix(row, col, rightMatrix);
}