#ifndef VIKING_H_
#define VIKING_H_

#include "Defines.h"

void constructViking(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack); // a function which constructs a terran type ship
                                                                                                         // Viking with it's specific data

void vikingAttack(int *currentVikingShip, int currentVikingShipID, Vector *protossFllet); // a function which represents the attacking turn of a Viking ship

#endif /* VIKING_H_ */