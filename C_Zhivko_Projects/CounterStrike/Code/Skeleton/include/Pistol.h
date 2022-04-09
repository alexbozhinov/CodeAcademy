#ifndef PISTOL_H_
#define PISTOL_H_

#include "Defines.h"
#include "Player.h"

typedef struct Player Player;
typedef struct Pistol Pistol;

struct Pistol
{
  PistolType pistolType;
  int damagePerRound;
  int clipSize;
  int currClipBullets;
  int remainingAmmo;
  bool (*shoot)(Player *attacker, Player *enemy);
  void (*reload)(Pistol *pistol);
};

void createPistol(Player *player); 

#endif /* PISTOL_H_ */