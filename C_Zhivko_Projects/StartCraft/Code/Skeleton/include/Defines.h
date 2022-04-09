#ifndef DEFINES_H_
#define DEFINES_H_

#include <stdio.h>
#include <stdlib.h>

#include <stddef.h>
#include <stdbool.h>
#include <string.h>

#include "Vector.h"
#include "ShipBase.h"

#include "TerranShip.h"
#include "ProtossShip.h"

#include "BattleCruser.h"
#include "Viking.h"
#include "Carrier.h"
#include "Phoenix.h"

#define FLEET_MAX_SIZE 50  // the maximum number of ships in each fleet

enum AirShipDefines // main ship data
{
  ATTACK_COUNTER_BEFORE_GAME_START = 0,
  TERRAN_SHIELD = 0,

  BATTLE_CRUSER_HEALTH = 450,
  BATTLE_CRUSER_DAMAGE = 40,

  VIKING_HEALTH = 150,
  VIKING_DAMAGE = 15,

  CARRIER_HEALTH = 200,
  CARRIER_SHIELD = 150,
  CARRIER_DAMAGE = 8,
  CARRIER_SHIELD_REGENERATE_RATE = 40,

  PHOENIX_HEALTH = 90,
  PHOENIX_SHIELD = 90,
  PHOENIX_DAMAGE = 20,
  PHOENIX_SHIELD_REGENERATE_RATE = 20,
};

enum AirShipType // the 4 ship types
{
  BATTLE_CRUSER = 0,
  VIKING = 1,
  CARRIER = 2,
  PHOENIX = 3,
};

enum AirShipFields // the data-fields each ship might have
{
  SHIP_TYPE = 0,
  HEALTH = 1,
  DAMAGE = 2,
  ATTACK_COUNTER = 3,
  SPECIAL_ATTACK = 4,
  SHIELD = 5,
  SHIELD_REGENARATE = 6,
  FULL_SHIELD = 7,
  INTERCEPTORS_COUNT = 8
};

enum ShipFieldsCount // the number of data-fields each ship have
{
  VIKING_FIELDS_COUNT = 5,
  BATTLE_CRUSER_FIELDS_COUNT = 5,
  CARRIER_FIELDS_COUNT = 9,
  PHOENIX_FIELDS_COUNT = 8
};

enum CarrierDefines // specific data for carrier ships
{
  MAX_INTERCEPTORS = 8,
  DAMAGED_STATUS_INTERCEPTORS = 4,
  CARRIER_SPECIAL_ATTACK = 0

};

enum BattleCruserDefines // specific data for battle cruser ship
{
  YAMATO_CANNON_LOADING_TURNS = 4,
  YAMATO_DAMAGE = 200,
  COUNTER_AFTER_YAMATO = -1,
};

enum VikingDefines // specific data for viking ship
{
  ATTACK_AGAINST_PHOENIX = 30
};

enum PhoenixDefines // specific data for phoenix ship
{
  PHOENIX_SPECIAL_ATTACK = 0 // phoneix type of ship does not have special attack, the value of it's data-field for special attack equals 0
};

extern const char *AirShipTypeStr; // lib of all possible ship types represented by one character

extern const char *GameMessages[]; // lib of all meassages the game could use/print

enum Messages // the index of each possible messages of the message lib
{
  BATTLE_CRUSER_KILL = 0,
  VIKING_KILL = 1,
  CARRIER_KILL = 2,
  PHOENIX_KILL = 3,
  LAST_TERRAN_SHIP = 4,
  LAST_PROTOSS_SHIP = 5,
  TERRAN_WIN = 6,
  PROTOSS_WIN = 7,
  INCORRECT_KILLER_TYPE = 8,
  INCORRECT_INPUT = 9,
};

#endif /* DEFINES_H_ */
