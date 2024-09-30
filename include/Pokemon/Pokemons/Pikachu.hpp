#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
  
    class Pikachu : public Pokemon {
    public:
      Pikachu();
      void attack(Pokemon &target) override;
      void thunderShock(Pokemon* target);
    };
    
  }
}