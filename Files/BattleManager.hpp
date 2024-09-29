#include "BattleState.hpp"
#include "Player.hpp"

class BattleManager{
public:
    void startBattle(Player &player, Pokemon &pokemon);
private:
    BattleState battleState;

    void battle();
    void handleBattleOutcome();    
    void updateBattleState();
};