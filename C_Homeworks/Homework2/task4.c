#include <stdio.h>

int myStrlen(char str[]) //function that returns the length of str[]
{
    int length = 0;

    while (str[length] != 0)
    {
        length++;
    }

    return length;
}

int main()
{
    char str[] = "HELLO";

    printf("The word before changes: %s\n", str);

    for (int i = 0; i < myStrlen(str); i++)
    {
        str[i] = str[i] + ('a' - 'A'); //use ASCI codes of 'a' and 'A' to change the letters
    }

    printf("The word after changes: %s\n", str);

    return 0;
}

/*
Ако имаме символен низ char str[] = “HELLO”, заменете
всичките символи с главна буква със съответните символи с
малка буква.
*/