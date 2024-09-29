#pragma once
#include "../../include/Pokemon/Pokemon.hpp"

namespace N_Battle
{
struct BattleState
{
    Pokemon *playerPokemon;
    Pokemon *wildPokemon;
    bool playerTurn;
    bool battleOnGoing;
};
}
