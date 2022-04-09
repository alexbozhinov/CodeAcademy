#include "../lib/system.h"
#include "../lib/userInterface.h"
//#include <crtdbg.h>

void systemDeffectsConstructor(System *system)
{
    system->newDeffects = vectorConstructorD(DEFFECTS_FIRST_SIZE);
    system->fixedDeffects = vectorConstructorD(DEFFECTS_FIRST_SIZE);
    system->closedDeffects = vectorConstructorD(DEFFECTS_FIRST_SIZE);
}

void systemEmployeesConstructor(System *system)
{
    system->programmers = vectorConstructorE(EMPLOYEE_MAX_SIZE);

    system->testers = vectorConstructorE(EMPLOYEE_MAX_SIZE);
}

void systemDeffectsDestructor(System *system)
{
    for (int i = 0; i < system->newDeffects.size; i++)
    {
        deffectDestructor(&system->newDeffects.elements[i]);
    }
    vectorDestructorD(&system->newDeffects);

    for (int i = 0; i < system->fixedDeffects.size; i++)
    {
        deffectDestructor(&system->fixedDeffects.elements[i]);
    }
    vectorDestructorD(&system->fixedDeffects);

    for (int i = 0; i < system->closedDeffects.size; i++)
    {
        deffectDestructor(&system->closedDeffects.elements[i]);
    }
    vectorDestructorD(&system->closedDeffects);
}

void systemEmployeesDestructor(System *system)
{
    for (int i = 0; i < system->programmers.size; i++)
    {
        employeeDestructor(&system->programmers.elements[i]);
    }
    vectorDestructorE(&system->programmers);

    for (int i = 0; i < system->testers.size; i++)
    {
        employeeDestructor(&system->testers.elements[i]);
    }
    vectorDestructorE(&system->testers);
}
/*
void repairDeffect(System *system, Deffect *deffect)
{
    // print repair menu
    // after choice
    // changeState()
    if (deffect->state == FIXED)
    {
        insertDeffect(&system->fixedDeffects, *deffect);
    }
    else if (deffect->state == NEW)
    {
        insertDeffect(&system->newDeffects, *deffect);
    }
}
*/
/*
void testDeffect(System *system, Deffect *deffect)
{
    // print test menu
    // after choice
    // changeState()
    if (deffect->state == CLOSED)
    {
        insertDeffect(&system->closedDeffects, *deffect, CLOSED);
    }
    else if (deffect->state == FIXED)
    {
        insertDeffect(&system->fixedDeffects, *deffect, FIXED);
    }
}
*/
/*
void addNewDeffect(System *system)
{
    id++;
    Deffect newDeffect = deffectConstructor(id);
    insertDeffect(&system->newDeffects, newDeffect);
}
*/
void loadProgrammers(System *system)
{
    FILE *CSVemployees = fopen("employees.csv", "r");

    if (CSVemployees == NULL)
    {
        printf("Press any key to exit...\n");
        exit(1);
    }

    int c = 0;

    while ((c = getc(CSVemployees)) != EOF)
    {
        char line[1024];
        line[0] = c;
        fgets(&line[1], 1023, (FILE *)CSVemployees);

        Employee employee;

        char *token;
        token = strtok(line, ";");

        int i = 0;

        while (token != NULL)
        {
            if (i == 0)
            {
                employee.employeeId = atoi(token);
            }

            else if (i == 1)
            {
                employee.firstName = stringConstructor(token);
            }

            else if (i == 2)
            {
                employee.secondName = stringConstructor(token);
            }

            else if (i == 3)
            {
                employee.lastName = stringConstructor(token);
            }

            else if (i == 4)
            {
                employee.position = atoi(token);

                if (employee.position == 1)
                {
                    pushBackE(&system->programmers, employee);
                }

                break;
            }

            token = strtok(NULL, ";");
            i++;
        }
    }
    fclose(CSVemployees);
}

