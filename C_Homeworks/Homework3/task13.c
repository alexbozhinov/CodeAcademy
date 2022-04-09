#include <stdio.h>
#include "myFunctions.h"

int reverseOdd(int number)
{
    int mask = 2; //when mask is 2, it's set bit is at first odd position

    for (int i = 0; i < 31; i++)
    {
        if (number & mask) //if the bit is set
        {
            number = number & ~(mask); //clear the bit
            mask = mask << 2;          //shift mask left to the next odd index
        }
        else
        {
            number = number | mask; //set the bit
            mask = mask << 2;       //shift the mask to the next odd position
        }
    }

    return number;
}

int main()
{
    int number = 255;
    bin(number);

    int newNumber = reverseOdd(number);
    bin(newNumber);

    return 0;
}

/*
14*) Обърнете битовете на число, които се намират на
нечетна позиция.
*/