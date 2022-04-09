#include <stdio.h>

int main()
{
    char str[1000] = "";
    char c = '0';
    char *head = &str[0];
    int len = 0;

    printf("Input a string: ");

    for (int i = 0; i < 1000; i++)
    {
        c = getchar();

        if (c != '\n')
        {
            *head = c;
            head++;
        }
        else
        {
            break;
        }
    }

    *head = '\0';
    head = str;

    int vowels = 0;
    int consonants = 0;

    while (*head != '\0')
    {
        if (*head == 'A' || *head == 'a' || *head == 'E' || *head == 'e' || *head == 'O' || *head == 'o' || *head == 'U' || *head == 'u' || *head == 'Y' || *head == 'y')
        {
            vowels++;
        }
        else if (*head >= 'A' && *head <= 'z')
        {
            consonants++;
        }
        head++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

/*
Напишете програма, която да намери броя на гласни и съгласни букви в
текст, въведен от клавиатурата, като използвате указатели.
*/