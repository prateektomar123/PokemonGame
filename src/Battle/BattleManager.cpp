#pragma once
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"
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

void BattleManager::updateBattleState() {
    if (battleState.playerPokemon.isFainted()) {
        battleState.battleOnGoing = false;
    } else if (battleState.wildPokemon.isFainted()) {
        battleState.battleOnGoing = false;
    }
}
void BattleManager::handleBattleOutcome() {
    if (battleState.playerPokemon.isFainted()) {
        cout << battleState.playerPokemon.name << " has fainted! You lose the battle.\\n";
    } else {
        cout << "You defeated the wild " << battleState.wildPokemon.name << "!\\n";
    }
}


