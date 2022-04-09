#include <stdio.h>

int isLetter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) //check if the symbol is a letter
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char c1 = 'a';
    char c2 = '3';

    printf("%d\n", isLetter(c1));
    printf("%d\n", isLetter(c2));

    return 0;
}

/*
Напишете функция int isLetter(char c), която проверява
дали подадения параметър е буква или не е буква от ASCII таблицата. 
*/