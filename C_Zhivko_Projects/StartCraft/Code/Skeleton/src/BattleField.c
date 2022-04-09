#include "../include/BattleField.h"

const char *AirShipTypeStr = "bvcp";

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr)
{
  vectorInit(&battleField->terranFleet, strlen(terranFleetStr)); // strlen() returns the size of the fleet, given from the user input

  int *newShip;

  for (size_t i = 0; i < battleField->terranFleet.capacity; i++)
  {
    if (terranFleetStr[i] == AirShipTypeStr[BATTLE_CRUSER])
    {
      newShip = malloc(BATTLE_CRUSER_FIELDS_COUNT * sizeof(int)); // allocates memmory for all data-fields of the ship-type
      constructBattleCruser(newShip, BATTLE_CRUSER, BATTLE_CRUSER_HEALTH,
                            BATTLE_CRUSER_DAMAGE, YAMATO_DAMAGE);
      vectorPush(&battleField->terranFleet, newShip);
    }

    else if (terranFleetStr[i] == AirShipTypeStr[VIKING])
    {
      newShip = malloc(VIKING_FIELDS_COUNT * sizeof(int)); // allocates memmory for all data-fields of the ship-type
      constructViking(newShip, VIKING, VIKING_HEALTH, VIKING_DAMAGE, ATTACK_AGAINST_PHOENIX);
      vectorPush(&battleField->terranFleet, newShip);
    }

    else
    {
      printf(GameMessages[INCORRECT_INPUT]); // incorrect input message
      break;
    }
  }
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr)
{
  vectorInit(&battleField->protossFleet, strlen(protossFleetStr)); // strlen() returns the size of the fleet, given from the user input

  int *newShip;

  for (size_t i = 0; i < battleField->protossFleet.capacity; i++)
  {
    if (protossFleetStr[i] == AirShipTypeStr[CARRIER])
    {
      newShip = malloc(CARRIER_FIELDS_COUNT * sizeof(int)); // allocates memmory for all data-fields of the ship-type
      contructCarrier(newShip, CARRIER, CARRIER_HEALTH, CARRIER_DAMAGE, CARRIER_SPECIAL_ATTACK,
                      CARRIER_SHIELD, CARRIER_SHIELD_REGENERATE_RATE, CARRIER_SHIELD);
      vectorPush(&battleField->protossFleet, newShip);
    }

    else if (protossFleetStr[i] == AirShipTypeStr[PHOENIX])
    {
      newShip = malloc(PHOENIX_FIELDS_COUNT * sizeof(int)); // allocates memmory for all data-fields of the ship-type
      contructPhoenix(newShip, PHOENIX, PHOENIX_HEALTH, PHOENIX_DAMAGE, PHOENIX_SPECIAL_ATTACK,
                      PHOENIX_SHIELD, PHOENIX_SHIELD_REGENERATE_RATE, PHOENIX_SHIELD);
      vectorPush(&battleField->protossFleet, newShip);
    }

    else
    {
      printf(GameMessages[INCORRECT_INPUT]); // incorrect input message
      break;
    }
  }
}

void startBattle(BattleField *battleField)
{
  while (vectorIsEmpty(&battleField->terranFleet) == false && vectorIsEmpty(&battleField->protossFleet) == false) // the battle continues
  {                                                                                                               // untill one of the fleets is destroyed
    if (processTerranTurn(battleField) == true)
    {
      printGameWinner(vectorBack(&battleField->terranFleet)[SHIP_TYPE]); // winner message
      break;
    }

    if (processProtossTurn(battleField) == true)
    {
      printGameWinner(vectorBack(&battleField->protossFleet)[SHIP_TYPE]); // winner message
      break;
    }
  }
}

void deinit(BattleField *battleField)
{
  freeFleet(&battleField->terranFleet); /*free ships*/
  freeFleet(&battleField->protossFleet);

  vectorFree(&battleField->terranFleet); /*free fleets's vector*/
  vectorFree(&battleField->protossFleet);
}

bool processTerranTurn(BattleField *battleField)
{
  int *currentTerranShip;

  for (size_t i = 0; i < vectorGetSize(&battleField->terranFleet); i++)
  {
    currentTerranShip = vectorGet(&battleField->terranFleet, i);

    switch (currentTerranShip[SHIP_TYPE])
    {
    case VIKING:
      vikingAttack(currentTerranShip, i, &battleField->protossFleet);
      break;
    case BATTLE_CRUSER:
      battleCruserAttack(currentTerranShip, i, &battleField->protossFleet);
      currentTerranShip[ATTACK_COUNTER]++; // increase number of attacks
      break;
    }

    if (vectorIsEmpty(&battleField->protossFleet)) // if the protoss ship is destroyed
    {
      return true;
    }
  }

  printLastFleetShip(vectorBack(&battleField->protossFleet)[SHIP_TYPE], // last fleet ship message
                     vectorGetSize(&battleField->protossFleet) - 1,
                     vectorBack(&battleField->protossFleet)[HEALTH],
                     vectorBack(&battleField->protossFleet)[SHIELD]);

  return false;
}

bool processProtossTurn(BattleField *battleField)
{
  int *currentProtossShip;

  for (size_t i = 0; i < vectorGetSize(&battleField->protossFleet); i++)
  {
    currentProtossShip = vectorGet(&battleField->protossFleet, i);
    regenerateShield(currentProtossShip); // on each turn of a protoss ship regenerate it's shield-health

    switch (currentProtossShip[SHIP_TYPE])
    {
    case CARRIER:
      carrierAttack(currentProtossShip, i, &battleField->terranFleet);
      break;
    case PHOENIX:
      phoenixAttack(currentProtossShip, i, &battleField->terranFleet);
      break;
    }

    if (vectorIsEmpty(&battleField->terranFleet)) // if the terran fleet is destroyed
    {
      return true;
    }
  }

  printLastFleetShip(vectorBack(&battleField->terranFleet)[SHIP_TYPE], // last fleet ship message
                     vectorGetSize(&battleField->terranFleet) - 1,
                     vectorBack(&battleField->terranFleet)[HEALTH],
                     TERRAN_SHIELD); // the shield-health of each terran ship is always 0, because they do not have any shields

  return false;
}

void EXECUTE_GAME()
{
  char terranFleet[FLEET_MAX_SIZE]; /*user input represented as sequence of letters - each for one of the ship types*/
  char protossFleet[FLEET_MAX_SIZE];

  scanf("%s %s", terranFleet, protossFleet); // user input from the console

  BattleField battleField; // declare games's battle field

  generateTerranFleet(&battleField, terranFleet);   // generate the terran fleet
  generateProtossFleet(&battleField, protossFleet); // generate the protoss fleet

  startBattle(&battleField); // simulate the battle between the two fleets

  deinit(&battleField); // free all allocated memory
}