#include <stdio.h>
#include <string.h>
#include "myFunctions.h"

void squeeze(char s1[], char s2[])
{
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    char toRemove[50] = "";
    int k = 0;

    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (s1[i] == s2[j]) //if we see equal; symbols in both strings
            {
                toRemove[k] = s1[i]; //on k-th position we remember the symbol we have to remove
                k++;
            }
        }
    }
   /* for(int i =0;i<5;i++){
        printf("to remove %c\n", toRemove[i]);
    }*/

    k = 0; //because we will use it as an iterator from 0 position again

    for (int i = 0; i < length1; i++)
    {
        if (s1[i] == toRemove[k]) //check if some of the sumbols in s1 is one to be removed
        {
            for (int j = i; j < length1; j++)
            {
                s1[j] = s1[j + 1]; //we remove it by shifting each symbol after it on left by 1 starting from i-th position
            }
            length1--; //as we remove a symbol the length becomes shorter
            i--; //also i should become back to check the new symbol at the previos i position
            k++; //go to the next symbol to be removed
        }
    }
}

int main()
{
    char s1[50] = "abcdeeeeffff";
    char s2[50] = "defghijklmnop";

    printf("String 1: %s,   String2: %s\n", s1, s2);

    squeeze(s1, s2);

    printf("String 1 after transformation: %s\n", s1);
    
    return 0;
}

/*
Упражнение 7.18.* напишете алтернативна версия на функцията
void squeeze(char s1[],char s2[]), която премахва всеки символ в s1[],
който съответства на някой от символите в s2.
*/