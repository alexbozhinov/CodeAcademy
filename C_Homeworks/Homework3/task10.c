#include <stdio.h>
#include <math.h>
#include "myFunctions.h"

void degreesOfTwo(int number)
{
    int mask = 1;

    printf("%d = ", number);

    for (int i = 0; i < 31; i++)
    {
        if (number & mask) //if the number is set at i-th position
        {
            printf(" + %.f", pow( 2.0, (double)(i) ) ); //print the number that is 2^i
        }
        number = number >> 1; //every time shift the number to right
    }
}

int main()
{
    int number = 255; //(number = 130)
    degreesOfTwo(number);

    return 0;
}

/*
11*) Разбийте число като сума от степени на двойката.
*/