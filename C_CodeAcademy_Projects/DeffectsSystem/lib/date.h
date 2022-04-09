#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#define MAX_DATE_LENGTH 11

/*A struct, which represents date type with bit fields: day, month, year.*/

typedef struct
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
} Date;

bool isLeapYear(unsigned int year); // A function, which validates if an year is leap or not +

bool isValidDate(Date *date); // A function, which validates if a date is defined or undefined +

bool isDigitSymbol(char symbol); // A function, which checks if a string character is a digit or other symbol +

bool isSmallerThan(Date *left, Date *right); // A functionр which compares two dates, and returns if the left is smaller than the right one +

void inputDate(Date *date, char strDate[]); // A function, in which we input a date in string format and transform it into struct date format +

void printDate(Date *date); // A function, which prints a date in date format (01.01.2001) +

void changeDate(Date *left, Date *right); // A function that makes left date equal to right date +

#endif
