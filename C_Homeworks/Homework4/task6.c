#include <stdio.h>
#include <string.h>

void squeeze(char s[], int c) //function that removes the symbol c from string s[]
{
    char toRemove = (char)(c);
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] == toRemove) //if we find the symbol to be removed
        {
            for (int j = i; j < length; j++) //start from the index of the symbol to be removed
            {
                s[j] = s[j + 1]; //shift to left each symbol to fulfill the symbol we removed
            }

            length--; //as we remove the symbol the length becomes shorter by 1
            i--;      //also shift back the iterator
        }
    }
}

int main()
{
    int c = 100;
    char s[50] = "abcddef";

    printf("Remove the symbol %c from %s\n", c, s);
    squeeze(s, c);

    printf("The transformed string: %s\n", s);

    return 0;
}

/*
Упражнение 7.17.* напишете функция void squeeze(char s[], int c),
която премахва символа с от низа s[]
*/