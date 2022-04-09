#include <stdio.h>
#include "task2.h"

void inputMatrix(int matrix[4][4])
{
    printf("Input matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[4][4])
{
    printf("Matrix:\n[ \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("[ ");
            }
            printf("%d\t", matrix[i][j]);
            if (j == 3)
            {
                printf("]\n");
            }
        }
    }
    printf("]\n");
}

void addMatrix(int leftMatrix[4][4], int rightMatrix[4][4], int resultMatrix[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            resultMatrix[i][j] += (leftMatrix[i][j] + rightMatrix[i][j]);
        }
    }
}

void menu()
{
    int leftMatrix[4][4];
    int rightMatrix[4][4];
    int resultMatrix[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            resultMatrix[i][j] = 0;
        }
    }

    inputMatrix(leftMatrix);
    inputMatrix(rightMatrix);

    addMatrix(leftMatrix, rightMatrix, resultMatrix);

    printMatrix(leftMatrix);
    printMatrix(rightMatrix);
    printMatrix(resultMatrix);
}