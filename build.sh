#!/bin/bash

# Compile all cpp files
g++ -std=c++14 \
    Main.cpp \
    Game.cpp \
    Player.cpp \
    Pokemon.cpp \
    ProfessorOak.cpp \
    Utility.cpp \
    WildEncounterManager.cpp \
    -o pokemon_game

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the game..."
    ./pokemon_game
else
    echo "Compilation failed. Please check the errors above."
fi