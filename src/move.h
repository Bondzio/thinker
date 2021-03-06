#pragma once

#include "main.h"
#include "game.h"

#define BASE_DISALLOWED (TERRA_BASE_IN_TILE | TERRA_MONOLITH | TERRA_FUNGUS | TERRA_THERMAL_BORE)

#define IMP_SIMPLE (TERRA_FARM | TERRA_MINE | TERRA_FOREST)
#define IMP_ADVANCED (TERRA_CONDENSER | TERRA_THERMAL_BORE)

#define PM_SAFE -20
#define PM_NEAR_SAFE -40

HOOK_API int enemy_move(int id);
HOOK_API int log_veh_kill(int a, int b, int c, int d);
void move_upkeep(int faction);
bool need_formers(int x, int y, int faction);
bool has_transport(int x, int y, int faction);
bool non_combat_move(int x, int y, int faction, int triad);
bool can_build_base(int x, int y, int faction, int triad);
bool has_base_sites(int x, int y, int faction, int triad);
int select_item(int x, int y, int faction, MAP* sq);
int crawler_move(int id);
int colony_move(int id);
int former_move(int id);
int trans_move(int id);
int combat_move(int id);

