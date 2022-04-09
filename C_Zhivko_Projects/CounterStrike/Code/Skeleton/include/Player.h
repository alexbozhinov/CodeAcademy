#ifndef PLAYER_H_
#define PLAYER_H_

#include <stdbool.h>
#include <stdio.h>

#include "Pistol.h"
#include "Defines.h"

typedef struct Player Player;

struct Player
{
  PlayerVitalData playerData;
  Pistol pistol;
  int playerId;
};

void createPlayer(Player *player, int playerId);

void armorDamage(Player *attacker, Player *defender, double reducePercentage);
void healthDamage(Player *attacker, Player *defender, double reducePercentage);

bool isPlayerKilled(Player *player);
bool isArmorDestroyed(Player *player);

#endif /* PLAYER_H_ */