#ifndef DEFINES_H_
#define DEFINES_H_

#define MAX_SPELL_NAME_SIZE 20
#define MAX_HERO_NAME_SIZE 20
#define MAX_SPELLS 2

typedef struct
{
  char name[MAX_SPELL_NAME_SIZE];
  int manaCost;
} Spell;

typedef struct
{
  Spell spells[MAX_SPELLS];
  char name[MAX_HERO_NAME_SIZE];
  int maxMana;
  int currMana;
  int manaRegenRate;
} Hero;

typedef enum
{
  FALSE = 0,
  TRUE = 1,
} bool;

enum HeroType
{
  ARCH_MAGE = 0,
  DEATH_KNIGHT = 1,
  DRAW_RANGER = 2,
};

enum ActionType
{
  CAST_BASIC_SPELL = 0,
  CAST_ULTIMATE_SPELL = 1,
  REGENERATE_MANA = 2,
};

enum SpellType
{
  BASIC = 0,
  ULTIMATE = 1
};

#define ARCHMAGE_BASIC_SPELL_NAME "Water Elemental"
#define ARCHMAGE_BASIC_SPELL_MANA_COST 120
#define ARCHMAGE_ULTIMATE_SPELL_NAME "Mass Teleport"
#define ARCHMAGE_ULTIMATE_SPELL_MANA_COST 180

#define DEATH_KNIGHT_BASIC_SPELL_NAME "Death Coil"
#define DEATH_KNIGHT_BASIC_SPELL_MANA_COST 75
#define DEATH_KNIGHT_ULTIMATE_SPELL_NAME "Animate Dead"
#define DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST 200

#define DRAW_RANGER_BASIC_SPELL_NAME "Silence"
#define DRAW_RANGER_BASIC_SPELL_MANA_COST 90
#define DRAW_RANGER_ULTIMATE_SPELL_NAME "Charm"
#define DRAW_RANGER_ULTIMATE_SPELL_MANA_COST 150

#define HERO_FREE_SPELL_MANA_COST 0

#endif /* DEFINES_H_ */
