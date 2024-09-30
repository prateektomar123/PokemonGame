#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Squirtle::Squirtle() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
    void Squirtle::waterSpalsh(Pokemon &target) {
      
        cout << name << " used Water splash!\n";
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