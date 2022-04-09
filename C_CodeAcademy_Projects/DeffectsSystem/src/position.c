#include <stdio.h>
#include <stdlib.h>
#include "../lib/position.h"

void printPosition(Position pos)
{
    switch (pos)
    {
    case 1:
        printf("programmer");
        break;
    case 2:
        printf("tester");
        break;
    default:
        printf("position undefined");
        break;
    }
}

char *returnPosition(Position pos)
{
    switch (pos)
    {
    case 1:
        return "programmer";
        break;
    case 2:
        return "tester";
        break;
    default:
        return "position undefined";
        break;
    }
}