#include <stdio.h>
#include<math.h>
#include "task7.h"

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

int uniqueRows(int row, int col, int matrix[][col])
{
    int counter = row;
    int currCount = 0;
    int boolCheck = 0;
    int notUnique[10] = {0};

    for (int i = 0; i < row; i++) //check rows i-th row
    {
        for (int j = 0; j < row; j++) //check i-th with each j-th row except i = j
        {
            for (int k = 0; k < col; k++) //cols of i-th and j-th rows
            {
                if (notUnique[j] == 0 && i != j && matrix[i][k] == matrix[j][k]) //when the row is not caught as not unique, and different rows,and have equal elements
                {
                    currCount++; //number of equal elements between two rows
                }
            }
            if (currCount == col) //if equal elements are with the count of columns
            {
                counter--;        //decrease the number of unique rows
                notUnique[j] = 1; //mark the row as not unique
            }
            currCount = 0; //to count equal elements on next iteration
        }
    }
    return counter;
}

int unique(int row, int col, int matrix[row][col])
{
    const int hashTableSize = 100;
    int unique[100] = {0}; //

    for (int i = 0; (i < row); i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += (matrix[i][j] * pow(2, col - j - 1));
        }
        unique[sum]++;
    }

    int numebrOfNotUniqueRows = 0;

    for (int i = 0; i < hashTableSize; i++)
    {
        if (unique[i] > 1)
        {
            numebrOfNotUniqueRows += unique[i];
        }
    }

    return row - numebrOfNotUniqueRows;
}

void menu()
{
    /*
    int matrix[10][10];

    int col = 0, row = 0;

    printf("Input number of rows: ");
    scanf("%d", &row);
    printf("Input number of columns: ");
    scanf("%d", &col);

    inputMatrix(row, col, matrix);
    printMatrix(row, col, matrix);

    int unique = uniqueRows(row, col, matrix);
    printf("Count of unique rows: %d", unique);

    */
    int matrix[5][5] = {{1, 0, 1, 1, 0},
                        {0, 1, 1, 1, 0},
                        {1, 0, 1, 1, 0},
                        {0, 0, 1, 1, 0},
                        {1, 1, 1, 0, 1}};

    printf("Count of unique rows: %d", unique(5, 5, matrix));

}
