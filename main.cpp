#include<iostream>

using namespace std;

enum class PokemonType{
    Fire,
    Water,
    Electric
};

enum class PokemonChoice{
    Bulbasaur,
    Charmander,
    Squirtle,
    Invalid_Choice

};
class Pokemon{
    string name;
    PokemonType type;
    int health;

    void attack(){
        cout <<"<Pokemon> attacks with a powerful move!" << endl;
    }
};

class Player{
    public:
    string name;
    PokemonChoice chosenPokemon;

    Player(){

    }
    void choosePokemon(int choice){
    
    switch (choice)
    {
    case 1:
        chosenPokemon = PokemonChoice::Bulbasaur;
        break;
    case 2:
        chosenPokemon = PokemonChoice::Charmander;
        break;
    case 3:
        chosenPokemon = PokemonChoice::Squirtle;
        break;        
    
    default:
        chosenPokemon = PokemonChoice::Invalid_Choice;
        break;
    }


    
    
    
    }
};

class ProfessorOak{
    public:
    string name;

    ProfessorOak(){

    }
    void greetPlayer(Player &player){
        cout << "What's up, kid! I'm Professor Oak, the Pokémon Professor!" << endl;
    
        cout << "Wait... who are you again? Oh right, you must be the new trainer!" << endl;
    
        cout << "Ah yes, before we begin, tell me your name, young one." << endl;
    
        cin >> player.name;
    
        cout << player.name << "?! Haha, that's a great name! It reminds me of when I was your age... but let's not get into that." << endl;
    }

    void offerPokemonChoices(Player &player){
        int playerChoice;
        cout << "Hmm, looks like you don't have any Pokémon yet, do you?" << endl;
    
        cout << "Don't worry! Every great journey begins with a first step—and a Pokémon partner!" << endl;
    
        cout << "\nI've got three amazing Pokémon right here in front of me. Each one has a unique bond with nature. Choose wisely!" << endl;
    
        cout << "Here are your choices:\n";
    
        cout << "1) Bulbasaur.\n2) Charmander.\n3) Squirtle.\n" << endl;
    
        cout << "So, " << player.name << ", which Pokémon will be your loyal companion? Enter 1, 2, or 3: ";
        cin >> playerChoice ;
        cout<<"\n";
        player.choosePokemon(playerChoice);
        switch (player.chosenPokemon)
        {
            case PokemonChoice::Bulbasaur:
                cout << "You chose Bulbasaur! A wise choice indeed. This little guy will be your steady partner through thick and thin, trust me." << endl;
                cout << "Bulbasaur looks up at you with big, trusting eyes, ready for an adventure!" << endl;
                break;
            case PokemonChoice::Charmander:
                cout << "You chose Charmander! A fiery choice, full of energy and potential. Watch out, though, that tail flame means business!" << endl;
                cout << "Charmander lets out a cheerful growl, its tail flame burning brightly as it anticipates the challenges ahead." << endl;
                break;
            case PokemonChoice::Squirtle:
                cout << "You chose Squirtle! A cool, composed choice. This little turtle will help you navigate through any stormy waters you encounter." << endl;
                cout << "Squirtle gives you a confident nod, ready to splash into battle whenever you are!" << endl;
            default:
                    cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
                    player.chosenPokemon = PokemonChoice::Charmander; 
                    cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
                    break;
                break;
        }
    }

};
int main(){

    Player player;
    ProfessorOak professor;
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    
    return 0;
}