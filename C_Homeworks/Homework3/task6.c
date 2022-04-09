#include <stdio.h>
#include "myFunctions.h"

int clearBits(int number)
{
    int mask = 1;

    number = number & ~(1); //make 0 the bit at index 0

    for (int i = 1; i < 31; i++)
    {
        number = number & ~(mask << 2); //clear each bit at even index
        mask = mask << 2;               //shift the mask to left by 2 bits toreach the next even position of the number
    }

    return number;
}

int main()
{
    int number = 255;
    bin(number);

    int newNumber = clearBits(number);
    bin(newNumber);

    return 0;
}

/*
7) Занулете всички битове на числата, намиращи се на четна
позиция.
*/