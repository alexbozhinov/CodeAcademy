#include "../include/Viking.h"

void constructViking(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack)
{
    contructTerranShip(newShip, shipType, shipHealth, shipDamage, shipSpecialAttack);
}

void vikingAttack(int *currentVikingShip, int currentVikingShipID, Vector *protossFllet)
{
    if (vectorBack(protossFllet)[SHIP_TYPE] == PHOENIX) // special attack if the attacked target is Phoenix type of ship
    {
        damageFromTerranShip(vectorBack(protossFllet), ATTACK_AGAINST_PHOENIX);
    }
    else
    {
        damageFromTerranShip(vectorBack(protossFllet), currentVikingShip[DAMAGE]);
    }

    if (isShipDestroyed(vectorBack(protossFllet)))
    {
        printKiller(currentVikingShip[SHIP_TYPE], currentVikingShipID, protossFllet->size - 1);
        vectorPop(protossFllet); // remove the destroyed ship from it's fleet
    }
}