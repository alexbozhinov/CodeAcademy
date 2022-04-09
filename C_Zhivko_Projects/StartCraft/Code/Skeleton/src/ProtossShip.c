#include "../include/ProtossShip.h"

void contructProtossShip(int *newShip, int shipType, int shipHealth, int shipDamage,
                         int shipSpecialAttack, int shipShield, int shipShieldRegenarate, int shipFullShield)
{
    constructShip(newShip, shipType, shipHealth, shipDamage);
    newShip[SPECIAL_ATTACK] = shipSpecialAttack;
    newShip[SHIELD] = shipShield;
    newShip[SHIELD_REGENARATE] = shipShieldRegenarate;
    newShip[FULL_SHIELD] = shipFullShield;
}

void damageFromTerranShip(int *lastProtossShip, int damage)
{
    reduceShield(lastProtossShip, damage);
    reduceHealth(lastProtossShip);
}

bool isShieldDestroyed(int *lastProtossShip)
{
    return lastProtossShip[SHIELD] < 0;
}

void reduceShield(int *lastProtossShip, int damage)
{
    lastProtossShip[SHIELD] -= damage;
}

void reduceHealth(int *lastProtossShip)
{
    if (isShieldDestroyed(lastProtossShip))
    {
        lastProtossShip[HEALTH] += lastProtossShip[SHIELD];
        lastProtossShip[SHIELD] = 0;
    }
}

void regenerateShield(int *protossShip)
{
    protossShip[SHIELD] += protossShip[SHIELD_REGENARATE];
    if (protossShip[SHIELD] > protossShip[FULL_SHIELD]) // regenerate shield but not more than it's maximum value
    {
        protossShip[SHIELD] = protossShip[FULL_SHIELD];
    }
}