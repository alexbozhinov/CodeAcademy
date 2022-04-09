#include <stdio.h>
#include "myFunctions.h"

int seniorIndex(int number)
{
    int index = 0;
    int mask = 1;

    for (int i = 0; i < 31; i++)
    {
        if (number & mask) //check at each position if the bit is set
        {
            index = i;
        }
        mask = mask << 1; //shift the mask on left on every iteration
    }

    return index;
}

int main()
{
    int number = 57;
    bin(number);

    int index = seniorIndex(number);
    printf("The index of the last senior bit is: %d", index);

    return 0;
}

/*
8*) Намерете позицията на най-старшия бит, който е със
стойност 1 в дадено число.
*/