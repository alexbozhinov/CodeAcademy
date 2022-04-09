#include <stdio.h>
#include <string.h>

void lower(char s[])
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') //if the letter is big
        {
            s[i] = s[i] + ('a' - 'A'); //transform the letter to lower one
        }
    }
}

int main()
{
    char s[50] = "aAbBcCdD";
    printf("The string before tranformation: %s\n", s);

    lower(s);

    printf("The string after transformation: %s\n", s);
    
    return 0;
}

/*
Упражнение 7.20.* напишете функцията void lower(char s[]), която
преобразува главните букви в малки.
*/