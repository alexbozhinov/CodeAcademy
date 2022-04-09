#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/boolean.h"
#include "../lib/myString.h"

String stringConstructor(char *text)
{
    String string = {0, 0, ""};

    setCapacity(&string, text);
    setText(&string, text);
    setLength(&string);

    return string;
}

void stringDestructor(String *string)
{
    free(string->text);
}

void setCapacity(String *string, char *text)
{
    string->capacity = strlen(text) + 1;
}

void setText(String *string, char *text)
{
    if (text)
    {
        int length = strlen(text);
        string->text = (char *)malloc(string->capacity * sizeof(char));
        strcpy(string->text, text);
        string->text[length] = '\0';
    }
    else
    {
        string->text = (char *)malloc(1);
        string->text[0] = '\0';
    }
}

void setLength(String *string)
{
    if (string->text)
    {
        int length = strlen(string->text);
        string->length = length;
    }
    else
    {
        string->length = 0;
    }
}

unsigned int length(String *string)
{
    return string->length;
}

unsigned int getCapacity(String *string)
{
    return string->capacity;
}

const char *getString(String *string)
{
    return string->text;
}

void append(char symbol, String *string)
{
    int length = strlen(string->text);
    char *newText = (char *)malloc(length * sizeof(char) + 2);

    strcpy(newText, string->text);

    newText[length] = symbol;
    newText[length + 1] = '\0';

    free(string->text);

    string->text = newText;
    string->length = strlen(newText);
    string->capacity = string->length + 1;
}

char at(String *string, unsigned int index)
{
    if ((string->length <= 1) || (index < 0 && index > string->length))
    {
        return -1;
    }

    return string->text[index];
}

bool isStringEmpty(String *string)
{
    if (string->length == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

bool ifEqual(String *left, String *right)
{
    if (left->length != right->length)
    {
        return FALSE;
    }

    if (strcmp(left->text, right->text) == 0)
    {
        return TRUE;
    }

    return FALSE;
}

int compare(String *left, String *right)
{
    return strcmp(left->text, right->text);
}

void stringInput(char text[])
{
    char c = ' ';
    unsigned int i = 0;

    while ((c = getchar()) != '\n')
    {
        text[i] = c;
        i++;
    }
    text[i] = '\0';
}

void stringOutput(String *string)
{
    for (int i = 0; i < string->length; i++)
    {
        printf("%c", string->text[i]);
    }
}