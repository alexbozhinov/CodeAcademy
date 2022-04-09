#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        char temp = s[i]; //change sy,bols using two iterators from begin to end and from end to begin and additional temporary variable
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    char str[1000] = "";
    int i = 0;
    char c;

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        str[i] = c;
        i++;
    }
    reverse(str);
    printf("Reversed: %s\n", str);

    return 0;
}

/*
Упражнение 11*. Напишете функция void reverse(char s[]), която обръща
низа char s[].
*/