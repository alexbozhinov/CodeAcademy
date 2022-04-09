#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED

#include <string.h>
#include "myString.h"
#include "vector_i.h"
#include "vector_c.h"
#include "contestant.h"

typedef struct
{
    int contestantsNumber;
    int criteriaNumber;
    Vector_C contestants; 
} Competition;

Competition createCompetition(int contestantNumber, int criteriaNumber); //a function to create competition with given number of contestants
void competitionDestructor(Competition *competition); //free competition memmory

int get_contestants();  //read the number of contestants from a file
int get_criteria(); //read the number of criteria from a file
void loadCompetition(Competition *competition); //read all contestants data from file

int comparator(const void *p, const void *q); //a comparator function, helping for qsort()
void sortContestants(Vector_C contestants); //sort contestants, based on their total points and cretiria priority

void setRank(Vector_C *contestants); //set the rank of each contestant after sorting

void importCompetition(Competition* competition);  //write the ranklist into a file

void GENERATE_COMPETITION();  //build the whole programm

#endif