void loadTesters(System *system)
{
    FILE *CSVemployees = fopen("employees.csv", "r");

    if (CSVemployees == NULL)
    {
        printf("Press any key to exit...\n");
        exit(1);
    }

    int c = 0;

    while ((c = getc(CSVemployees)) != EOF)
    {
        char line[1024];
        line[0] = c;
        fgets(&line[1], 1023, (FILE *)CSVemployees);

        Employee employee;

        char *token;
        token = strtok(line, ";");

        int i = 0;

        while (token != NULL)
        {
            if (i == 0)
            {
                employee.employeeId = atoi(token);
            }

            else if (i == 1)
            {
                employee.firstName = stringConstructor(token);
            }

            else if (i == 2)
            {
                employee.secondName = stringConstructor(token);
            }

            else if (i == 3)
            {
                employee.lastName = stringConstructor(token);
            }

            else if (i == 4)
            {
                employee.position = atoi(token);

                if (employee.position == 2)
                {
                    pushBackE(&system->testers, employee);
                }

                break;
            }

            token = strtok(NULL, ";");
            i++;
        }
    }
    fclose(CSVemployees);
}

void loadNewList(System *system)
{
    FILE *CSVdeffects = fopen("deffects.csv", "r");

    if (CSVdeffects == NULL)
    {
        printf("Press any key to exit...\n");
        exit(1);
    }

    int c = 0;

    while ((c = getc(CSVdeffects)) != EOF)
    {
        char line[1024];
        line[0] = c;
        fgets(&line[1], 1023, (FILE *)CSVdeffects);

        Deffect deffect;

        char *token;
        token = strtok(line, ";");

        int i = 0;

        while (token != NULL)
        {
            if (i == 0)
            {
                deffect.deffectId = atoi(token);
            }

            else if (i == 1)
            {
                deffect.shortInformation = stringConstructor(token);
            }

            else if (i == 2)
            {
                deffect.mainInformation = stringConstructor(token);
            }

            else if (i == 3)
            {
                inputDate(&deffect.findDate, token);
            }

            else if (i == 4)
            {
                inputDate(&deffect.repairDate, token);
            }

            else if (i == 5)
            {
                inputDate(&deffect.closeDate, token);
            }

            else if (i == 6)
            {
                for (int j = 0; j < system->programmers.size; j++)
                {
                    if (system->programmers.elements[j].employeeId == atoi(token))
                    {
                        deffect.programmer = system->programmers.elements[j];
                    }
                }
            }

            else if (i == 7)
            {
                for (int j = 0; j < system->testers.size; j++)
                {
                    if (system->testers.elements[j].employeeId == atoi(token))
                    {
                        deffect.tester = system->testers.elements[j];
                    }
                }
                deffect.state = NEW;
                insertDeffect(&system->newDeffects, deffect, NEW);
                break;
            }

            token = strtok(NULL, ";");
            i++;
        }
    }
    fclose(CSVdeffects);
}

void writeNewList(System *system)
{
    FILE *newListFile = fopen("newDeffects.csv", "w");

    if (newListFile != NULL)
    {
        fprintf(newListFile, "ID;SHORT INFORMATION;MAIN INFORMATION;FOUND DATE;REPAIR DATE;CLOSE DATE;PROGRAMMER; ; ; ; ;TESTER; ; ; ; ;STATE\n");
    }

    if (system->newDeffects.size != 0)
    {

        for (int i = 0; i < system->newDeffects.size; i++)
        {
            fprintf(newListFile, "%d;%s;%s;%.2u.%.2u.%.2u;%.2u.%.2u.%.2u;%.2u.%.2u.%.2u;%d;%s;%s;%s;%s;%d;%s;%s;%s;%s;%s\n",
                    system->newDeffects.elements[i].deffectId, system->newDeffects.elements[i].shortInformation.text, system->newDeffects.elements[i].mainInformation.text,
                    system->newDeffects.elements[i].findDate.day, system->newDeffects.elements[i].findDate.month, system->newDeffects.elements[i].findDate.year,
                    system->newDeffects.elements[i].repairDate.day, system->newDeffects.elements[i].repairDate.month, system->newDeffects.elements[i].repairDate.year,
                    system->newDeffects.elements[i].closeDate.day, system->newDeffects.elements[i].closeDate.month, system->newDeffects.elements[i].closeDate.year,
                    system->newDeffects.elements[i].programmer.employeeId, system->newDeffects.elements[i].programmer.firstName.text, system->newDeffects.elements[i].programmer.secondName.text,
                    system->newDeffects.elements[i].programmer.lastName.text, returnPosition(system->newDeffects.elements[i].programmer.position),
                    system->newDeffects.elements[i].tester.employeeId, system->newDeffects.elements[i].tester.firstName.text, system->newDeffects.elements[i].tester.secondName.text,
                    system->newDeffects.elements[i].tester.lastName.text, returnPosition(system->newDeffects.elements[i].tester.position), returnState(system->newDeffects.elements[i].state));
        }
    }
    fclose(newListFile);
}

