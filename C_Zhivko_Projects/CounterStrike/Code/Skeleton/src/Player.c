#include <stdlib.h>
#include "Player.h"

/*function prototypes*/

static void setPlayerHealth(Player *player, int health);
static void setPlayerArmor(Player *player, int armor);
static void setPlayerId(Player *player, int playerId);

static void redirectDamage(Player *player);

/*function definitions*/

static void setPlayerHealth(Player *player, int health)
{
  if (health < 0)
  {
    player->playerData.health = 0;
    return;
  }
  player->playerData.health = health;
}

static void setPlayerArmor(Player *player, int armor)
{
  if (armor < 0)
  {
    player->playerData.armor = 0;
    return;
  }
  player->playerData.armor = armor;
}

static void setPlayerId(Player *player, int playerId)
{
  if (playerId < 0)
  {
    return;
  }
  player->playerId = playerId;
}

void createPlayer(Player *player, int playerId)
{
  int playerHealth = 0;
  int playerArmor = 0;

  scanf("%d %d", &playerHealth, &playerArmor);
  setPlayerHealth(player, playerHealth);
  setPlayerArmor(player, playerArmor);
  setPlayerId(player, playerId);
}

static void redirectDamage(Player *player)
{
  if (player->playerData.armor < 0)
  {
    player->playerData.health += player->playerData.armor;
    player->playerData.armor = 0;
  }
}

void armorDamage(Player *attacker, Player *defender, double reducePercentage)
{
  int damage = attacker->pistol.damagePerRound * reducePercentage;

  defender->playerData.armor -= damage;

  redirectDamage(defender);
}

void healthDamage(Player *attacker, Player *defender, double reducePercentage)
{
  int damage = attacker->pistol.damagePerRound * reducePercentage;
  defender->playerData.health -= damage;
}

bool isArmorDestroyed(Player *player)
{
  if (player->playerData.armor > 0)
  {
    return false;
  }
  return true;
}

bool isPlayerKilled(Player *player)
{
  if (player->playerData.health <= 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}