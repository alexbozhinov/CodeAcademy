#include <stdio.h>
#include "myFunctions.h"

int setBits(int number)
{
    int mask = 1;

    for (int i = 0; i < 31; i++)
    {
        number = number | mask; //set the bit at the mask's position
        mask = mask << 3;       //shift the mask 3 steps on left to the next index that is devided by 3
    }

    return number;
}

int main()
{
    int number = 2048;
    bin(number);

    int newNumber = setBits(number);
    bin(newNumber);

    return 0;
}

/*
12) Вдигнете всички битове на 32 битово число, на
позиции делящи се на 3.
*/