#include<iostream>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"

using namespace std;

void WaitforEnter(){
    // cout << "(Press Enter to \033[34mcontinue\033[0m...)" << endl;

   
    cin.get();
}
void clearConsole(){
#ifdef _WIN32
  system("cls");
#else
  (void)system("clear");
#endif
}



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
    Pokemon(const Pokemon &other) {
        name = other.name;
        type = other.type;
        health = other.health;
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

    void gameLoop(Player &player)
    {
        bool keepPlaying = true;
        while (keepPlaying)
        {
            int choice;
            cout<< "What would you like to do next - " << player.name <<endl;
            cout<< "1)Battle Wild Pokémon\n 2)Visit PokeCenter\n 3)Challenge Gyms\n 4)Enter Pokémon League\n 5)Quit"<<endl;
            cout << "Enter your choice: ";
	        cin >> choice;
            
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice)
            {
            case 1:
                cout<< "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\n";
                break;
            case 2:
                cout<< "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";
                break;
            case 3:
                cout<<  "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
                break;
            case 4:
                cout<<  "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
                break;
            case 5:
                cout<<  "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\n";
                cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y') {
                    keepPlaying = false;
                }
                break;            
            default:cout << "That's not a valid choice. Try again!\n";
                break;
            }
            WaitforEnter(); 
        }
        cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
        
    }
    int main(){

    Pokemon charmander("Charmander", PokemonType::FIRE, 100); // Using parameterized constructor

   
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    clearConsole();
    professor.explainMainQuest(player);

    
    gameLoop(player);

    return 0;
    
    
}