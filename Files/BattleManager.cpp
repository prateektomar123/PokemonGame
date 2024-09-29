#include "BattleManager.hpp"
#include "Utility.cpp"
#include <iostream>
using namespace std;

void BattleManager::startBattle(Player &player, Pokemon &wildPokemon){
        cout << "A wild " << wildPokemon.name << " appeared!\n";
        battle(player.chosenPokemon, wildPokemon);
}
void BattleManager::battle(Pokemon &playerPokemon, Pokemon &wildPokemon){
  cout << "A wild " << wildPokemon.name << " appeared!\n";

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        playerPokemon.attack(wildPokemon); // Player attacks first

        if (!wildPokemon.isFainted()) {
            wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
        }
    }
    Utility::waitForEnter();
    handleBattleOutcome(playerPokemon,playerPokemon.isFainted());

    
}

void BattleManager::handleBattleOutcome(){
    if (playerPokemon.isFainted()) {
        cout << "Oh no! "<<playerPokemon.name << " fainted! You need to visit the PokeCenter.\n";
    } else {
        cout << playerPokemon.name << "is victorious! Keep an eye on your Pokémon's health.";
    }
}

