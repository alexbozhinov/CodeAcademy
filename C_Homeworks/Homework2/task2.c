#include <stdio.h>

int myStrlen(char str[]) //function that returns the length of a char array
{
    int length = 0;

    while (str[length] != '\0') //if the symbol is different from '\0' we move to next symbol and length increases by 1
    {
        length++;
    }

    return length;
}

int main()
{
    char str[] = "Hello";
    char rts[6];
    int j = 0; //use j to iterate through rts[]

    for (int i = myStrlen(str) - 1; i >= 0; i--)
    {
        rts[j] = str[i];
        j++;
    }

    rts[j] = '\0'; //the last symbol should be '\0'

    printf("Old word: %s\n", str);
    printf("New word: %s\n", rts);

    return 0;
}

/*
Ако имаме символен низ от символа char str[] =
“Hello”; копирайте всеки един от неговите символи в низ, който
да изглежда огледален на него. Ето така char rts[] = “ollеH”; и
принтирайте резултата.

*/
