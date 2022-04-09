#ifndef USERINTERFACE_H_INCLUDED
#define USERINTERFACE_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include "boolean.h"
#include "myString.h"
#include "vector_c.h"
#include "vector_i.h"
#include "contestant.h"
#include "competition.h"

void mainMenu(Competition *competition); //executes the main menu of the program
void printMainMenu(Competition *competition);// prints the main menu options

void showRanklistMenu(Competition *comp); //show the ranklist of the competition in the console
void importRanklistMenu(Competition *comp);  //import the ranklist of the competition in file

#endif