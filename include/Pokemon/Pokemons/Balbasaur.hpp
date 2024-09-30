#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
    
    class Balbasaur : public Pokemon {
    private:
    
    public:
      Balbasaur();
      void attack(Pokemon &target) override;
      void vineWhip(Pokemon &target);
      
    };
    
  }
}