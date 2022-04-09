#include <stdlib.h>
#include "BattleField.h"

int main()
{
  BattleField battleField;

  createBattleField(&battleField);
  battleField.start(&battleField);
  freeBattleField(&battleField);

  return EXIT_SUCCESS;
}