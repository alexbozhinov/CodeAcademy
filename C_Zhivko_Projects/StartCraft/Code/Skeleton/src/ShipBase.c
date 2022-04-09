#include "../include/ShipBase.h"

const char *GameMessages[] = { // the deffinition of the game message list
    "BattleCruser with ID: %d killed enemy airship with ID: %d\n",
    "Viking with ID: %d killed enemy airship with ID: %d\n",
    "Carrier with ID: %d killed enemy airship with ID: %d\n",
    "Phoenix with ID: %d killed enemy airship with ID: %d\n",
    "Last Terran AirShip with ID: %d has %d health left\n",
    "Last Protoss AirShip with ID: %d has %d health and %d shield left\n",
    "TERRAN has won!\n",
    "PROTOSS has won!\n",
    "Incorrect killerType!\n",
    "Incorrect input!\n"};

void printLastFleetShip(int type, int id, int health, int shield)
{
    if (type == BATTLE_CRUSER || type == VIKING)
    {
        printf(GameMessages[LAST_TERRAN_SHIP], id, health);
    }
    else if (type == CARRIER || type == PHOENIX)
    {
        printf(GameMessages[LAST_PROTOSS_SHIP], id, health, shield);
    }
}

void constructShip(int *newShip, int shipType, int shipHealth, int shipDamage)
{
    newShip[SHIP_TYPE] = shipType;
    newShip[HEALTH] = shipHealth;
    newShip[DAMAGE] = shipDamage;
    newShip[ATTACK_COUNTER] = ATTACK_COUNTER_BEFORE_GAME_START;
}

bool isShipDestroyed(int *ship)
{
    return ship[HEALTH] <= 0;
}

void printKiller(int killerType, int killerId, int destroyedId)
{
    switch (killerType)
    {
    case BATTLE_CRUSER:
        printf(GameMessages[BATTLE_CRUSER_KILL], killerId, destroyedId);
        break;
    case VIKING:
        printf(GameMessages[VIKING_KILL], killerId, destroyedId);
        break;
    case CARRIER:
        printf(GameMessages[CARRIER_KILL], killerId, destroyedId);
        break;
    case PHOENIX:
        printf(GameMessages[PHOENIX_KILL], killerId, destroyedId);
        break;
    default:
        printf(GameMessages[INCORRECT_KILLER_TYPE]);
        break;
    }
}

void printGameWinner(int fleetWinnerType)
{
    if (fleetWinnerType == BATTLE_CRUSER || fleetWinnerType == VIKING)
    {
        printf(GameMessages[TERRAN_WIN]);
    }
    else if (fleetWinnerType == CARRIER || fleetWinnerType == PHOENIX)
    {
        printf(GameMessages[PROTOSS_WIN]);
    }
    else
    {
        printf(GameMessages[INCORRECT_INPUT]);
    }
}

void freeFleet(Vector *fleet)
{
    int *shipToDestroy;

    for (size_t i = 0; i < fleet->capacity; i++) // iterate the full allocated memory
    {
        shipToDestroy = fleet->items[i]; // define int* to be frred
        if (shipToDestroy != NULL)       // if it is still not freed
        {
            free(shipToDestroy);
        }
    }
}