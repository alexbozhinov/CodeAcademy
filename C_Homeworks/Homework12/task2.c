#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mut(int a, int b)
{
    return a * b;
}

int dev(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }

    return -1;
}

int (*functptr[4])(int a, int b) = {add, sub, mut, dev};

int main()
{
    int choice = 0;

    do
    {
        printf("Input a: ");
        int a = 0;
        scanf("%d", &a);

        printf("Input b: ");
        int b = 0;
        scanf("%d", &b);

        printf("\n1. Add\n2. Substract\n3. Multiply\n4. Devide\n5. Exit\n\n");
        printf("Input your choice: ");
        scanf("%d", &choice);

        int value = 0;

        switch (choice)
        {
        case 1:
            value = (*functptr[0])(a, b);
            printf("\nResult = %d\n\n", value);
            break;
        case 2:
            value = (*functptr[1])(a, b);
            printf("\nResult = %d\n\n", value);
            break;
        case 3:
            value = (*functptr[2])(a, b);
            printf("\nResult = %d\n\n", value);
            break;
        case 4:
            value = (*functptr[3])(a, b);
            printf("\nResult = %d\n\n", value);
            break;
        default:
            printf("Invalid input!\n\n");
            break;
        }

    } while (choice >= 1 && choice <= 4);

    return 0;
}

/*
Задача.3. Направете масив от указатели към функции по следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от горните функции
иска да използва – събиране, изваждане, умножение и деление. След това
попитайте за числата, които да участват в тази операция, и извикайте
функцията, която да извърши желаната операция.
*/