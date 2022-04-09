#include <stdio.h>

int myStrlen(char str[]) //function that returns the length of a char array
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char str[] = "Hello";

    printf("Word before changes: %s\n", str);

    for (int i = 0; i < myStrlen(str); i++)
    {
        if (str[i] == 'l')
        {
            str[i] = 'x'; //symbol l on position i becomes x
        }
    }

    printf("Word after change: %s\n", str);

    return 0;
}

/*
Ако имаме символен низ char str[] = “Hеllo”, заменете
буквите l с х на същия символен низ и отпечатайте резултата на
конзолата.
*/