#include <stdio.h>

struct Date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};

int isLeapYear(unsigned int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return 1;
    }

    return -1;
}

int isValidDate(struct Date *date)
{
    if (date->month < 1 || date->month > 12)
    {
        return -1;
    }

    if (date->day < 1 || date->day > 31)
    {
        return -1;
    }

    if (date->month == 2)
    {
        if (isLeapYear(date->year) == 1)
        {
            if (date->day <= 29)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            if (date->day <= 28)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }

    if ((date->month == 4 || date->month == 6 ||
         date->month == 9 || date->month == 11) &&
        date->day <= 30)
    {
        return 1;
    }
    else if ((date->month == 1 || date->month == 3 ||
              date->month == 5 || date->month == 7 ||
              date->month == 8 || date->month == 10 || date->month == 12) &&
             date->day <= 31)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void printDate(struct Date *date)
{
    if (isValidDate(date) == 1)
    {
        printf("Date: %u.%u.%u\n", date->day, date->month, date->year);
    }
    else
    {
        printf("The date is not valid!\n");
    }
}

int main()
{
    struct Date date1 = {15, 10, 2002};
    struct Date date2 = {31, 10, 1992};
    struct Date date3 = {31, 4, 2008}; //not valid
    struct Date date4 = {30, 2, 1990}; //not valid
    struct Date date5 = {29, 2, 2000};
    struct Date date6 = {8, 8, 2001};
    struct Date date7 = {29, 2, 2001}; //not valid

    printDate(&date1);
    printDate(&date2);
    printDate(&date3);
    printDate(&date4);
    printDate(&date5);
    printDate(&date6);
    printDate(&date7);

    return 0;
}

/*
Задача 4. Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете функция,
която валидира датата.
*/