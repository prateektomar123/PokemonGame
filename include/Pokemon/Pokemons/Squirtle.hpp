#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
    
    class Squirtle : public Pokemon {
    
    
    public:
      Squirtle();
      void waterSplash(Pokemon &target);
      
    };
    
  }
}