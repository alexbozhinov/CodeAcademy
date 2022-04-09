#ifndef PHOENIX_H_
#define PHOENIX_H_

#include "Defines.h"

void contructPhoenix(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack, // a function which constructs a protoss type ship
                     int shipShield, int shipShieldRegenarate, int shipFullShield);                     // Phoenix with it's specific data

void phoenixAttack(int *currentPhoenixShip, int currentPhoenixShipID, Vector *terranFllet); // a function which represents the attacking turn of a Phoenix ship

#endif /* PHOENIX_H_ */