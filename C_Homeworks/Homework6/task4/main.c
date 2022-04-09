#include <stdio.h>

double triArea();

double recArea();

int main()
{
    double a;
    printf("Input a: ");
    scanf("%lf", &a);

    double b;
    printf("Input b: ");
    scanf("%lf", &b);

    printf("Triangle area is: %lf\n", triArea(a, b));
    printf("Rectangle area is: %lf\n", recArea(a, b));

    return 0;
}

double triArea(double a, double b)
{
    return (a * b) / 2;
}

double recArea(double a, double b)
{
    return 2 * triArea(a, b);
}

/*
Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под мейн
функцията.
*/