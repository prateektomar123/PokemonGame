#include "Pokemon.hpp"
#include "Player.hpp"

class BattleManager{
public:
    void startBattle(Player &player, Pokemon &pokemon);
private:
    void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
    void handleBattleOutcome(Player &player, bool playerWon);    

};