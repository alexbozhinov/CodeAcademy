#include "../lib/boolean.h"
#include "../lib/position.h"
#include "../lib/state.h"
#include "../lib/myString.h"
#include "../lib/date.h"
#include "../lib/employee.h"
#include "../lib/deffect.h"
#include "../lib/vector_d.h"
#include "../lib/vector_e.h"
#include "../lib/priority_queue.h"
#include "../lib/system.h"
#include "../lib/userInterface.h"
#include <stdlib.h>
#include <stdio.h>

/** boolean **/

/*
int main()
{
    bool flag = FALSE;
    int a = 5;

    if (a < 0)
    {
        flag = TRUE;
    }

    printf("%d\n", flag);
}
*/

/** position **/

/*
int main()
{
    Position position1 = 1;
    Position position2 = 2;
    Position position3 = 3;

    printPosition(position1);
    printPosition(position2);
    printPosition(position3);

    return 0;
}
*/

/** state **/

/*
int main()
{
    State state1 = 1;
    State state2 = 2;
    State state3 = 3;
    State state4 = 4;

    printState(state1);
    printState(state2);
    printState(state3);
    printState(state4);

    return 0;
}
*/

/** string **/

/*
int main()
{
    char str[50];
    char symbol = ' ';
    char s[50];

    printf("Input string: ");
    stringInput(str);
    String str1 = stringConstructor(str);

    printf("Input one symbol: ");
    stringInput(&symbol);
    String str2 = stringConstructor(&symbol);

    printf("Input string: ");

    stringInput(s);
    String str3 = stringConstructor(s);

    printf("Input and Output test\n");
    stringOutput(&str1);
    printf("\n");
    stringOutput(&str2);
    printf("\n");
    stringOutput(&str3);

    printf("\nTest at()\n %c\n", at(&str1, 2));

    append('a', &str2);
    printf("\nTest apend()\n");
    stringOutput(&str2);
    printf("\n");

    printf("isStringEmpty() test\n");
    printf("%d\n", isStringEmpty(&str3));

    printf("ifEqual() test\n");
    printf("%d\n", ifEqual(&str1, &str3));

    printf("compare test\n");
    printf("%d\n", compare(&str1, &str3));

    stringDestructor(&str1);
    stringDestructor(&str2);
    stringDestructor(&str3);

    return 0;
}
*/

/** date **/

/*
int main()
{
    Date date = {0, 0, 0};
    inputDate(&date);

    printDate(&date);

    return 0;
}
*/

/** employee **/

/*
int main()
{
    Employee programmer = employeeConstructor(1, 1);
    Employee tester = employeeConstructor(3, 2);

    printEmployee(&programmer);
    printEmployee(&tester);

    return 0;
}
*/

/** deffect **/

/*
int main()
{
    Deffect d1 = deffectConstructor(1);
    printDeffect(&d1);
    stringOutput(&d1.mainInformation);
    char sh[50] = "";
    stringInput(sh);
    String shI = stringConstructor(sh);

    char mn[50] = "";
    stringInput(mn);
    String mnI = stringConstructor(mn);

    Date d1 = {0, 0, 0};
    inputDate(&d1);
    Date d2 = {0, 0, 0};
    inputDate(&d2);
    Date d3 = {0, 0, 0};
    inputDate(&d3);

    Employee p = employeeConstructor(1, 1);
    Employee t = employeeConstructor(2, 2);

    stringOutput(&shI);
    stringOutput(&mnI);
    printDate(&d1);
    printDate(&d2);
    printDate(&d3);
    printEmployee(&p);
    printEmployee(&t);

    stringDestructor(&shI);
    stringDestructor(&mnI);

    stringDestructor(&d1.shortInformation);
    stringDestructor(&d1.mainInformation);
    stringDestructor(&d1.programmer.firstName);
    stringDestructor(&d1.programmer.secondName);
    stringDestructor(&d1.programmer.lastName);
    stringDestructor(&d1.tester.firstName);
    stringDestructor(&d1.tester.secondName);
    stringDestructor(&d1.tester.lastName);

    return 0;
}
*/

