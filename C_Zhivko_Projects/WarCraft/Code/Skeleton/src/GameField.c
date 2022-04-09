#include <stdio.h>
#include "GameField.h"

static void generateHeroes(ArchMage *archMage, Hero *deathKnight, Hero *drawRanger);
static void startGame(ArchMage *archMage, Hero *deathKnight, Hero *drawRanger);

static void generateHeroes(ArchMage *archMage, Hero *deathKnight, Hero *drawRanger)
{
    char name[MAX_HERO_NAME_SIZE + 1];
    int maxMana = 0;
    int baseManaRegenRate = 0;
    int manaRegenModifier = 0;

    // read Archmage data
    scanf("%s %d %d %d", name, &maxMana, &baseManaRegenRate, &manaRegenModifier);
    constructArchMage(archMage, name, maxMana, baseManaRegenRate, manaRegenModifier);

    // read Death Knight data
    scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
    constructHero(deathKnight, DEATH_KNIGHT, name, maxMana, baseManaRegenRate);

    // read Draw Ranger data
    scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
    constructHero(drawRanger, DRAW_RANGER, name, maxMana, baseManaRegenRate);
}

static void startGame(ArchMage *archMage, Hero *deathKnight, Hero *drawRanger)
{
    int commandsCount = 0;
    int currAction = 0;

    scanf("%d", &commandsCount);

    void (*action)(Hero * hero, int heroType) = NULL;

    for (int i = 0; i < commandsCount; ++i)
    {
        scanf("%d", &currAction);
        
        if (currAction == CAST_BASIC_SPELL)
        {
            action = chooseAction(CAST_BASIC_SPELL);
            executeAction(action, &archMage->hero, ARCH_MAGE);
            executeAction(action, deathKnight, DEATH_KNIGHT);
            executeAction(action, drawRanger, DRAW_RANGER);
        }
        else if (currAction == CAST_ULTIMATE_SPELL)
        {
            action = chooseAction(CAST_ULTIMATE_SPELL);
            executeAction(action, &archMage->hero, ARCH_MAGE);
            executeAction(action, deathKnight, DEATH_KNIGHT);
            executeAction(action, drawRanger, DRAW_RANGER);
        }
        else if (currAction == REGENERATE_MANA)
        {
            action = chooseAction(REGENERATE_MANA);
            executeAction(action, &archMage->hero, ARCH_MAGE);
            executeAction(action, deathKnight, DEATH_KNIGHT);
            executeAction(action, drawRanger, DRAW_RANGER);
        }
        else
        {
            printf("%s", "Incorrect action type input!\n");
        }
    }
}

void EXECUTE_WARCRAFT()
{
    ArchMage archMage;
    Hero deathKnight;
    Hero drawRanger;

    generateHeroes(&archMage, &deathKnight, &drawRanger);

    startGame(&archMage, &deathKnight, &drawRanger);
}