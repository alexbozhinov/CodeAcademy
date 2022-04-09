#ifndef USERINTERFACE_H_INCLUDED
#define USERINTERFACE_H_INCLUDED

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
#include "system.h"
#include <stdlib.h>
#include <stdio.h>

//extern int id;

/*Functions, which represent the user interface*/

/*menu functions*/
void mainMenu(System *system); // a function that loads the main user interface page +

/**/ void newDeffectsMenu(System *system);             // a function that loads the newDeffects main page +
/******/ void addNewDeffectMenu(System *system);     // a function that allows the user to input new deffect +
/******/ void repairNewDeffectMenu(System *system);  // a function that allows a programmer to repair a deffect +
/******/ void importNewDeffectsMenu(System *system); // a function that imports the newDeffects elements in newDeffects.csv +
/******/ void removeNewDeffectMenu(System *system);  // a function that allows the user to remove a deffect from newdeffects +

/**/ void fixedDeffectsMenu(System *system);             // a function that loads the fixedDeffects main page +
/******/ void testFixedDeffectMenu(System *system);    // a function that allows a tester to test a deffect +
/******/ void importFixedDeffectsMenu(System *system); // a function that imports the fixedDeffects elements in fixedDeffects.csv +
/******/ void removeFixedDeffectMenu(System *system);  // a function that allows the user to remove a deffect from fixeddeffets +

/**/ void closedDeffectsMenu(System *system);             // a function that loads the closedDeffects main page +
/******/ void importClosedDeffectsMenu(System *system); // a function that imports the closedDeffects elements in closedDeffects.csv +
/******/ void removeClosedDeffectMenu(System *system);  // a function that allows the user to remove a deffect from closedDeffects +

/*print functions*/
void printProgrammersList(System *system);    //+
void printTestersList(System *system);        //+
void printNewDeffectsList(System *system);    //+
void printFixedDeffectsList(System *system);  //+
void printClosedDeffectsList(System *system); //+

void printMainMenu();           //+
void printNewDeffectsMenu();    //+
void printFixedDeffectsMenu();  //+
void printClosedDeffectsMenu(); //+

#endif