#include <stdio.h>
#include "task4.h"

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

void sumMatrix(int row, int col, int matrix[][col])
{
    int rowSum[10] = {0};
    int colSum[10] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    printf("Sum of rows: \n");
    for (int i = 0; i < row; i++)
    {
        printf("Row[%d] = %d\t", i, rowSum[i]);
    }
    printf("\nSum of columns: \n");
    for (int i = 0; i < col; i++)
    {
        printf("Column[%d] = %d\t", i, colSum[i]);
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

    inputMatrix(row, col, matrix);

    sumMatrix(row, col, matrix);

    printMatrix(row, col, matrix);
}