#ifndef CONTESTANT_H_INCLUDED
#define CONTESTANT_H_INCLUDED

#include<stdio.h>
#include "myString.h"
#include "vector_i.h"

#define MAX_NAME_LENGTH 50


typedef struct {
    int id;
    String firstName;
    String secondName;
    String lastName;
    int rank;
    Vector_I points; 
    int totalPoints;
}Contestant;

Contestant createContestant(int id); //create contestant with given id
void contestantDestructor(Contestant* contestant); //free contestant memmory

void setNmaes(Contestant *contestant); //set the three names of the contestant, used only when testing from the console, not needed after reading data from file

void calculateTotal(Contestant* contestant); //calculate the total points of a contestant
void printContestant(Contestant* contestant); //print the full contestant data


#endif