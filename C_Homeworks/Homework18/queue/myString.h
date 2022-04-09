#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED

typedef enum
{
    FALSE = 0,
    TRUE = 1,
} bool;

/*A struct, which represents the c++ class string*/

typedef struct
{
    unsigned int length;
    unsigned int capacity;
    char *text;
} String;

String stringConstructor(char *text);  //+ construct string
void stringDestructor(String *string); //+ destruct string

unsigned int length(String *string);            //+  returns string's length
unsigned int getStringCapacity(String *string); //+  returns string's capacity
const char *getString(String *string);          //+  returns string's text

void append(char symbol, String *string);    //+  add new symbol at the string's end
char at(String *string, unsigned int index); //+  returns the string's symbol at position [index]

void stringOutput(String *string); //+  print string
void stringInput(char *text);      //+  input string from the keyboard

int compare(String *left, String *right);  //+  compare two strings -1 or 0 or 1
bool ifEqual(String *left, String *right); //+  returns if two strings are aqual TRUE or FALSE
bool isStringEmpty(String *string);        //+  returns if the string is empty TRUE or FALSE

void setLength(String *string);               //+  set function for string's length
void setText(String *string, char *text);     //+  set function for string's text
void setCapacity(String *string, char *text); //+  set function for string's capacity
// void updateStringCapacity();               //-  not implemented yet, not necessary for now

#endif