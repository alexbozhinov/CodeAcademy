#ifndef PROTOSS_SHIP_H_
#define PROTOSS_SHIP_H_

#include "Defines.h"

void contructProtossShip(int *newShip, int shipType, int shipHealth, int shipDamage,
                         int specialAttack, int shipShield, int shipShieldRegenarate, int shipFullShield); // a function which constructs a terran ship with
                                                                                                           // it's specific data

void damageFromTerranShip(int *lastProtossShip, int damage); // a functions that calculates the damage from a protoss ship to the fleet-latest terran ship

bool isShieldDestroyed(int *lastProtossShip); // a function which returns true if the shield-health of the attacked protoss ship has reached 0 or less

void reduceShield(int *lastProtossShip, int damage); // a functions that calculates the damage from a protoss ship to the fleet-latest terran ship's shield

void reduceHealth(int *lastProtossShip); // a functions that calculates the damage from a protoss ship to the fleet-latest terran ship's health

void regenerateShield(int *protossShip); // a function which calculates the regeneration of the shield of the given protoss shield

#endif /* PROTOSS_SHIP_H_ */