#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include "Defines.h"

typedef struct
{
  Vector terranFleet;  // the fleet of all terran type ships
  Vector protossFleet; // the fleet of all protoss type ships
} BattleField;

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr);   // a function which generates the terran fleet, based on the user input
void generateProtossFleet(BattleField *battleField, const char *protossFleetStr); // a function which generates the protoss fleet, based on the user input

void startBattle(BattleField *battleField); // a function which simulates the battle between the two fleets, it finishes when one of the fleets is fully destroyed

void deinit(BattleField *battleField); // a function which frees the allocated memmory for the two fleets

bool processTerranTurn(BattleField *battleField);  // a function which represents the attacking turn of the terran fleet, returns true if the protoss fleet is destroyed
bool processProtossTurn(BattleField *battleField); // a function which represents the attacking turn of the protoss fleet, returns true if the terran fleet is destroyed

void EXECUTE_GAME(); // a function which executes the full game, it is the only function called in the main function of the project

#endif /* BATTLEFIELD_H_ */
