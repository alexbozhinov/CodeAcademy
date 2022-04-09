#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "task3.h"

#define SEC_IN_MIN 60
#define MIN_IN_DAY 1440
#define DAY_IN_MONTH 31
#define MONTH_IN_YEAR 12
#define YEAR_IN_CENTURY 100
#define MAX 1000

void print(struct Time *time)
{
    printf("Time: century = %d\tyear = %d\tmonth = %d\tday = %d\tminute = %d\tsecond = %d\n",
           time->century, time->year, time->month, time->day, time->minute, time->second);
}

void minus(struct Time *left, struct Time *right)
{
    if ((left->second + right->second) < SEC_IN_MIN)
    {
        left->second -= right->second;
    }
    else
    {
        left->minute += ((int)fabs(right->second - left->second) / SEC_IN_MIN);
        left->second = (int)fabs(left->second - right->second) % SEC_IN_MIN;
        if (left->second < 0)
        {
            left->second = 0;
        }
    }

    if ((left->minute + right->minute) < MIN_IN_DAY)
    {
        left->minute -= right->minute;
    }
    else
    {
        left->day += ((int)fabs(right->minute - left->minute) / (MIN_IN_DAY));
        left->minute = (int)fabs(right->minute - left->minute) % (MIN_IN_DAY);
        if (left->minute < 0)
        {
            left->minute = 0;
        }
    }

    if ((left->day + right->day) < DAY_IN_MONTH)
    {
        left->day -= right->day;
    }
    else
    {
        left->month += ((int)fabs(right->day - left->day) / (DAY_IN_MONTH));
        left->day = (int)fabs(right->day - left->day) % (DAY_IN_MONTH);
        if (left->day < 0)
        {
            left->day = 0;
        }
    }

    if ((left->month + right->month) < MONTH_IN_YEAR)
    {
        left->month -= right->month;
    }
    else
    {
        left->year += ((int)fabs(right->month - left->month) / (MONTH_IN_YEAR));
        left->month = (int)fabs(right->month - left->month) % (MONTH_IN_YEAR);
        if (left->month < 0)
        {
            left->month = 0;
        }
    }

    if ((left->year + right->year) < YEAR_IN_CENTURY)
    {
        left->year -= right->year;
    }
    else
    {
        left->century += ((int)fabs(right->year - left->year) / (YEAR_IN_CENTURY));
        left->year = (int)fabs(right->year - left->year) % (YEAR_IN_CENTURY);
        if (left->year < 0)
        {
            left->year = 0;
        }
    }

    if ((left->century + right->century) < MAX)
    {
        left->century -= right->century;
    }
    else
    {
        printf("Out of bounds!\n");
    }
}

void menu()
{
    printf("Input left period:\n");

    int century = 0, year = 0, month = 0, day = 0, minute = 0, second = 0;

    printf("Input century: ");
    scanf("%d", &century);

    printf("Input year: ");
    scanf("%d", &year);

    printf("Input month: ");
    scanf("%d", &month);

    printf("Input day: ");
    scanf("%d", &day);

    printf("Input minute: ");
    scanf("%d", &minute);

    printf("Input second: ");
    scanf("%d", &second);

    struct Time leftTime = {century, year, month, day, minute, second};

    century = 0;
    year = 0;
    month = 0;
    day = 0;
    minute = 0;
    second = 0;

    printf("Input left period:\n");

    printf("Input century: ");
    scanf("%d", &century);

    printf("Input year: ");
    scanf("%d", &year);

    printf("Input month: ");
    scanf("%d", &month);

    printf("Input day: ");
    scanf("%d", &day);

    printf("Input minute: ");
    scanf("%d", &minute);

    printf("Input second: ");
    scanf("%d", &second);

    struct Time rightTime = {century, year, month, day, minute, second};

    minus(&leftTime, &rightTime);
    print(&leftTime);
}