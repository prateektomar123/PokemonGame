#include "Pokemon.hpp"


struct BattleState
{
    Pokemon *playerPokemon;
    Pokemon *wildPokemon;
    bool playerTurn;
    bool battleOnGoing;
};
