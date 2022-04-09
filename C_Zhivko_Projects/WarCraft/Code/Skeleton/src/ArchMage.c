#include <string.h>
#include "ArchMage.h"

static void setManaRegenModifier(ArchMage *archmage, int manaRegenModifier);
static void setArchmageManaRegenRate(ArchMage *archmage);

void constructArchMage(ArchMage *archmage, const char *name, int maxMana, int baseManaRegenRate, int manaRegenModifier)
{
    constructHero(&archmage->hero, ARCH_MAGE, name, maxMana, baseManaRegenRate);

    setManaRegenModifier(archmage, manaRegenModifier);
    setArchmageManaRegenRate(archmage);
}

static void setManaRegenModifier(ArchMage *archmage, int manaRegenModifier)
{
    archmage->manaRegenModifier = manaRegenModifier;
}

static void setArchmageManaRegenRate(ArchMage *archmage)
{
    archmage->hero.manaRegenRate *= archmage->manaRegenModifier;
}
