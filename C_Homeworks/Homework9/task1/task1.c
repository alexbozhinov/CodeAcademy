#include <stdio.h>
#include "task1.h"

void inputMatrix(int matrix[5][5])
{
    printf("Input matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[5][5])
{
    printf("Matrix:\n[ \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0)
            {
                printf("[ ");
            }
            printf("%d\t", matrix[i][j]);
            if (j == 4)
            {
                printf("]\n");
            }
        }
    }
    printf("]\n");
}

void menu()
{
    int matrix[5][5];

    inputMatrix(matrix);
    printMatrix(matrix);
}