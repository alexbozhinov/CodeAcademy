#include "../include/BattleCruser.h"

void constructBattleCruser(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack)
{
    contructTerranShip(newShip, shipType, shipHealth, shipDamage, shipSpecialAttack);
}

void battleCruserAttack(int *currentBattleCruserShip, int currentBattleCruserShipID, Vector *protossFllet)
{
    if (currentBattleCruserShip[ATTACK_COUNTER] == YAMATO_CANNON_LOADING_TURNS) // on each 5-th turn use special attack YAMATO  // we could have made it with %4
    {
        damageFromTerranShip(vectorBack(protossFllet), YAMATO_DAMAGE);
        currentBattleCruserShip[ATTACK_COUNTER] = COUNTER_AFTER_YAMATO; // after YAMATO attack, start counting attack turns again, from -1 because
    }                                                                   // counter includes the YAMATO attack itself
    else
    {
        damageFromTerranShip(vectorBack(protossFllet), currentBattleCruserShip[DAMAGE]);
    }

    if (isShipDestroyed(vectorBack(protossFllet)))
    {
        printKiller(currentBattleCruserShip[SHIP_TYPE], currentBattleCruserShipID, protossFllet->size - 1);
        vectorPop(protossFllet); // remove the destroyed ship from it's fleet
    }
}