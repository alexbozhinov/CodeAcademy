#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int l, int r)
{

    int pivot = arr[r]; 

    int i = l;

    for (int j = l; j < r; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[r]);

    return i;
}

void quick_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivot = partition(arr, l, r);

        quick_sort(arr, l, pivot - 1);
        quick_sort(arr, pivot + 1, r);
    }
}

int main()
{
    int arr[10] = {5, 6, 7, 8, 1, 3, 4, 2, 9, 10};
    quick_sort(arr, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.
*/