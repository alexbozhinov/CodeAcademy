#include <stdio.h>
#include "myFunctions.h"

void itob(int n, char s[], int b)
{
    int i = 0;

    while (n != 0)
    {
        int temp = 0; // temporary variable to store remainder

        temp = n % b; // getting the last digit of n. B is the base

        if (temp < 10) // check if temp is digit between 0 and 9

        {
            s[i] = temp + 48; //transform the digit to symbol in the string
            i++;
        }
        else
        {
            s[i] = temp + 55; //if the reminder is bigger than 9, transform it to letter in the string
            i++;
        }

        n = n / b; //remove the last digit of n
    }
    reverse(s);
}

int main()
{
    int n = 1524854;
    char s[50] = "";
    int b = 16;

    printf("The number n = %d, the Base = %d\n", n, b);

    itob(n, s, b);

    printf("The new string : %s\n", s);

    return 0;
}

/*
Упражнение 7.16.* Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].
*/