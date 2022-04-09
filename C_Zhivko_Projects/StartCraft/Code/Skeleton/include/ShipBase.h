#ifndef SHIP_BASE_H_
#define SHIP_BASE_H_

#include "Defines.h"

void constructShip(int *newShip, int shipType, int shipHealth, int shipDamage); // a function which constructs a ship which has type, health and attack-damage

bool isShipDestroyed(int *ship); // a function which returns true if the health of the given ship is 0

void printKiller(int killerType, int killerId, int destroyedId); // a function which prints the killer, when a ship of the attacking fleet destroys a ship from the deffending fleet

void freeFleet(Vector *fleet); // a function which frees rhe allocated memmory for each ship of the given fleet

void printLastFleetShip(int type, int id, int health, int shield); // a functions which prints the last ship of a fleet

void printGameWinner(int fleetWinnerType); // a function which prints the winner fleet

#endif /* SHIP_BASE_H_ */