#include <stdio.h>
#include "myFunctions.h"

int changeAt(int number, int index)
{
    if (number & (1 << index)) //if the bit at index's position is set
    {
        return number & ~(1 << index); //clear the bit
    }
    else
    {
        return number | (1 << index); //set the bit
    }
}

int main()
{
    int number = 255;
    int index = 3;

    bin(number);

    int newNumber = changeAt(number, index);
    bin(newNumber);

    return 0;
}

/*
6) Променете стойността на бита на дадено число на
определена позиция.
*/