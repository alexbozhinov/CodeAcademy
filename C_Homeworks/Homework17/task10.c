#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    double diameter;
    double wide;
} Mellon;

double drand(double low, double high)
{
    return ((double)rand() * (high - low)) / (double)RAND_MAX + low;
}

int main()
{
    int A = 0;
    printf("Input A: ");
    scanf("%d", &A);

    Mellon *mellons = (Mellon *)malloc(A * sizeof(Mellon));

    for (int i = 0; i < A; i++)
    {
        mellons[i].diameter = drand(15, 140);
        mellons[i].wide = drand(0.5, 3.5);
    }

    int B = 0;
    printf("Input B: ");
    scanf("%d", &B);

    Mellon *pumpkins = (Mellon *)malloc(B * sizeof(Mellon));

    for (int i = 0; i < B; i++)
    {
        pumpkins[i].diameter = drand(35, 95);
        pumpkins[i].wide = drand(0.3, 0.9);
    }

    double mDiameter = 0.0;
    double mWide = 0.0;
    double pDiameter = 0.0;
    double pWide = 0.0;

    for (int i = 0; i < A; i++)
    {
        mDiameter += mellons[i].diameter;
        mWide += mellons[i].wide;
    }

    mDiameter /= A;
    mWide /= A;

    for (int i = 0; i < B; i++)
    {
        pDiameter += pumpkins[i].diameter;
        pWide += pumpkins[i].wide;
    }

    pDiameter /= B;
    pWide /= B;

    printf("%lf, %lf, %lf, %lf", mDiameter, mWide, pDiameter, pWide);

    free(mellons);
    free(pumpkins);

    return 0;
}

/*
Задача 10. Създайте структура диня с два елемента - диаметър и дебелина
на кората заделете динамично с malloc() за масив от А на брой дини от сорт
мелон и попълнете данните за диаметър между 15 и 140 см с функцията
rand(), за всяка една диня в масива и дебелина на кората между 0.5 и 3.5
см. Създайте структура диня с два елемента - диаметър и дебелина на
кората заделете динамично с malloc() за масив от В на брой дини от сорт
пъмпкин и попълнете данните за диаметър между 35 и 95 см с функцията
rand(), за всяка една диня в масива и дебелина на кората между 0.3 и 0.9
см. Намерете средната големина на динята и средната дебелина на кората
и ги съпоставете с тези от втория масив. Изведете на екрана купчината от
кой сорт е по добре да се купи.
Изход: По-добре е да се купят ... дини с диаметър ... сантиметра и кора с
дебелина D см вместо ... дини с диаметър ... см и дебелина на кората D1 см.
*/