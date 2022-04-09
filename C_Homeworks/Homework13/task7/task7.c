#include "task7.h"

struct Point makepoint(int x, int y)
{
    struct Point point = {x, y};

    return point;
}

void printPoint(struct Point *point)
{
    printf("Point: (%d, %d)\n", point->x, point->y);
}

struct Rectangle makerectangle()
{
    struct Rectangle rec; //how to initialize?

    rec.A = makepoint(0, 0);
    rec.C = makepoint(15, 15);

    return rec;
}

void printScreen(struct Rectangle *rec)
{
    for (int i = rec->A.x; i < rec->C.x; i++)
    {
        for (int j = rec->A.y; j < rec->C.y; j++)
        {
            printf("-");
        }
        printf("\n");
    }
}

void menu()
{
    printf("TASK   7   TEST\n\n");
    struct Point *points = (struct Point *)malloc(2 * sizeof(struct Point *));
    points[0] = makepoint(0, 0);
    points[1] = makepoint(10, 10);

    printPoint(&points[0]);
    printPoint(&points[1]);

    printf("TASK   8   TEST\n\n");

    struct Rectangle rec = makerectangle();
    printScreen(&rec);
}