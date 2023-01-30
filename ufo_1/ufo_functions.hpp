#include <vector>
#include <iostream>
#include "ufo_functions.cpp"

void display_misses(int misses);

// Declare functions
void instructions(); 

void end_game(std::string answer, std::string codeword);

void display_status(std::vector<char> incorrect, std::string answer);