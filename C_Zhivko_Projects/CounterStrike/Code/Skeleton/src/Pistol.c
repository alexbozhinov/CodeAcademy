#include <stdlib.h>
#include "Player.h"

/*function prototypes*/

static void setPistolType(Pistol *pistol, PistolType pistolType);
static void setPistolDamagePerRound(Pistol *pistol, int damagePerRound);
static void setPistolClipSize(Pistol *pistol, int pistolClipSize);
static void setPistolCurrClipBullets(Pistol *pistol, int currClipBullets);
static void setPistolRemainingAmmo(Pistol *pistol, int pistolRemainingAmmo);
static void setPistolMethods(Pistol *pistol);

static bool pistolClipHasRemainingBullets(Player *player);
static bool pistolHasReminingAmmo(Pistol *pistol);

static void loadBullet(Pistol *pistol);

static void reloadPistolClip(Pistol *pistol);

static void shootBullet(Player *player);
static bool pistolShoot(Player *attacker, Player *defender);
static bool desertEagleShoot(Player *attacker, Player *defender);
static bool glockShoot(Player *attacker, Player *defender);

/*function definitions*/

static void setPistolType(Pistol *pistol, PistolType pistolType)
{
  if (pistolType != GLOCK && pistolType != DESERT_EAGLE)
  {
    return;
  }
  pistol->pistolType = pistolType;
}

static void setPistolDamagePerRound(Pistol *pistol, int damagePerRound)
{
  if (damagePerRound < 0)
  {
    pistol->damagePerRound = 0;
    return;
  }
  pistol->damagePerRound = damagePerRound;
}

static void setPistolClipSize(Pistol *pistol, int pistolClipSize)
{
  if (pistolClipSize < 0)
  {
    pistol->clipSize = 0;
    return;
  }
  pistol->clipSize = pistolClipSize;
}

static void setPistolCurrClipBullets(Pistol *pistol, int currClipBullets)
{
  if (currClipBullets < 0)
  {
    pistol->currClipBullets = 0;
    return;
  }
  pistol->currClipBullets = currClipBullets;
}

static void setPistolRemainingAmmo(Pistol *pistol, int pistolRemainingAmmo)
{
  if (pistolRemainingAmmo < 0)
  {
    pistol->remainingAmmo = 0;
    return;
  }
  pistol->remainingAmmo = pistolRemainingAmmo;
}

static void setPistolMethods(Pistol *pistol)
{
  if (pistol->pistolType == GLOCK)
  {
    pistol->shoot = glockShoot;
  }
  else if (pistol->pistolType == DESERT_EAGLE)
  {
    pistol->shoot = desertEagleShoot;
  }

  pistol->reload = reloadPistolClip;
}

void createPistol(Player *player)
{
  int pistolId = 0;
  int pistolDamagePerRound = 0;
  int pistolClipSize = 0;
  int pistolRemainingAmmo = 0;

  scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize,
        &pistolRemainingAmmo);

  setPistolType(&player->pistol, pistolId);
  setPistolDamagePerRound(&player->pistol, pistolDamagePerRound);
  setPistolClipSize(&player->pistol, pistolClipSize);
  setPistolCurrClipBullets(&player->pistol, pistolClipSize);
  setPistolRemainingAmmo(&player->pistol, pistolRemainingAmmo);
  setPistolMethods(&player->pistol);
}

static bool pistolClipHasRemainingBullets(Player *player)
{
  if (player->pistol.currClipBullets > 0)
  {
    return true;
  }
  return false;
}

static bool pistolHasReminingAmmo(Pistol *pistol)
{
  if (pistol->remainingAmmo > 0)
  {
    return true;
  }
  else
  {
    printf("No ammo left\n");
    return false;
  }
}

static void loadBullet(Pistol *pistol)
{
  pistol->remainingAmmo--;
  pistol->currClipBullets++;
}

static void reloadPistolClip(Pistol *pistol)
{
  if (pistolHasReminingAmmo(pistol))
  {
    printf("Reloading...\n");

    for (int i = 0; i < pistol->clipSize; i++)
    {
      loadBullet(pistol);

      if (pistol->remainingAmmo == 0)
      {
        break;
      }
    }
    printf("currClipBullets: %d, remainingAmmo: %d\n", pistol->currClipBullets, pistol->remainingAmmo);
  }
}

static void shootBullet(Player *player)
{
  player->pistol.currClipBullets--;
}

static bool pistolShoot(Player *attacker, Player *defender)
{
  double pistolArmorDamage = 0.0;
  double pistolHealthDamage = 0.0;

  switch (attacker->pistol.pistolType)
  {
  case GLOCK:
    pistolArmorDamage = GLOCK_ARMOR_DAMAGE_PERCENTAGE;
    pistolHealthDamage = GLOCK_HEALTH_DAMAGE_PERCENTAGE;
    break;
  case DESERT_EAGLE:
    pistolArmorDamage = DESERT_EAGLE_ARMOR_DAMAGE_PERCENTAGE;
    pistolHealthDamage = DESERT_EAGLE_HEALTH_DAMAGE_PERCENTAGE;
    break;
  default:
    break;
  }

  if (pistolClipHasRemainingBullets(attacker))
  {
    if (!isArmorDestroyed(defender))
    {
      armorDamage(attacker, defender, pistolArmorDamage);
      healthDamage(attacker, defender, pistolHealthDamage);
    }
    else
    {
      healthDamage(attacker, defender, UNARMORED_DAMAGE_PERCENTAGE);
    }

    shootBullet(attacker);
    printf("Enemy left with: %d health and %d armor\n", defender->playerData.health, defender->playerData.armor);

    return true;
  }
  return false;
}

static bool desertEagleShoot(Player *attacker, Player *defender)
{
  if (pistolShoot(attacker, defender))
  {
    if (isPlayerKilled(defender))
    {
      return true;
    }
  }
  else
  {
    attacker->pistol.reload(&attacker->pistol);
  }
  return false;
}

static bool glockShoot(Player *attacker, Player *defender)
{
  for (int i = 0; i < ROUNDS_PER_FIRE; i++)
  {
    if (pistolShoot(attacker, defender))
    {
      if (isPlayerKilled(defender))
      {
        return true;
      }
    }
    else
    {
      attacker->pistol.reload(&attacker->pistol);
      break;
    }
  }
  return false;
}
