#include "../include/Phoenix.h"

void contructPhoenix(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack,
                     int shipShield, int shipShieldRegenarate, int shipFullShield)
{
    contructProtossShip(newShip, shipType, shipHealth, shipDamage, shipSpecialAttack, shipShield, shipShieldRegenarate, shipFullShield);
}

void phoenixAttack(int *currentPhoenixShip, int currentPhoenixShipID, Vector *terranFllet)
{
    damageFromProtossShip(vectorBack(terranFllet), currentPhoenixShip[DAMAGE]);

    if (isShipDestroyed(vectorBack(terranFllet)))
    {
        printKiller(currentPhoenixShip[SHIP_TYPE], currentPhoenixShipID, terranFllet->size - 1);
        vectorPop(terranFllet); // remove the destroyed ship from it's fleet
    }
}