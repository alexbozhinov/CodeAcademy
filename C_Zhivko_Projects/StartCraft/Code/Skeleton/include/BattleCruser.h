#ifndef BATTLE_CRUSER_H_
#define BATTLE_CRUSER_H_

#include "Defines.h"

void constructBattleCruser(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack); // a function which constructs a terran type ship
                                                                                                               // Battle Cruser with it's specific data

void battleCruserAttack(int *currentBattleCruserShip, int currentBattleCruserShipID, Vector *protossFllet); // a function which represents the attacking turn of a Battle Cruser ship

#endif /* BATTLE_CRUSER_H_ */