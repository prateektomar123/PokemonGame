#include<iostream>

using namespace std;

void WaitforEnter(){
    // cout << "(Press Enter to \033[34mcontinue\033[0m...)" << endl;

   
    cin.get();
}
void clearConsole(){

}
enum class PokemonType{
   FIRE,
    GRASS,
    WATER,
    ELECTRIC,
    NORMAL 
};

enum class PokemonChoice{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU

};
class Pokemon{
public:
    string name;
    PokemonType type;
    int health;

    Pokemon(){
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
    }

    // Parameterized Constructor
    Pokemon(string p_name, PokemonType p_type, int p_health){
        name = p_name;
        type = p_type;
        health = p_health;
    }
    ~Pokemon() {
        // Destructor message removed
    }
    void attack(){
        cout << name <<" attacks with a powerful move!" << endl;
    }
};

class Player{
    public:
    string name;
    Pokemon chosenPokemon;

    Player(){
        name = "Trainer";
        chosenPokemon = Pokemon();
    }

    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon){
        name = p_name;
        chosenPokemon = p_chosenPokemon;

    }

    // copy contructor 
    Player(const Player &p) { 
	name = p.name; 
	chosenPokemon = p.chosenPokemon; 
	
}
    void choosePokemon(int choice) {
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
        WaitforEnter();

    
    
    
    }
};

class ProfessorOak{
    public:
    string name;

    ProfessorOak(){

    }
    ProfessorOak(string p_name) {
        name = p_name;
    }
    void greetPlayer(Player &player){
        cout << "What's up, kid! I'm Professor Oak, the Pokémon Professor!" << endl;
        WaitforEnter();
        cout << "Wait... who are you again? Oh right, you must be the new trainer!" << endl;
        WaitforEnter();
        cout << "Ah yes, before we begin, tell me your name, young one." << endl;
        WaitforEnter();
        cin >> player.name;
    
        cout << player.name << "?! Haha, that's a great name! It reminds me of when I was your age... but let's not get into that." << endl;
    }

    void offerPokemonChoices(Player &player){
        int playerChoice;
        cout << "Hmm, looks like you don't have any Pokémon yet, do you?" << endl;
    
        cout << "Don't worry! Every great journey begins with a first step—and a Pokémon partner!" << endl;
    
        cout << "\nI've got three amazing Pokémon right here in front of me. Each one has a unique bond with nature. Choose wisely!" << endl;
        
        WaitforEnter();
        cout << "Here are your choices:\n";
    
        cout << "1) Bulbasaur.\n2) Charmander.\n3) Squirtle.\n" << endl;
    
        cout << "So, " << player.name << ", which Pokémon will be your loyal companion? Enter 1, 2, or 3: ";
        cin >> playerChoice ;
        cout<<"\n";
        player.choosePokemon(playerChoice);
        WaitforEnter();
        
    }

    void explainMainQuest(Player &player){

        cout<<"Professor Oak: Ah, "<<player.name <<", let me tell you about your grand adventure that's about to unfold!"<<endl;
        WaitforEnter();
        cout<<"Professor Oak: Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck."<<endl;
        WaitforEnter();
        cout<<"Professor Oak: Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four   and aim for the    title of Champion."<<endl;
        WaitforEnter();
        cout<<player.name <<": Wait, isn’t that just like every other Pokémon game?"<<endl;
        WaitforEnter();
        cout<<"Professor Oak: No breaking the fourth wall, [player.name]! This is serious business."<<endl;
        WaitforEnter();
        cout<<"Professor Oak: To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter."<<endl;
        WaitforEnter();
        cout<<"Professor Oak: Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!"<<endl;
        WaitforEnter();
        cout<<player.name <<": Piece of cake, right?"<<endl;
        WaitforEnter();
        cout<<"Professor Oak: Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!"<<endl;
        WaitforEnter();
        cout<<"Professor Oak: So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?"<<endl;
        WaitforEnter();
        cout<<player.name <<": Ready as I’ll ever be, Professor!"<<endl;
        WaitforEnter();
        cout<<"Professor Oak: That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!"<<endl;
        WaitforEnter();
        cout<<"Professor Oak: Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!"<<endl;
    }

};
int main(){

    Pokemon charmander("Charmander", PokemonType::FIRE, 100); // Using parameterized constructor

   
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    clearConsole();
    professor.explainMainQuest(player);

    
    cout << "\n[Placeholder for the Game Loop]\n";

    return 0;
    
    
}