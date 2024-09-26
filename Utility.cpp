#include "Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

void Utility :: clearConsole(){
    #ifdef _WIN32
  system("cls");
#else
  (void)system("clear");
#endif
}

void Utility :: waitForEnter(){
    // cout << "(Press Enter to \033[34mcontinue\033[0m...)" << endl;

   
    cin.get();
}
void Utility :: clearInputBuffer(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}