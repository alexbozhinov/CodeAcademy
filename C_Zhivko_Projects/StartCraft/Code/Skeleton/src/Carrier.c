#include "../include/Carrier.h"

void contructCarrier(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack,
                     int shipShield, int shipShieldRegenarate, int shipFullShield)
{
    contructProtossShip(newShip, shipType, shipHealth, shipDamage, shipSpecialAttack, shipShield, shipShieldRegenarate, shipFullShield);
    newShip[INTERCEPTORS_COUNT] = MAX_INTERCEPTORS; // at the beggining always 8
}

void carrierAttack(int *currentCarrierShip, int currentCarrierShipID, Vector *terranFllet)
{
    reduceInterceptors(currentCarrierShip); // before attack check the health and if it is < 0 reduce interceptors

    for (int i = 0; i < currentCarrierShip[INTERCEPTORS_COUNT]; i++)
    {

        damageFromProtossShip(vectorBack(terranFllet), currentCarrierShip[DAMAGE]); // attack the last terran ship

        if (isShipDestroyed(vectorBack(terranFllet)))
        {
            printKiller(currentCarrierShip[SHIP_TYPE], currentCarrierShipID, terranFllet->size - 1);
            vectorPop(terranFllet); // remove the destroyed ship fro it's fleet
        }

        if (vectorIsEmpty(terranFllet)) // stop game if the terran fleet is destroyed before the end of the current carrier ship attack turn
        {
            break;
        }
    }
}

void reduceInterceptors(int *carrierShip)
{
    if (carrierShip[HEALTH] < CARRIER_HEALTH)
    {
        carrierShip[INTERCEPTORS_COUNT] = DAMAGED_STATUS_INTERCEPTORS; // reduce the number of interceptors to 4
    }
}