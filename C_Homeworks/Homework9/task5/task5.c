#include <stdio.h>
#include "task5.h"

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

int ifIdentity(int row, int col, int matrix[][col])
{
    if (col != row)
    {
        return -1;
    }

    int identity = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == j) && (matrix[i][j] == 1))
            {
                identity++;
            }
            if ((i != j) && (matrix[i][j] == 0))
            {
                identity++;
            }
        }
    }
    if (identity == (col * row))
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
    int matrix[10][10];

    int col = 0, row = 0;

    printf("Input number of rows: ");
    scanf("%d", &row);
    printf("Input number of columns: ");
    scanf("%d", &col);

    inputMatrix(row, col, matrix);

    int checker = ifIdentity(row, col, matrix);
    if (checker == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    printMatrix(row, col, matrix);
}