/** vector_d vector_e priority_queue **/

/*
int main()
{
    Vector_D deffects = vectorConstructorD(5);
    Deffect d1 = deffectConstructor(1);
    Deffect d2 = deffectConstructor(5);
    Deffect d3 = deffectConstructor(3);
    Deffect d4 = deffectConstructor(2);
    Deffect d5 = deffectConstructor(4);

    insertDeffect(&deffects, d1);
    insertDeffect(&deffects, d2);
    insertDeffect(&deffects, d3);
    insertDeffect(&deffects, d4);
    insertDeffect(&deffects, d5);

    printf("id = %d\n", deffects.elements[0].deffectId);
    printf("id = %d\n", deffects.elements[1].deffectId);
    printf("id = %d\n", deffects.elements[2].deffectId);
    printf("id = %d\n", deffects.elements[3].deffectId);
    printf("id = %d\n", deffects.elements[4].deffectId);

    deleteDeffect(&deffects, deffects.elements[0]);
    printf("id = %d\n", deffects.elements[0].deffectId);
    printf("id = %d\n", deffects.elements[1].deffectId);
    printf("id = %d\n", deffects.elements[2].deffectId);
    printf("id = %d\n", deffects.elements[3].deffectId);

    deleteDeffect(&deffects, deffects.elements[0]);
    printf("id = %d\n", deffects.elements[0].deffectId);
    printf("id = %d\n", deffects.elements[1].deffectId);
    printf("id = %d\n", deffects.elements[2].deffectId);

    deleteDeffect(&deffects, deffects.elements[0]);
    printf("id = %d\n", deffects.elements[0].deffectId);
    printf("id = %d\n", deffects.elements[1].deffectId);

    deleteDeffect(&deffects, deffects.elements[0]);
    printf("id = %d\n", deffects.elements[0].deffectId);

    for (int i = 0; i < deffects.size; i++)
    {
        stringDestructor(&deffects.elements[i].shortInformation);
        stringDestructor(&deffects.elements[i].mainInformation);
        stringDestructor(&deffects.elements[i].programmer.firstName);
        stringDestructor(&deffects.elements[i].programmer.secondName);
        stringDestructor(&deffects.elements[i].programmer.lastName);
        stringDestructor(&deffects.elements[i].tester.firstName);
        stringDestructor(&deffects.elements[i].tester.secondName);
        stringDestructor(&deffects.elements[i].tester.lastName);
    }

    return 0;
}
*/

/*system read employees from CSV FILE*/

/*
int main()
{
    System system;
    systemEmployeesConstructor(&system);

    loadProgrammers(&system);
    printProgrammersList(&system);

    loadTesters(&system);
    printTestersList(&system);

    systemEmployeesDestructor(&system);

    return 0;
}
*/

/*system read deffects from CSV FILE*/

/*int main()
{
    System system;
    systemEmployeesConstructor(&system);
    systemDeffectsConstructor(&system);

    loadProgrammers(&system);
    // printProgrammersList(&system);

    loadTesters(&system);
    // printTestersList(&system);

    loadNewList(&system);
    // printNewDeffectsList(&system);

    // writeNewList(&system);
    // writeRepairedList(&system);
    // writeClosedList(&system);
    //queuePop(&system.newDeffects);
   // queuePop(&system.newDeffects);
    //queuePop(&system.newDeffects);
    //queuePop(&system.newDeffects);
    //printNewDeffectsList(&system);

    // mainMenu(&system);

    //systemEmployeesDestructor(&system);
    //systemDeffectsDestructor(&system);
    //printf("Hello\n");

     Date date1 = {1,3,2022};
     Date date2 = {1,2,2022};
     printf("%d", isSmallerThan(&date1, &date2));
   // return 0;
}*/