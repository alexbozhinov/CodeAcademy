#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main()
{
    struct vector buffer = constructor(2);

    char c = ' ';

    while ((c = getchar()) != '.')
    {
        if (c != '\n')
        {
            pushBack(&buffer, c);
        }
    }

    print(&buffer);

    destructor(&buffer);

    return 0;
}