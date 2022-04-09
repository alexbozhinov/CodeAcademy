#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED

/*An enum, which represents the status of a deffect: new, fixed or closed*/

typedef enum
{
    NEW = 1,
    FIXED = 2,
    CLOSED = 3,
} State;

void printState(State state); // a function which prints the enum in words +

char *returnState(State state); // a function that returns the state of a deffect in string format +

#endif