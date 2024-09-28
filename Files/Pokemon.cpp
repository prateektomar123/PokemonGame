#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include <iostream>
using namespace std;

// Default constructor
Pokemon::Pokemon() {
  name = "Unknown";
  type = PokemonType::NORMAL;
  health = 50;
}

// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health) {
  name = p_name;
  type = p_type;
  health = p_health;
}

// Copy constructor
Pokemon::Pokemon(const Pokemon &other) {
  name = other.name;
  type = other.type;
  health = other.health;
}

// Destructor
Pokemon::~Pokemon() {
  // Destructor logic (if any) goes here
}

void Pokemon::TakeDamage(int damage){
   health -= damage;
   if (health < 0)
   {
     health = 0;
   }
   
}

bool Pokemon::isFainted() const{
   return health <= 0 ;
}


void Pokemon::attack(Pokemon &target) {
  int damage = 10;

  cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
}

void Pokemon::battle(Pokemon &playerPokemon, Pokemon &wildPokemon){
  cout << "A wild " << wildPokemon.name << " appeared!\\n";

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        playerPokemon.attack(wildPokemon); // Player attacks first

        if (!wildPokemon.isFainted()) {
            wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
        }
    }

    if (playerPokemon.isFainted()) {
        cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
    } else {
        cout << "You defeated the wild " << wildPokemon.name << "!\\n";
    }
}