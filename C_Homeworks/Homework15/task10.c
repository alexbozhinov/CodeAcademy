#include <stdio.h>

#define AVG(x, y) (x + y) / 2
/*#define AVERAGE 0
#define AVG(x, y)                \
    for (int i = x, i <= y; i++) \
    {                            \
        AVERAGE = AVERAGE + i;   \
    }                            \
    AVERAGE / (y - x);

*/
#define DEGREE(x, y) 

int main()
{
    printf("Average = %d\n", AVG(10, 30));

    return 0;
}

/*
Задача 11. Напишете функциите като макроси:
1. Функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. Функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));
*/