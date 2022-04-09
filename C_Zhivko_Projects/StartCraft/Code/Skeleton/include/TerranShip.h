#ifndef TERRAN_SHIP_H_
#define TERRAN_SHIP_H_

#include "Defines.h"

void contructTerranShip(int *newShip, int shipType, int shipHealth, int shipDamage, int specialAttack); // a function which constructs a terran ship with
                                                                                                        // it's specific data

void damageFromProtossShip(int *lastTerranShip, int damage); // a functions that calculates the damage from a protoss ship to the fleet-latest terran ship

#endif /* TERRAN_SHIP_H_ */