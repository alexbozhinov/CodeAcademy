#include <stdio.h>
#include <stdlib.h>

void mySwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ascendingSelectionSort(void *A, int n)
{
    int *arr = A;
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        mySwap(&arr[minIdx], &arr[i]);
    }
}

void descendingSelectionSort(void *A, int n)
{
    int *arr = A;

    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[minIdx])
            {
                minIdx = j;
            }
        }
        mySwap(&arr[minIdx], &arr[i]);
    }
}

void (*ftype[2])(void *A, int n) = {ascendingSelectionSort, descendingSelectionSort};

void sort_arr(void *A, int n, int dir)
{
    if (dir == 1)
    {
        ftype[0](A, n);
    }
    else if (dir == -1)
    {
        ftype[1](A, n);
    }
    else
    {
        printf("Invalid input!\n");
    }
}

int main()
{
    int arr[10] = {5, 2, 4, -1, 15, 3, 8, -4, 0, 10};
    sort_arr(arr, 10, 1);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
Задача 4. Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
където А е обикновен масив от цели числа, n - размера на масива, dir -
посоката, в която да бъде сортиран масива, и ftype - указател към функция,
която приема масив, неговия размер и в каква посока да бъде сортиран
входния масив. ftype трябва да сортира масива във възходящ или низходящ
ред в зависимост от третия параметър на функцията. Принтирайте изходния
и резултатни масиви.
*/