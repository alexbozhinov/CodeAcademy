#include <stdio.h>
#include <string.h>

int any(char s1[], char s2[])
{
    int idx = 0;
    char *r = strpbrk(s1, s2); //find the first equal symbol

    if (r != 0) //check if it exists //ASCII -> NUL
    {
        while (s1[idx] != *r) //untill we reach the first equal symbol, increase the idx with 1
        {
            idx++;
        }
    }
    else
    {
        idx = -1; //if the two strings have no egual symbols we return -1
    }

    return idx;
}

int main()
{
    char s1[50] = "abcdef";
    char s2[50] = "fzxwrt";

    printf("String 1: %s,   String 2: %s\n", s1, s2);
    int idx = any(s1, s2);

    if (idx < 0)
    {
        printf("No matching symbols!\n");
    }
    else
    {
        printf("The index of first equal symbol is: %d\n", idx);
    }
    return 0;
}

/*
Упражнение 7.19.* напишете функцията int any(char s1[], char s2[]),
която връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция).
*/