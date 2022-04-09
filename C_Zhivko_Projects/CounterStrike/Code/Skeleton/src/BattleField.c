#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "BattleField.h"
#include "Player.h"

/*function prototypes*/

static void createTerroristTeam(BattleField *battleField);
static void createCounterTerroristsTeam(BattleField *battleField);
static void buyPistols(BattleField *battleField);

static bool nextGameTeamTurn(Vector *attackingTeam, Vector *defendingTeam);

static void freeGameTeam(Vector *team);

/*function definitions*/

void handleNoMemory(int sig)
{
  if (sig == SIGSEGV)
  {
    perror("Couldn't allocate or access memory\n");
    exit(SIGSEGV);
  }
}

static void createTerroristTeam(BattleField *battleField)
{
  vectorInit(&battleField->terroristsTeam, TEAM_START_SIZE);

  int terroristId = TERRORISTS_FIRST_PLAYER_ID;

  for (int i = 0; i < TEAM_START_SIZE; i++)
  {
    Player *newTerrorist = malloc(sizeof(Player));
    IS_MEM_VALID(newTerrorist);

    createPlayer(newTerrorist, terroristId);
    vectorPush(&battleField->terroristsTeam, newTerrorist);
    terroristId += PLAYER_ID_ADDEND;
  }
}

static void createCounterTerroristsTeam(BattleField *battleField)
{
  vectorInit(&battleField->counterTerroristsTeam, TEAM_START_SIZE);

  int counterTerroristId = COUNTERTERRORISTS_FIRST_PLAYER_ID;

  for (int i = 0; i < TEAM_START_SIZE; i++)
  {
    Player *newCounterTerrorist = malloc(sizeof(Player));
    IS_MEM_VALID(newCounterTerrorist)

    createPlayer(newCounterTerrorist, counterTerroristId);
    vectorPush(&battleField->counterTerroristsTeam, newCounterTerrorist);
    counterTerroristId += PLAYER_ID_ADDEND;
  }
}

static void buyPistols(BattleField *battleField)
{
  for (int i = 0; i < TEAM_START_SIZE; i++)
  {
    createPistol(vectorGet(&battleField->terroristsTeam, i));
    createPistol(vectorGet(&battleField->counterTerroristsTeam, i));
  }
}

void createBattleField(BattleField *battleField)
{
  createTerroristTeam(battleField);
  createCounterTerroristsTeam(battleField);

  buyPistols(battleField);

  battleField->start = startBattle;
}

static bool nextGameTeamTurn(Vector *attackingTeam, Vector *defendingTeam)
{
  Player *attacker;
  Player *defender;

  int teamOnTurnSize = vectorGetSize(attackingTeam);

  for (int i = 0; i < teamOnTurnSize; i++)
  {
    attacker = vectorGet(attackingTeam, i);
    defender = vectorBack(defendingTeam);

    printf("\nPlayerID %d turn:\n", attacker->playerId);

    if (attacker->pistol.shoot(attacker, defender))
    {
      free(vectorBack(defendingTeam));
      vectorPop(defendingTeam);
    }

    if (vectorIsEmpty(defendingTeam))
    {
      printf("\nPlayer with ID: %d wins!\n", attacker->playerId);
      return true;
    }
  }
  return false;
}

void startBattle(BattleField *battleField)
{
  while (vectorIsEmpty(&battleField->terroristsTeam) == false && vectorIsEmpty(&battleField->counterTerroristsTeam) == false)
  {
    if (nextGameTeamTurn(&battleField->terroristsTeam, &battleField->counterTerroristsTeam))
    {
      // terrorists win!
      break;
    }
    if (nextGameTeamTurn(&battleField->counterTerroristsTeam, &battleField->terroristsTeam))
    {
      // counterterrorist win!
      break;
    }
  }
}

static void freeGameTeam(Vector *team)
{
  while (!vectorIsEmpty(team))
  {
    free(vectorBack(team));
    vectorPop(team);
  }
}

void freeBattleField(BattleField *battleField)
{
  freeGameTeam(&battleField->terroristsTeam);
  freeGameTeam(&battleField->counterTerroristsTeam);

  vectorFree(&battleField->terroristsTeam);
  vectorFree(&battleField->counterTerroristsTeam);
}