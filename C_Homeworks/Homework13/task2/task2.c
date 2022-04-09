#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"

#define CM_IN_METER 100
#define M_IN_KM 1000
#define MAX_DIST 1000000

void print(struct Dist *dist)
{
    printf("Dist: km = %d\tm = %d\tcm = %d\n", dist->km, dist->m, dist->cm);
}

void add(struct Dist *left, struct Dist *right)
{
    if (left->cm + right->cm < CM_IN_METER)
    {
        left->cm += right->cm;
    }
    else
    {
        left->m += ((left->cm + right->cm) / CM_IN_METER);
        left->cm = (left->cm + right->cm) % CM_IN_METER;
    }

    if (left->m + right->m < M_IN_KM)
    {
        left->m += right->m;
    }
    else
    {
        left->km += ((left->m + right->m) / M_IN_KM);
        left->m = (left->m + right->m) % CM_IN_METER;
    }

    if (left->km + right->km < MAX_DIST)
    {
        left->km += right->km;
    }
    else
    {
        printf("Out of bounds!\n");
    }
}

void menu()
{
    printf("Input left distantion:\n");

    int km = 0, m = 0, cm = 0;

    printf("Input km: ");
    scanf("%d", &km);

    printf("Input m: ");
    scanf("%d", &m);

    printf("Input cm: ");
    scanf("%d", &cm);

    struct Dist leftDist = {km, m, cm};
    km = 0;
    m = 0;
    cm = 0;

    printf("Input right distantion:\n");

    printf("Input km: ");
    scanf("%d", &km);

    printf("Input m: ");
    scanf("%d", &m);

    printf("Input cm: ");
    scanf("%d", &cm);

    struct Dist rightDist = {km, m, cm};

    add(&leftDist, &rightDist);
    print(&leftDist);
}