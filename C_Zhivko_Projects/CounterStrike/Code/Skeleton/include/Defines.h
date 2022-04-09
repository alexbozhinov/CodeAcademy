#ifndef DEFINES_H_
#define DEFINES_H_

typedef enum
{
  GLOCK = 0,
  DESERT_EAGLE = 1,
} PistolType;

enum GlockDefines
{
  ROUNDS_PER_FIRE = 3,
};

enum PlayerDefines
{
  PLAYER_ONE = 0,
  PLAYER_TWO = 1,
  PLAYERS_COUNT = 2,
};

enum PlayerIdDefines
{
  TERRORISTS_FIRST_PLAYER_ID = 0,
  COUNTERTERRORISTS_FIRST_PLAYER_ID = 1,
  PLAYER_ID_ADDEND = 2,
};

typedef struct
{
  int health;
  int armor;
} PlayerVitalData;

#define TEAM_START_SIZE 1

#define UNARMORED_DAMAGE_PERCENTAGE 1

#define DESERT_EAGLE_ARMOR_DAMAGE_PERCENTAGE 0.25
#define DESERT_EAGLE_HEALTH_DAMAGE_PERCENTAGE 0.75

#define GLOCK_ARMOR_DAMAGE_PERCENTAGE 0.5
#define GLOCK_HEALTH_DAMAGE_PERCENTAGE 0.5

#endif /* DEFINES_H_ */