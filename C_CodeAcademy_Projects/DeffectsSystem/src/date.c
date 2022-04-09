#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/boolean.h"
#include "../lib/date.h"
#include "../lib/myString.h"

bool isLeapYear(unsigned int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return TRUE;
    }

    return FALSE;
}

bool isValidDate(Date *date)
{
    if (date->month < 1 || date->month > 12)
    {
        return FALSE;
    }

    if (date->day < 1 || date->day > 31)
    {
        return FALSE;
    }

    if (date->month == 2)
    {
        if (isLeapYear(date->year) == TRUE)
        {
            if (date->day <= 29)
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
        }
        else
        {
            if (date->day <= 28)
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
        }
    }

    if ((date->month == 4 || date->month == 6 ||
         date->month == 9 || date->month == 11) &&
        date->day <= 30)
    {
        return TRUE;
    }

    else if ((date->month == 1 || date->month == 3 ||
              date->month == 5 || date->month == 7 ||
              date->month == 8 || date->month == 10 || date->month == 12) &&
             date->day <= 31)
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

bool isDigitSymbol(char symbol)
{
    if (symbol >= '0' && symbol <= '9')
    {
        return TRUE;
    }

    return FALSE;
}

bool isSmallerThan(Date *left, Date *right)
{
    if (left->year < right->year)
    {
        return TRUE;
    }

    if (left->year > right->year)
    {
        return FALSE;
    }

    if (left->year == right->year)
    {
        if (left->month < right->month)
        {
            return TRUE;
        }

        if (left->month > right->month)
        {
            return FALSE;
        }

        if (left->month == right->month)
        {
            if (left->day < right->day)
            {
                return TRUE;
            }

            if (left->day > right->day)
            {
                return FALSE;
            }

            if (left->day == right->day)
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void inputDate(Date *date, char strDate[])
{
    // char strDate[MAX_DATE_LENGTH] = "";  /*Used when inputing from the console directly in the function*/
    // stringInput(strDate);
    if (strcmp(strDate, "undefined") == 0) // when the date is not defined it becomes 00.00.0000
    {
        date->day = 0;
        date->month = 0;
        date->year = 0;
        return;
    }

    if (strDate[0] == '0' && isDigitSymbol(strDate[0]) == TRUE)
    {
        date->day = strDate[1] - '0';
    }
    else if (isDigitSymbol(strDate[0]) == TRUE && isDigitSymbol(strDate[1]) == TRUE)
    {
        date->day = (strDate[0] - '0') * 10 + (strDate[1] - '0');
    }

    if (strDate[3] == '0' && isDigitSymbol(strDate[3]) == TRUE)
    {
        date->month = strDate[4] - '0';
    }
    else if (isDigitSymbol(strDate[3]) == TRUE && isDigitSymbol(strDate[4]) == TRUE)
    {
        date->month = 10 + (strDate[4] - '0');
    }

    if (isDigitSymbol(strDate[6]) == TRUE && isDigitSymbol(strDate[7]) == TRUE && isDigitSymbol(strDate[8]) == TRUE && isDigitSymbol(strDate[9]) == TRUE)
    {
        date->year = (strDate[6] - '0') * 1000 + (strDate[7] - '0') * 100 + (strDate[8] - '0') * 10 + (strDate[9] - '0');
    }
}

void printDate(Date *date)
{
    if (isValidDate(date) == TRUE)
    {
        printf("%.2u.%.2u.%.2u", date->day, date->month, date->year);
    }
    else
    {
        printf("undefined date");
    }
}

void changeDate(Date *left, Date *right)
{
    left->day = right->day;
    left->month = right->month;
    left->year = right->year;
}