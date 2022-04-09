#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

/*An enum, which represents a position with two options: programmer and tester*/

typedef enum
{
    PROGRAMMER = 1,
    TESTER = 2,
} Position;

void printPosition(Position pos); // print function for position's constants in string +

char *returnPosition(Position pos); // returns the position in string format +

#endif
