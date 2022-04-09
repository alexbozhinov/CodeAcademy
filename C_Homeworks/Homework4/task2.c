#include <stdio.h>
#include "myFunctions.h"

long long int htoi(char hexDigits[], int length)
{
    long long int intValue = 0;
    int integers[20] = {0};
    int degrees[20] = {0};

    int k = 0;

    for (int i = 0; i < length; i++)
    {
        if (hexDigits[i] >= '0' && hexDigits[i] <= '9') //if the symbol is a digit between 0 and 9
        {
            integers[k] = (hexDigits[i] - '0'); //at position k we transform it into digit
            k++;
        }
        else if (hexDigits[i] >= 'A' && hexDigits[i] <= 'F') //if the symbol is a hex digit between A and F
        {
            switch (hexDigits[i]) //different cases for each symbol between A and F
            {
            case 'A':
                integers[k] = 1;
                k++;
                integers[k] = 0;
                k++;
                break;
            case 'B':
                integers[i] = 1;
                i++;
                integers[i] = 1;
                i++;
                break;
            case 'C':
                integers[i] = 1;
                i++;
                integers[i] = 2;
                i++;
                break;
            case 'D':
                integers[k] = 1;
                k++;
                integers[k] = 3;
                k++;
                break;
            case 'E':
                integers[i] = 1;
                i++;
                integers[i] = 4;
                i++;
                break;
            case 'F':
                integers[i] = 1;
                i++;
                integers[i] = 5;
                i++;
                break;
            }
        }
        else if (hexDigits[i] >= 'a' && hexDigits[i] <= 'f') //if the symbol is a hex digit between a and f
        {
            switch (hexDigits[i]) //different cases for each symbol
            {
            case 'a':
                integers[k] = 1;
                k++;
                integers[k] = 0;
                k++;
                break;
            case 'b':
                integers[i] = 1;
                i++;
                integers[i] = 1;
                i++;
                break;
            case 'c':
                integers[i] = 1;
                i++;
                integers[i] = 2;
                i++;
                break;
            case 'd':
                integers[k] = 1;
                k++;
                integers[k] = 3;
                k++;
                break;
            case 'e':
                integers[i] = 1;
                i++;
                integers[i] = 4;
                i++;
                break;
            case 'f':
                integers[i] = 1;
                i++;
                integers[i] = 5;
                i++;
                break;
            }
        }
        else
        {
            return 0; //end the problem if the input is incorrect
        }
    }

    //printf("k = %d\n", k);
    int j = 0;
    tenDegrees(degrees, k); //generating array with the degrees of 10, until 10^k

    /*
    for(int i=0;i<7;i++){
        printf("Integer[%d] = %d\n", i, integers[i]);
    }*/

    for (int i = k - 1; i >= 0; i--)
    {
        intValue += (integers[j] * degrees[i]); //transforming the digits to full number
        //printf("integers[%d] * degrees[%d] = %d\n", integers[j], degrees[i], integers[j] * degrees[i]);
        j++;
    }

    return intValue;
}

int main()
{
    char hexDigits[20] = "12A5dD";
    int length = myStrlen(hexDigits);

    printf("Hexal digit string: %s\n", hexDigits);

    long long int intValue = htoi(hexDigits, length);
    printf("Transformed into number: %lld\n", intValue);
}

/*
Упражнение 7.14.* Напишете функция htoi(s), която преобразува низ от
шестнадесетични цифри в еквивалентна целочислена стойност.
Възможните цифри са между 0 и 9, от а до f и от А до F.
*/