// Utility.cpp
#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

void Utility::clearConsole() {
#ifdef _WIN32
  system("cls");
#else
  (void)system("clear");
#endif
}

void Utility::waitForEnter() { cin.get(); }

void Utility::clearInputBuffer() {
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}