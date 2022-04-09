#include <stdio.h>
#include "myFunctions.h"

int diffBits(int number1, int number2)
{
    int counter = 0;
    int xorNumber = number1 ^ number2; //the new xorNumber will have set bits only at posi tions where
    //number1 and number2 were different. So we only have to count the set bits of the xorNumber

    for (int i = 0; i < 31; i++)
    {
        if (xorNumber & 1) //if the bit is 1
        {
            counter++;
        }
        xorNumber = xorNumber >> 1; //shift the number to right by 1 every time
    }

    return counter;
}

int main()
{
    int number1 = 128;
    int number2 = 1;

    bin(number1);
    bin(number2);

    int differentBits = diffBits(number1, number2);
    printf("Number of different bits: %d", differentBits);

    return 0;
}

/*
13*) Намерете броя на позициите на битовете, в които две
числа се различават.
*/