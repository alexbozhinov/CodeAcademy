#include "../lib/deffect.h"

Deffect deffectConstructor(int id)
{
    Deffect deffect;
    deffect.deffectId = id;
    setShortInformation(&deffect);
    setMainInformation(&deffect);
    setFindDate(&deffect);
    setRepairDate(&deffect);
    setCloseDate(&deffect);

    Employee programmer = employeeConstructor(1, 1);
    setProgrammer(&deffect, programmer);

    Employee tester = employeeConstructor(2, 2);

    setTester(&deffect, tester);
    setState(&deffect);

    return deffect;
}

void deffectDestructor(Deffect *deffect)
{
    stringDestructor(&deffect->shortInformation);
    stringDestructor(&deffect->mainInformation);
    // employeeDestructor(&deffect->programmer); // if they dissapear after removing
    // employeeDestructor(&deffect->tester);
}

void setShortInformation(Deffect *deffect)
{
    char shortInformation[MAX_SHORTINFO_LENGTH] = "";
    stringInput(shortInformation);
    String sh = stringConstructor(shortInformation);
    deffect->shortInformation = sh;
}

void setMainInformation(Deffect *deffect)
{
    char mainInformation[MAX_MAININFO_LENGTH] = "";
    stringInput(mainInformation);
    String ma = stringConstructor(mainInformation);
    deffect->mainInformation = ma;
}

void setFindDate(Deffect *deffect)
{
    Date date = {0, 0, 0};
    // inputDate(&date);
    deffect->findDate = date;
}
void setRepairDate(Deffect *deffect)
{
    Date date = {0, 0, 0};
    // inputDate(&date);
    deffect->repairDate = date;
}
void setCloseDate(Deffect *deffect)
{
    Date date = {0, 0, 0};
    // inputDate(&date);
    deffect->closeDate = date;
}

void setProgrammer(Deffect *deffect, Employee programmer)
{
    deffect->programmer = programmer;
}

void setTester(Deffect *deffect, Employee tester)
{
    deffect->tester = tester;
}

void setState(Deffect *deffect)
{
    deffect->state = NEW;
}

void changeState(Deffect *deffect, State newState)
{
    deffect->state = newState;
}

void printDeffect(Deffect *deffect)
{
    printf("\nDeffect Id: \t\t\t%d\n", deffect->deffectId);

    printf("\tShort information:\t");
    stringOutput(&deffect->shortInformation);
    printf("\n\tMain Information:\t");
    stringOutput(&deffect->mainInformation);

    printf("\n\tFind date: \t\t");
    printDate(&deffect->findDate);
    printf("\n\tRepair date: \t\t");
    printDate(&deffect->repairDate);
    printf("\n\tClose date: \t\t");
    printDate(&deffect->closeDate);

    printf("\n\tProgrammer: \t\t");
    printEmployee(&deffect->programmer);
    printf("\tTesteer: \t\t");
    printEmployee(&deffect->tester);

    printf("\tState: \t\t\t");
    printState(deffect->state);
    printf("\n");
}
