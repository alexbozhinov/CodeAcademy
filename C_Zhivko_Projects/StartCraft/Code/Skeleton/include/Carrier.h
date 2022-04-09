#ifndef CARRIER_H_
#define CARRIER_H_

#include "Defines.h"

void contructCarrier(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack, // a function which constructs a protoss type ship
                     int shipShield, int shipShieldRegenarate, int shipFullShield);                     // Carrier with it's specific data

void carrierAttack(int *currentCarrierShip, int currentCarrierShipID, Vector *terranFllet); // a function which represents the attacking turn of a Carrier ship

void reduceInterceptors(int *carrierShip); // a function which reduces the number of interceptors of the given Carrier ship if it's health is less than it's max value

#endif /* CARRIER_H_ */