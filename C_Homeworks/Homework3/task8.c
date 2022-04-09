#include <stdio.h>
#include "myFunctions.h"

int clearBitsBetwen3And7(int number)
{
    int mask = 1;
    mask = mask << 4; //16 //the mask at index 4

    for (int i = 0; i < 3; i++) //3 iterations because there are only 3 positions between 3 and 7
    {
        number = number & (~mask);
        mask = mask << 1;
    }

    return number;
}

int main()
{
    int number = 255;
    bin(number);

    int newNumber = clearBitsBetwen3And7(number);
    bin(newNumber);

    return 0;
}

/*
9) Направете на нула битовете в числа, намиращи се на
позиции между 3 и 7.
*/