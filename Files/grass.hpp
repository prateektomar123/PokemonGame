#include<string>
#include<vector>
using namespace std;

struct Grass
{
    vector<WildPokemon> wildPokemonList;
    int encounterRate;
    string environmentType;

};

Grass forestGrass ={
"Forest",
{{"Zubat",PokemonType :: Poison,30},{"Caterpie", PokemonType :: FLEE,50},{"Pidgey", PokemonType :: FLY,50}},
80
};
