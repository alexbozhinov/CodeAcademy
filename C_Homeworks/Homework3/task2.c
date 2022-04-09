#include <stdio.h>

long long int xorRand(long long int acumolator[])
{
    long long int A = acumolator[0];
    A ^= A << 13;
    A ^= A >> 17;
    A ^= A << 5;
    acumolator[0] = A;
    return A;
}

int main()
{
    long long int acumolator[1] = {1};

    for (int i = 0; i < 100; i++)
    {
        printf("%lld\n", xorRand(acumolator));
    }

    return 0;
}

/*
* Направете генератор на случайни числа по следния
алгоритъм (xorshift):
 int A = 1, акумулатор с начална стойност
 При всяко вземане на число от генератора се прави следното:
 (i) A ^= A << 13;
 (ii) A ^= A >> 17;
 (iii) A ^= A << 5;
При всяка итерация изведете числото на екрана.
(Направете вариация с акумулатор long long int)
*/