#include <string>
enum class PokemonType;
using namespace std;

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;
    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health);

    // Copy constructor
    Pokemon(const Pokemon &other);

    
    // Destructor
    ~Pokemon();

    void TakeDamage(int damage);

    bool isFainted() const;
    void attack(Pokemon &target);
    void heal();
    void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
};