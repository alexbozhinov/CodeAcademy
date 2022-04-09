#include "../include/TerranShip.h"

void contructTerranShip(int *newShip, int shipType, int shipHealth, int shipDamage, int shipSpecialAttack)
{
    constructShip(newShip, shipType, shipHealth, shipDamage);
    newShip[SPECIAL_ATTACK] = shipSpecialAttack;
}

void damageFromProtossShip(int *lastTerranShip, int damage)
{
    lastTerranShip[HEALTH] -= damage;
}