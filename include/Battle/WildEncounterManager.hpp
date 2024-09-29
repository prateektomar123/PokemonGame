#include <vector>
struct Grass;
class Pokemon;

namespace N_Battle
{
class WildEncounterManager {
public:
    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grass);
};
}