#include "task5.h"

void menu()
{
    struct Pointer ptr1 = {1, NULL};
    struct Pointer ptr2 = {2, &ptr1};

    printf("ptr1: %d\n", ptr1.data);
    printf("ptr2: %d", ptr2.pointer->data);
}