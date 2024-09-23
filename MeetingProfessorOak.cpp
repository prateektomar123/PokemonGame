#include<iostream>

using namespace std;

enum class PokemonChoice{
    Bulbasaur,
    Charmander,
    Squirtle,
    Invalid_Choice

};

int main() {
    string player_name;
    PokemonChoice chosen_pokemon;

    cout << "What's up, kid! I'm Professor Oak, the Pokémon Professor!" << endl;
    
    cout << "Wait... who are you again? Oh right, you must be the new trainer!" << endl;
    
    cout << "Ah yes, before we begin, tell me your name, young one." << endl;
    
    cin >> player_name;
    
    cout << player_name << "?! Haha, that's a great name! It reminds me of when I was your age... but let's not get into that." << endl;
    
    cout << "Hmm, looks like you don't have any Pokémon yet, do you?" << endl;
    
    cout << "Don't worry! Every great journey begins with a first step—and a Pokémon partner!" << endl;
    
    int playerChoice;
    cout << "\nI've got three amazing Pokémon right here in front of me. Each one has a unique bond with nature. Choose wisely!" << endl;
    
    cout << "Here are your choices:\n";
    
    cout << "1) Bulbasaur.\n2) Charmander.\n3) Squirtle.\n" << endl;
    
    cout << "So, " << player_name << ", which Pokémon will be your loyal companion? Enter 1, 2, or 3: ";
    cin >> playerChoice ;
    cout<<"\n";

    switch (playerChoice)
    {
    case 1:
        chosen_pokemon = PokemonChoice::Bulbasaur;
        break;
    case 2:
        chosen_pokemon = PokemonChoice::Charmander;
        break;
    case 3:
        chosen_pokemon = PokemonChoice::Squirtle;
        break;        
    
    default:
        chosen_pokemon = PokemonChoice::Invalid_Choice;
        break;
    }


    switch (chosen_pokemon)
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
            chosen_pokemon = PokemonChoice::Charmander; 
            cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
            break;
        break;
    }
    
    cout << "\nWell, " << player_name << ", your journey begins now. Go forth, explore the world of Pokémon with your mate " <<(chosen_pokemon == PokemonChoice::Charmander ? "Charmander" : chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : "Squirtle")<< ", and remember—there's a whole world waiting for you!" << endl;
    
    return 0;
}
