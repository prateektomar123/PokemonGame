#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {

    using namespace std;
    
    Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}
    
    void Pikachu::thunderShock(Pokemon* target) {
        
        cout << name << " used Thunder Shock!\n";
        N_Utility::Utility::waitForEnter();

        cout << "...\n"; 
        N_Utility::Utility::waitForEnter();

        target->takeDamage(attackPower);

        if (target->isFainted())
            cout << target->name << " fainted!\n";
        else
            cout << target->name << " has " << target->health << " HP left.\n";
        N_Utility::Utility::waitForEnter(); 
    }
  }
}