#include <stdio.h>

void bin(int number)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i >> 1)
        (number & i) ? printf("1") : printf("0");
    printf("\n");
}