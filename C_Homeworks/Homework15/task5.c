#include <stdio.h>

#define DEBUG true
#ifdef DEBUG
#define PRINT(message) printf message
#endif

int main()
{
    PRINT(("MESSAGE!\n"));

    return 0;
}

/*
Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.
*/