#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include <signal.h>
#include "Vector.h"

#define IS_MEM_VALID(ptr)    \
  if ((ptr) == NULL)         \
  {                          \
    handleNoMemory(SIGSEGV); \
  }

typedef struct BattleField BattleField;

struct BattleField
{
  Vector terroristsTeam;
  Vector counterTerroristsTeam;
  void (*start)(BattleField *battleField);
};

void handleNoMemory(int sig);

void createBattleField(BattleField *battleField);

void startBattle(BattleField *battleField);

void freeBattleField(BattleField *battleField);

#endif /* BATTLEFIELD_H_ */