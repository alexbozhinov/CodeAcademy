#include <stdio.h>
#include <string.h>
#include "Hero.h"

static void heroBaseInit(Hero *hero, const char *inputName, int inputMaxMana, int inputManaRegenRate);
static void heroRegenerateMana(Hero *hero, int heroType);
static void heroCastBasicSpell(Hero *hero, int heroType);
static void heroCastUltimateSpell(Hero *hero, int heroType);
static void printGameMessage(const char *heroName, const char *spellName, int manaCost, bool isSpellCasted);

static void heroBaseInit(Hero *hero, const char *inputName, int inputMaxMana, int inputManaRegenRate)
{
    strcpy(hero->name, inputName);
    hero->maxMana = inputMaxMana;
    hero->currMana = inputMaxMana;      
    hero->manaRegenRate = inputManaRegenRate;
}

void constructHero(Hero *hero, int heroType, const char *name, int maxMana, int baseManaRegenRate)
{
    switch (heroType)
    {
    case ARCH_MAGE:
        heroBaseInit(hero, name, maxMana, baseManaRegenRate);
        heroSpellsInit(hero, ARCHMAGE_BASIC_SPELL_NAME, ARCHMAGE_BASIC_SPELL_MANA_COST,
                       ARCHMAGE_ULTIMATE_SPELL_NAME, ARCHMAGE_ULTIMATE_SPELL_MANA_COST);
        break;
    case DEATH_KNIGHT:
        heroBaseInit(hero, name, maxMana, baseManaRegenRate);
        heroSpellsInit(hero, DEATH_KNIGHT_BASIC_SPELL_NAME, DEATH_KNIGHT_BASIC_SPELL_MANA_COST,
                       DEATH_KNIGHT_ULTIMATE_SPELL_NAME, DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST);
        break;
    case DRAW_RANGER:
        heroBaseInit(hero, name, maxMana, baseManaRegenRate);
        heroSpellsInit(hero, DRAW_RANGER_BASIC_SPELL_NAME, DRAW_RANGER_BASIC_SPELL_MANA_COST,
                       DRAW_RANGER_ULTIMATE_SPELL_NAME, DRAW_RANGER_ULTIMATE_SPELL_MANA_COST);
        break;
    default:
        break;
    }
}

static void heroRegenerateMana(Hero *hero, int heroType)
{
    if (heroType != ARCH_MAGE && heroType != DEATH_KNIGHT && heroType != DRAW_RANGER)
    {
        return; 
    }

    hero->currMana += hero->manaRegenRate;

    if (hero->currMana > hero->maxMana)
    {
        hero->currMana = hero->maxMana; 
    }
}

static void heroCastBasicSpell(Hero *hero, int heroType)
{
    bool isSpellCasted = FALSE;

    if (hero->currMana >= hero->spells[BASIC].manaCost)
    {
        isSpellCasted = TRUE;
        hero->currMana -= hero->spells[BASIC].manaCost;
    }

    if (heroType == DRAW_RANGER && isSpellCasted == TRUE)
    {
        printGameMessage(hero->name, hero->spells[BASIC].name, hero->spells[BASIC].manaCost, isSpellCasted);
        specialAbility(hero, DRAW_RANGER);
    }
    else
    {
        printGameMessage(hero->name, hero->spells[BASIC].name, hero->spells[BASIC].manaCost, isSpellCasted);
    }
}

static void heroCastUltimateSpell(Hero *hero, int heroType)
{
    bool isSpellCasted = FALSE;

    if (hero->currMana >= hero->spells[ULTIMATE].manaCost)
    {
        isSpellCasted = TRUE;
        hero->currMana -= hero->spells[ULTIMATE].manaCost;
    }

    if (heroType == ARCH_MAGE && isSpellCasted == TRUE)
    {
        printGameMessage(hero->name, hero->spells[ULTIMATE].name, hero->spells[ULTIMATE].manaCost, isSpellCasted);
        specialAbility(hero, ARCH_MAGE);
    }
    else if (heroType == DEATH_KNIGHT && isSpellCasted == TRUE)
    {
        printGameMessage(hero->name, hero->spells[ULTIMATE].name, hero->spells[ULTIMATE].manaCost, isSpellCasted);
        specialAbility(hero, DEATH_KNIGHT);
    }
    else
    {
        printGameMessage(hero->name, hero->spells[ULTIMATE].name, hero->spells[ULTIMATE].manaCost, isSpellCasted);
    }
}

static void printGameMessage(const char *heroName, const char *spellName, int manaCost, bool isSpellCasted)
{
    if (isSpellCasted == TRUE)
    {
        printf("%s casted %s for %d mana\n", heroName, spellName, manaCost);
    }
    else
    {
        printf("%s - not enough mana to cast %s\n", heroName, spellName);
    }
}

void *chooseAction(int actionType)
{
    void (*action)(Hero * hero, int heroType) = NULL;

    if (actionType == CAST_BASIC_SPELL)
    {
        action = heroCastBasicSpell;
    }
    else if (actionType == CAST_ULTIMATE_SPELL)
    {
        action = heroCastUltimateSpell;
    }
    else if (actionType == REGENERATE_MANA)
    {
        action = heroRegenerateMana;
    }

    return action;
}

void executeAction(void (*funcPtr)(Hero *, int), Hero *hero, int heroType)
{
    funcPtr(hero, heroType);
}

void specialAbility(Hero *hero, int heroType)
{
    switch (heroType)
    {
    case ARCH_MAGE:
        heroRegenerateMana(hero, heroType);
        break;
    case DEATH_KNIGHT:
        printGameMessage(hero->name, hero->spells[BASIC].name, HERO_FREE_SPELL_MANA_COST, TRUE);
        break;
    case DRAW_RANGER:
        printGameMessage(hero->name, hero->spells[BASIC].name, HERO_FREE_SPELL_MANA_COST, TRUE);
        break;
    default:
        break;
    }
}
