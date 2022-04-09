#include <stdio.h>
#include "myFunctions.h"

int clearAfterN(int number, int n)
{
    int mask = 1;
    mask = mask << n; //shift left the mask till the given position

    for (int i = n; i < 31; i++) //start from the given position
    {
        number = number & (~mask); //clear bit at mask's position
        mask = mask << 1;          //shift the mask every time on left by 1
    }

    return number;
}

int main()
{
    int number = 255;
    int n = 4;

    bin(number);

    int newNumber = clearAfterN(number, n);
    bin(newNumber);

    return 0;
}

/*
10) Премахнете всички битове на число след n-тия бит
включително.
*/