#ifndef SYSTEM_H_INCLUDED
#define SYSTEM_H_INCLUDED

#define EMPLOYEE_MAX_SIZE 5
#define DEFFECTS_FIRST_SIZE 10

#include "boolean.h"
#include "position.h"
#include "state.h"
#include "myString.h"
#include "date.h"
#include "employee.h"
#include "deffect.h"
#include "vector_d.h"
#include "vector_e.h"
#include "priority_queue.h"
#include <stdlib.h>
#include <stdio.h>

/*The main struct of the project, which represents system type with vectors of all: deffects and employees*/

typedef struct
{
    Vector_D newDeffects;
    Vector_D fixedDeffects;
    Vector_D closedDeffects;
    Vector_E programmers;
    Vector_E testers;
} System;

void systemDeffectsConstructor(System *system);  // a function which constructs the three Vecvtor_D of the system +
void systemEmployeesConstructor(System *system); // a function which constructs the two Vector_E of the system +
void systemDeffectsDestructor(System *system);   // a function which destructs and frees the memory from the three Vector_D of the system +
void systemEmployeesDestructor(System *system);  // a function which destructs and frees the memory from the two Vector_E of the system ++

void loadNewList(System *system);     // a function which reads the deffects.csv file and builds the newDeffects vector +
void loadProgrammers(System *system); // a function which reads the employees.csv file and builds the programmers vector +
void loadTesters(System *system);     // a function which reads the employees.csv file and builds the testers vector +

void writeNewList(System *system);      // a function which writes the newDeffects vector in the newDeffects.csv file +
void writeRepairedList(System *system); // a function which writes the newDeffects vector in the fixedDeffects.csv file +
void writeClosedList(System *system);   // a function which writes the newDeffects vector in the closedDeffects.csv file +

void repairDeffect(System *system, Deffect *deffect);   // a function where a programmer repairs a deffect and changes it's state frpm new to fixed +
void notRepairedDeffect(System *sys, Deffect *deffect); // a function where a programmer couldn't repair the deffect and inputs new finding date +

void verifyDeffect(System *system, Deffect *deffect);            // a function where a tester tests a deffect and changes it's state from fixed to closed +
void notVerifyRepairedDeffect(System *system, Deffect *deffect); // a function where a tester finds new problem and the deffects goes back to newDeffects vector +

void GENERATE_SYSTEM(); // a function where the program is builded, call it in the main function +
#endif
