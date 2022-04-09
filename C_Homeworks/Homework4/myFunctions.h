#include <string.h>

void removeSymbol(char s[], int c) //function that removes the symbol c from string s[]
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

int bigger(int n1, int n2) //function that returns the bigger of two numbers
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int myStrlen(char str[]) //function that returns the length of a string
{
    int length = 0;

    while (str[length] != 0)
    {
        length++;
    }

    return length;
}

void tenDegrees(int degrees[], int length) //function that defines an array with the degrees of 10
{
    degrees[0] = 1;

    for (int i = 1; i < length; i++)
    {
        degrees[i] = degrees[i - 1] * 10;
    }
}

void reverse(char s[]) //function that reverses given string
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}