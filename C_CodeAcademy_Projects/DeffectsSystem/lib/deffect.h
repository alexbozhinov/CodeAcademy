#ifndef DEFFECT_H_INCLUDED
#define DEFFECT_H_INCLUDED

#define MAX_SHORTINFO_LENGTH 100
#define MAX_MAININFO_LENGTH 1000

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myString.h"
#include "date.h"
#include "employee.h"
#include "state.h"

/*A struct, which represents deffect type with: id, short information, main information, date of finding, date of repairing, date of closing, programmer, tester, state.*/

typedef struct
{
    int deffectId;
    String shortInformation;
    String mainInformation;
    Date findDate;
    Date repairDate;
    Date closeDate;
    Employee programmer;
    Employee tester;
    State state;
} Deffect;

Deffect deffectConstructor(int id); // a function that recieves id and constructs a deffect whit the same id +

void deffectDestructor(Deffect *deffect); // a function that destructs and frees memory of a deffect +

void setShortInformation(Deffect *deffect);                // set function for the short information field of the deffect +
void setMainInformation(Deffect *deffect);                 // set function for the main information field of the deffect +
void setFindDate(Deffect *deffect);                        // set function for the deffect's date of finding +
void setRepairDate(Deffect *deffect);                      // set function for the deffect's date of repairing +
void setCloseDate(Deffect *deffect);                       // set function for the deffect's date of closing +
void setProgrammer(Deffect *deffect, Employee programmer); // set function for the deffect's programer +
void setTester(Deffect *deffect, Employee tester);         // set function for the deffect's tester +
void setState(Deffect *deffect);                           // set function for the deffect's state +

void changeState(Deffect *deffect, State newState); // function that changes the deffect's state +

void printDeffect(Deffect *deffect); // print function for a deffect +

#endif