void writeRepairedList(System *system)
{
    FILE *repairedListFile = fopen("repairedDeffects.csv", "w");

    if (repairedListFile != NULL)
    {
        fprintf(repairedListFile, "ID;SHORT INFORMATION;MAIN INFORMATION;FOUND DATE;REPAIR DATE;CLOSE DATE;PROGRAMMER; ; ; ; ;TESTER; ; ; ; ;STATE\n");
    }

    if (system->fixedDeffects.size != 0)
    {

        for (int i = 0; i < system->fixedDeffects.size; i++)
        {
            fprintf(repairedListFile, "%d;%s;%s;%.2u.%.2u.%.2u;%.2u.%.2u.%.2u;%.2u.%.2u.%.2u;%d;%s;%s;%s;%s;%d;%s;%s;%s;%s;%s\n",
                    system->fixedDeffects.elements[i].deffectId, system->fixedDeffects.elements[i].shortInformation.text, system->fixedDeffects.elements[i].mainInformation.text,
                    system->fixedDeffects.elements[i].findDate.day, system->fixedDeffects.elements[i].findDate.month, system->fixedDeffects.elements[i].findDate.year,
                    system->fixedDeffects.elements[i].repairDate.day, system->fixedDeffects.elements[i].repairDate.month, system->fixedDeffects.elements[i].repairDate.year,
                    system->fixedDeffects.elements[i].closeDate.day, system->fixedDeffects.elements[i].closeDate.month, system->fixedDeffects.elements[i].closeDate.year,
                    system->fixedDeffects.elements[i].programmer.employeeId, system->fixedDeffects.elements[i].programmer.firstName.text, system->fixedDeffects.elements[i].programmer.secondName.text,
                    system->fixedDeffects.elements[i].programmer.lastName.text, returnPosition(system->fixedDeffects.elements[i].programmer.position),
                    system->fixedDeffects.elements[i].tester.employeeId, system->fixedDeffects.elements[i].tester.firstName.text, system->fixedDeffects.elements[i].tester.secondName.text,
                    system->fixedDeffects.elements[i].tester.lastName.text, returnPosition(system->fixedDeffects.elements[i].tester.position), returnState(system->fixedDeffects.elements[i].state));
        }
    }

    fclose(repairedListFile);
}

void writeClosedList(System *system)
{
    FILE *closedListFile = fopen("closedDeffects.csv", "w");

    if (closedListFile != NULL)
    {
        fprintf(closedListFile, "ID;SHORT INFORMATION;MAIN INFORMATION;FOUND DATE;REPAIR DATE;CLOSE DATE;PROGRAMMER; ; ; ; ;TESTER; ; ; ; ;STATE\n");
    }

    if (system->closedDeffects.size != 0)
    {

        for (int i = 0; i < system->closedDeffects.size; i++)
        {
            fprintf(closedListFile, "%d;%s;%s;%.2u.%.2u.%.2u;%.2u.%.2u.%.2u;%.2u.%.2u.%.2u;%d;%s;%s;%s;%s;%d;%s;%s;%s;%s;%s\n",
                    system->closedDeffects.elements[i].deffectId, system->closedDeffects.elements[i].shortInformation.text, system->closedDeffects.elements[i].mainInformation.text,
                    system->closedDeffects.elements[i].findDate.day, system->closedDeffects.elements[i].findDate.month, system->closedDeffects.elements[i].findDate.year,
                    system->closedDeffects.elements[i].repairDate.day, system->closedDeffects.elements[i].repairDate.month, system->closedDeffects.elements[i].repairDate.year,
                    system->closedDeffects.elements[i].closeDate.day, system->closedDeffects.elements[i].closeDate.month, system->closedDeffects.elements[i].closeDate.year,
                    system->closedDeffects.elements[i].programmer.employeeId, system->closedDeffects.elements[i].programmer.firstName.text, system->closedDeffects.elements[i].programmer.secondName.text,
                    system->closedDeffects.elements[i].programmer.lastName.text, returnPosition(system->closedDeffects.elements[i].programmer.position),
                    system->closedDeffects.elements[i].tester.employeeId, system->closedDeffects.elements[i].tester.firstName.text, system->closedDeffects.elements[i].tester.secondName.text,
                    system->closedDeffects.elements[i].tester.lastName.text, returnPosition(system->closedDeffects.elements[i].tester.position), returnState(system->closedDeffects.elements[i].state));
        }
    }

    fclose(closedListFile);
}

