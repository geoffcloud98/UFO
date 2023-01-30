#include <iostream>
#include "ufo_functions.hpp"
int main() {
  // print instructions
  instructions();

  std::string codeword = "supercalifragilisticexpialidocious";
  std::string answer = "__________________________________";

  //counts number of misses
  int misses = 0;
  //display incorrect guesses
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  while(answer != codeword && misses < 7) 
  {
    display_misses(misses);
    display_status(incorrect, answer);

    //get player input
    std::cout << "\n\nPlease enter your guess: ";
    std::cin >> letter;
    //if player guesses right set current guess as the answer
    for(int i = 0; i < codeword.size(); i++) 
    {
      if(letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }

    if(guess) 
    {
      std::cout << "\nCorrect!";
    }
    else
    {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  
  display_status(incorrect, answer);
  end_game(answer, codeword);
}
