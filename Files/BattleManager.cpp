#include "BattleManager.hpp"
#include "Utility.cpp"
#include <iostream>
using namespace std;

void BattleManager::startBattle(Player &player, Pokemon &wildPokemon){
        battleState.playerPokemon = &player.chosenPokemon;
        battleState.wildPokemon = &wildPokemon;
        battleState.playerTurn = true;  // Player starts first
        battleState.battleOnGoing = true;
        cout << "A wild " << wildPokemon.name << " appeared!\n";
        battle();
}
void BattleManager::battle(){

    while (battleState.battleOnGoing)
    {
        if (battleState.playerTurn)
        {
            battleState.playerPokemon -> attack(*battleState.wildPokemon);
        }
        else{
            battleState.wildPokemon -> attack(*battleState.playerPokemon);
        }

        updateBattleState();

        battleState.playerTurn = !battleState.playerTurn;
        Utility::waitForEnter();
        
    }
    
    handleBattleOutcome();
  
    
}

void BattleManager::handleBattleOutcome() {
    if (battleState.playerPokemon->isFainted()) {
        std::cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\\n";
    } else {
        std::cout << "You defeated the wild " << battleState.wildPokemon->name << "!\\n";
    }
}

void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted()) {
        battleState.battleOnGoing = false;
    } else if (battleState.wildPokemon->isFainted()) {
        battleState.battleOnGoing = false;
    }
}

