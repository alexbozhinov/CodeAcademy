#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x;
    int y;
};

struct Rectangle
{
    struct Point A;
    struct Point C;
};

struct Point makepoint(int x, int y);

struct Rectangle makerectangle();

void printPoint(struct Point *point);

void printScreen(struct Rectangle *rec);

void menu();