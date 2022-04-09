#ifndef ARCH_MAGE_H_
#define ARCH_MAGE_H_

#include "Hero.h"

typedef struct
{
    Hero hero;
    int manaRegenModifier;
} ArchMage;

void constructArchMage(ArchMage *archmage, const char *name, int maxMana, int baseManaRegenRate, int manaRegenModifier);

#endif /* ARCH_MAGE_H_ */