#include "../lib/userInterface.h"

/**print functions**/

static int id = 1010;

void printProgrammersList(System *system)
{
    printf("\n_____PROGRAMMERS_______________________________________________________________\n\n");
    for (int i = 0; i < system->programmers.size; i++)
    {

        printEmployee(&system->programmers.elements[i]);
    }

    printf("_______________________________________________________________________________\n\n");

    int choice = 0;

    do
    {

        printf("\n\n1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
        printf("\n");
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        mainMenu(system);
        break;
    case 2:
        return;
        break;
    }
}

void printTestersList(System *system)
{
    printf("\n_____TESTERS_______________________________________________________________\n\n");

    for (int i = 0; i < system->testers.size; i++)
    {

        printEmployee(&system->testers.elements[i]);
    }

    printf("___________________________________________________________________________\n\n");

    int choice = 0;

    do
    {
        printf("\n\n1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        mainMenu(system);
        break;
    case 2:
        return;
        break;
    }
}

void printNewDeffectsList(System *sys)
{
    system("cls");
    printf("_____NEW__DEFFECTS__________________________________\n\n");

    for (int i = 0; i < sys->newDeffects.size; i++)
    {

        printDeffect(&sys->newDeffects.elements[i]);
    }
}

void printFixedDeffectsList(System *sys)
{
    system("cls");
    printf("_____FIXED__DEFFECTS________________________________\n\n");

    for (int i = 0; i < sys->fixedDeffects.size; i++)
    {

        printDeffect(&sys->fixedDeffects.elements[i]);
    }
}

void printClosedDeffectsList(System *sys)
{
    system("cls");
    printf("_____CLOSED__DEFFECTS_______________________________\n\n");

    for (int i = 0; i < sys->closedDeffects.size; i++)
    {

        printDeffect(&sys->closedDeffects.elements[i]);
    }
}

void printMainMenu()
{
    system("CLS");
    printf("=======================\n");
    printf("||                   ||\n");
    printf("||  DEFFECTS SYSTEM  ||\n");
    printf("||                   ||\n");
    printf("=======================\n\n");

    printf("1. New Deffects List\n");
    printf("2. Fixed Deffects List\n");
    printf("3. Closed Deffects List\n");
    printf("4. List Of Programmers\n");
    printf("5. List Of Testers\n");
    printf("6. Exit\n\n");
}

void printNewDeffectsMenu()
{
    // system("CLS");
    printf("\n\n1. Add New Deffect\n");
    printf("2. Repair Deffect\n");
    printf("3. Import Deffects\n");
    printf("4. Remove Deffect\n");
    printf("5. Back\n");
    printf("6. Exit\n\n");
}

void printFixedDeffectsMenu()
{
    // system("CLS");
    printf("\n\n1. Test Deffect\n");
    printf("2. Import Deffects\n");
    printf("3. Remove Deffect\n");
    printf("4. Back\n");
    printf("5. Exit\n\n");
}

void printClosedDeffectsMenu()
{
    // system("CLS");
    printf("\n\n1. Import Deffects\n");
    printf("2. Remove Deffect\n");
    printf("3. Back\n");
    printf("4. Exit\n\n");
}

/**menu functions**/
void mainMenu(System *system) //+
{
    int choice = 0;

    do
    {
        printMainMenu();

        printf("Input choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            newDeffectsMenu(system); //+
            break;
        case 2:
            fixedDeffectsMenu(system); //+
            break;
        case 3:
            closedDeffectsMenu(system); //+
            break;
        case 4:
            printProgrammersList(system); //+
            break;
        case 5:
            printTestersList(system); //+
            break;
        case 6:
            return; //+
            break;
        default:
            printf("Undefined operation!\n");
        }
    } while (choice < 1 || choice > 6);
}

void newDeffectsMenu(System *system)
{

    int choice = 0;

    do
    {
        printNewDeffectsList(system);
        printNewDeffectsMenu();

        printf("Input choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addNewDeffectMenu(system);
            break;
        case 2:
            repairNewDeffectMenu(system);
            break;
        case 3:
            importNewDeffectsMenu(system);
            break;
        case 4:
            removeNewDeffectMenu(system);
            break;
        case 5:
            mainMenu(system);
            break;
        case 6:
            return;
            break;
        default:
            printf("Undefined operation!\n");
        }
    } while (choice < 1 || choice > 6);
}

void addNewDeffectMenu(System *sys)
{
    system("cls");

    // id = sys->newDeffects.elements[sys->newDeffects.size - 1].deffectId + 1;
    id++;
    Deffect newDeffect;
    newDeffect.deffectId = id;

    printf("Input short information: ");
    fflush(stdin);
    char shortI[100] = " ";
    stringInput(shortI);
    String sh = stringConstructor(shortI);
    newDeffect.shortInformation = sh;

    printf("Input main information: ");
    fflush(stdin);
    char mainI[1000] = " ";
    stringInput(mainI);
    String mh = stringConstructor(mainI);
    newDeffect.mainInformation = mh;

    printf("Input date of finding: ");
    fflush(stdin);
    char sDate[20] = " ";
    stringInput(sDate);
    inputDate(&newDeffect.findDate, sDate);
    inputDate(&newDeffect.repairDate, "undefined");
    inputDate(&newDeffect.closeDate, "undefined");

    printf("\n_____PROGRAMMERS_______________________________________________________________\n\n");
    for (int i = 0; i < sys->programmers.size; i++)
    {

        printEmployee(&sys->programmers.elements[i]);
    }
    printf("_______________________________________________________________________________\n\n");

    printf("Input programmer's id: ");
    fflush(stdin);
    int pId = 0;
    scanf("%d", &pId);

    int checkP = 0;
    for (int i = 0; i < sys->programmers.size; i++)
    {
        if (pId == sys->programmers.elements[i].employeeId)
        {
            newDeffect.programmer = sys->programmers.elements[i];
        }
        checkP++;
    }
    if (checkP == 5)
    {
        newDeffect.programmer = sys->programmers.elements[0];
    }

    printf("\n_____TESTERS_______________________________________________________________\n\n");

    for (int i = 0; i < sys->testers.size; i++)
    {

        printEmployee(&sys->testers.elements[i]);
    }
    printf("___________________________________________________________________________\n\n");

    printf("Input testers's id: ");
    fflush(stdin);
    int tId = 0;
    scanf("%d", &tId);

    int checkT = 0;
    for (int i = 0; i < sys->testers.size; i++)
    {
        if (tId == sys->testers.elements[i].employeeId)
        {
            newDeffect.tester = sys->testers.elements[i];
        }
        checkT++;
    }
    if (checkT == 5)
    {
        newDeffect.tester = sys->testers.elements[0];
    }
    newDeffect.state = NEW;
    insertDeffect(&sys->newDeffects, newDeffect, NEW);

    system("cls");
    int choice = 0;

    do
    {
        printf("New deffect added\n\n");
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

void repairNewDeffectMenu(System *sys)
{
    if (sys->newDeffects.size == 0)
    {
        newDeffectsMenu(sys);
        return;
    }

    int choice = 0;

    do
    {
        system("cls");
        printDeffect(queueTop(&sys->newDeffects));
        printf("\n1. Repaired\n");
        printf("2. Not Repaired\n");
        printf("3. Back\n");
        printf("4. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 4);

    switch (choice)
    {
    case 1:
        repairDeffect(sys, queueTop(&sys->newDeffects));
        break;
    case 2:
        notRepairedDeffect(sys, queueTop(&sys->newDeffects));
        break;
    case 3:
        newDeffectsMenu(sys);
        break;
    case 4:
        return;
        break;
    }
}

void importNewDeffectsMenu(System *sys)
{
    writeNewList(sys);

    int choice = 0;

    do
    {
        system("cls");
        printf("Deffects imported to newDeffects.csv\n");
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

void removeNewDeffectMenu(System *sys)
{

    if (sys->newDeffects.size == 0)
    {
        newDeffectsMenu(sys);
        return;
    }

    printNewDeffectsList(sys);

    printf("\n\nInput id of the deffect to remove or 0 to go back: ");
    int toRemoveId = 0;
    scanf("%d", &toRemoveId);

    if (toRemoveId == 0)
    {
        newDeffectsMenu(sys);
    }
    else
    {
        bool ifExist = FALSE;
        int removeIdx = -1;

        for (int i = 0; i < sys->newDeffects.size; i++)
        {
            if (toRemoveId == sys->newDeffects.elements[i].deffectId)
            {
                ifExist = TRUE;
                removeIdx = i;
                break;
            }
        }
        if (ifExist == TRUE)
        {
            deleteDeffect(&sys->newDeffects, sys->newDeffects.elements[removeIdx], NEW);
            // removeAtD(&sys->newDeffects, removeIdx);
            int choice = 0;
            do
            {
                system("cls");
                printf("Deffect was removed!\n");
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
        else
        {
            int choice = 0;
            do
            {
                system("cls");
                printf("The deffect with id %d does not exist!\n", toRemoveId);
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
    }
}

void fixedDeffectsMenu(System *system)
{
    int choice = 0;

    do
    {
        printFixedDeffectsList(system);
        printFixedDeffectsMenu();

        printf("Input choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            testFixedDeffectMenu(system);
            break;
        case 2:
            importFixedDeffectsMenu(system);

            break;
        case 3:
            removeFixedDeffectMenu(system);
            break;
        case 4:
            mainMenu(system);
            break;
        case 5:
            return;
            break;
        default:
            printf("Undefined operation!\n");
        }
    } while (choice < 1 || choice > 5);
}

void testFixedDeffectMenu(System *sys)
{
    if (sys->fixedDeffects.size == 0)
    {
        fixedDeffectsMenu(sys);
        return;
    }

    int choice = 0;

    do
    {
        system("cls");
        printDeffect(queueTop(&sys->fixedDeffects));
        printf("\n1. Verified\n");
        printf("2. Not Verified\n");
        printf("3. Back\n");
        printf("4. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 4);

    switch (choice)
    {
    case 1:
        verifyDeffect(sys, queueTop(&sys->fixedDeffects));
        break;
    case 2:
        notVerifyRepairedDeffect(sys, queueTop(&sys->fixedDeffects));
        break;
    case 3:
        fixedDeffectsMenu(sys);
        break;
    case 4:
        return;
        break;
    }
}

void importFixedDeffectsMenu(System *sys)
{
    writeRepairedList(sys);

    int choice = 0;

    do
    {
        system("cls");
        printf("Deffects imported to fixedDeffects.csv\n");
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

void removeFixedDeffectMenu(System *sys)
{
    if (sys->fixedDeffects.size == 0)
    {
        fixedDeffectsMenu(sys);
        return;
    }

    printFixedDeffectsList(sys);

    printf("\n\nInput id of the deffect to remove or 0 to go back: ");
    int toRemoveId = 0;
    scanf("%d", &toRemoveId);

    if (toRemoveId == 0)
    {
        fixedDeffectsMenu(sys);
    }
    else
    {
        bool ifExist = FALSE;
        int removeIdx = -1;

        for (int i = 0; i < sys->fixedDeffects.size; i++)
        {
            if (toRemoveId == sys->fixedDeffects.elements[i].deffectId)
            {
                ifExist = TRUE;
                removeIdx = i;
                break;
            }
        }
        if (ifExist == TRUE)
        {
            deleteDeffect(&sys->fixedDeffects, sys->fixedDeffects.elements[removeIdx], FIXED);

            // removeAtD(&sys->fixedDeffects, removeIdx);
            int choice = 0;
            do
            {
                system("cls");
                printf("Deffect was removed!\n");
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
        else
        {
            int choice = 0;
            do
            {
                system("cls");
                printf("The deffect with id %d does not exist!\n", toRemoveId);
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
    }
}

void closedDeffectsMenu(System *system)
{
    int choice = 0;

    do
    {
        printClosedDeffectsList(system);
        printClosedDeffectsMenu();

        printf("Input choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            importClosedDeffectsMenu(system);
            break;
        case 2:
            removeClosedDeffectMenu(system);
            break;
        case 3:
            mainMenu(system);
            break;
        case 4:
            return;
            break;
        default:
            printf("Undefined operation!\n");
        }
    } while (choice < 1 || choice > 5);
}

void importClosedDeffectsMenu(System *sys)
{
    writeClosedList(sys);

    int choice = 0;

    do
    {
        system("cls");
        printf("Deffects imported to closedDeffects.csv\n");
        printf("1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        closedDeffectsMenu(sys);
        break;
    case 2:
        return;
        break;
    }
}

void removeClosedDeffectMenu(System *sys)
{
    if (sys->closedDeffects.size == 0)
    {
        closedDeffectsMenu(sys);
        return;
    }

    printClosedDeffectsList(sys);

    printf("\n\nInput id of the deffect to remove or 0 to go back: ");
    int toRemoveId = 0;
    scanf("%d", &toRemoveId);

    if (toRemoveId == 0)
    {
        closedDeffectsMenu(sys);
    }
    else
    {
        bool ifExist = FALSE;
        int removeIdx = -1;

        for (int i = 0; i < sys->closedDeffects.size; i++)
        {
            if (toRemoveId == sys->closedDeffects.elements[i].deffectId)
            {
                ifExist = TRUE;
                removeIdx = i;
                break;
            }
        }
        if (ifExist == TRUE)
        {
            deleteDeffect(&sys->closedDeffects, sys->closedDeffects.elements[removeIdx], CLOSED);

            // removeAtD(&sys->fixedDeffects, removeIdx);
            int choice = 0;
            do
            {
                system("cls");
                printf("Deffect was removed!\n");
                printf("1. Back\n");
                printf("2. Exit\n");
                printf("\nInput choice: ");
                scanf("%d", &choice);
            } while (choice < 1 || choice > 2);

            switch (choice)
            {
            case 1:
                closedDeffectsMenu(sys);
                break;
            case 2:
                return;
                break;
            }
        }
        else
        {
            int choice = 0;
            do
            {
                system("cls");
                printf("The deffect with id %d does not exist!\n", toRemoveId);
                printf("1. Back\n");
                printf("2. Exit\n");
                printf("\nInput choice: ");
                scanf("%d", &choice);
            } while (choice < 1 || choice > 2);

            switch (choice)
            {
            case 1:
                closedDeffectsMenu(sys);
                break;
            case 2:
                return;
                break;
            }
        }
    }
}