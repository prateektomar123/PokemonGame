#include <string>

#include "Utility.hpp"

using namespace std;

class Player{
public:
    string name;
    Pokemon chosenPokemon;    

    Player(); // Default constructor
    Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

    void choosePokemon(int choice);
};