void repairDeffect(System *sys, Deffect *deffect)
{
    printf("\nInput date of repairing: ");
    fflush(stdin);
    char sDate[20] = " ";
    stringInput(sDate);
    Date newDate = {0, 0, 0};
    inputDate(&newDate, sDate);
    changeDate(&deffect->repairDate, &newDate);
    State newState = FIXED;
    changeState(deffect, newState);

    insertDeffect(&sys->fixedDeffects, *queueTop(&sys->newDeffects), newState);
    queuePop(&sys->newDeffects, NEW);

    changeState(deffect, newState);

    int choice = 0;

    do
    {
        system("cls");
        printf("\nThe deffect was repaired, now waiting for verification.\n");
        printf("1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        newDeffectsMenu(sys);
        break;
    case 2:
        return;
        break;
    }
}

void notRepairedDeffect(System *sys, Deffect *deffect)
{
    printf("\nInput new date of finding: ");
    fflush(stdin);
    char sDate[20] = " ";
    stringInput(sDate);
    Date newDate = {0, 0, 0};
    inputDate(&newDate, sDate);
    changeDate(&deffect->findDate, &newDate);

    for (int i = sys->newDeffects.size - 1; i >= 0; i--)
    {
        heapify(&sys->newDeffects, i, NEW);
    }

    int choice = 0;

    do
    {
        system("cls");
        printf("\nThe deffect was returned to wait for repairing.\n");
        printf("1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        newDeffectsMenu(sys);
        break;
    case 2:
        return;
        break;
    }
}

void verifyDeffect(System *sys, Deffect *deffect)
{
    printf("\nInput date of verification: ");
    fflush(stdin);
    char sDate[20] = " ";
    stringInput(sDate);
    Date newDate = {0, 0, 0};
    inputDate(&newDate, sDate);
    changeDate(&deffect->closeDate, &newDate);
    State newState = CLOSED;
    changeState(deffect, newState);

    insertDeffect(&sys->closedDeffects, *queueTop(&sys->fixedDeffects), newState);
    queuePop(&sys->fixedDeffects, FIXED);

    changeState(deffect, newState);

    int choice = 0;

    do
    {
        system("cls");
        printf("\nThe deffect was verified\n");
        printf("1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        fixedDeffectsMenu(sys);
        break;
    case 2:
        return;
        break;
    }
}

void notVerifyRepairedDeffect(System *sys, Deffect *deffect)
{
    printf("\nInput new date of finding: ");
    fflush(stdin);
    char sDate[20] = " ";
    stringInput(sDate);
    Date newFindDate = {0, 0, 0};
    inputDate(&newFindDate, sDate);
    changeDate(&deffect->findDate, &newFindDate);
    Date newFixDate = {0, 0, 0};
    changeDate(&deffect->repairDate, &newFixDate);
    State newState = NEW;
    changeState(deffect, newState);

    insertDeffect(&sys->newDeffects, *queueTop(&sys->fixedDeffects), newState);
    // printf("Size = %d\n", sys->fixedDeffects.size);
    queuePop(&sys->fixedDeffects, FIXED);

    int choice = 0;

    do
    {
        system("cls");
        printf("\nThe deffect was returned to wait for repairing.\n");
        printf("1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        fixedDeffectsMenu(sys);
        break;
    case 2:
        return;
        break;
    }
}

void GENERATE_SYSTEM()
{
    System system;
    systemEmployeesConstructor(&system);
    systemDeffectsConstructor(&system);

    loadProgrammers(&system);
    loadTesters(&system);
    loadNewList(&system);

    mainMenu(&system);

    systemEmployeesDestructor(&system);
    systemDeffectsDestructor(&system);

    //_CrtDumpMemoryLeaks();
    printf("You exit the program!\n");
}
