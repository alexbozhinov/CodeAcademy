#include <string.h>
#include "Spell.h"

static void initSpell(Spell *spell, const char *name, int spellManaCost)
{
    strcpy(spell->name, name);
    spell->manaCost = spellManaCost;
}

void heroSpellsInit(Hero *hero, const char *basicSpellName, int basicSpellManaCost, const char *ultimateSpellName, int ultimateSpellManaCost)
{
    initSpell(&hero->spells[BASIC], basicSpellName, basicSpellManaCost);
    initSpell(&hero->spells[ULTIMATE], ultimateSpellName, ultimateSpellManaCost);
}