#include <stdio.h>
#include "functions.h"

int func1(int a, int b)
{
    return (a + b) * 4;
}

int func2(int a, int b, int c)
{
    return a * 2 + b * c;
}

int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void decToBinary(int dec)
{
    for (int i = 31; i >= 0; i--)
    {
        int j = dec >> i;
        
        if (j & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}