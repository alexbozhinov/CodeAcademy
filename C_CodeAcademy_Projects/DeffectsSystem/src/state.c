#include <stdio.h>
#include <stdlib.h>
#include "../lib/state.h"

void printState(State state)
{
    switch (state)
    {
    case 1:
        printf("new");
        break;
    case 2:
        printf("fixed");
        break;
    case 3:
        printf("closed");
        break;
    default:
        printf("undefined state");
        break;
    }
}

char *returnState(State state)
{
    switch (state)
    {
    case 1:
        return "new";
        break;
    case 2:
        return "fixed";
        break;
    case 3:
        return "closed";
        break;
    default:
        return "undefined state";
        break;
    }
}
