#ifndef HERO_H_
#define HERO_H_

#include "Defines.h"
#include "Spell.h"

void constructHero(Hero *hero, int heroType, const char *name, int maxMana, int baseManaRegenRate);

void executeAction(void (*funcPtr)(Hero *, int), Hero *hero, int heroType);

void *chooseAction(int actionType);

void specialAbility(Hero *hero, int heroType);

#endif /* HERO_H_ */
