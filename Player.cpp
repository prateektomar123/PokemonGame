#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "iostream"
using namespace std;

    Player :: Player(){
        name = "Trainer";
        chosenPokemon = Pokemon();
    }

    // Parameterized Constructor
    Player :: Player(string p_name, Pokemon p_chosenPokemon){
        name = p_name;
        chosenPokemon = p_chosenPokemon;

    }

    // copy contructor 
    Player :: Player(const Player &p) { 
	name = p.name; 
	chosenPokemon = p.chosenPokemon; 
	
    }

    void Player :: choosePokemon(int choice) {
        switch ((PokemonChoice)choice) {
            case PokemonChoice::CHARMANDER:
                chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
                break;
            case PokemonChoice::BULBASAUR:
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
                break;
            case PokemonChoice::SQUIRTLE:
                chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
                break;
            default:
                chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
                break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
        Utility::waitForEnter();

    
    
    
    }