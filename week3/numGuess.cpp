


/*--------------------------------------------------------------------------------
 * File: numGuess.cpp
 * Author: Vincent Lee
 * Date: 4/15/2015
 * Description: This program is a number guessing game for
 * 2 players. Player 1 enters the number to be guessed.
 * Player 2 tries to guess the number that player 1 entered.
 *--------------------------------------------------------------------------------
 */

#include <iostream>

/* Function Prototype */
int promptPlayerForGuess(int & numberOfGuesses);

int main() {

    int numberToBeGuessed;      //the number player 2 will try to guess
    int guess;                  //player 2's guess
    int numberOfGuesses = 0;    //counter for guesses
    
    std::cout << "Enter the number for the player to guess.\n";
    std::cin >> numberToBeGuessed;
    
    guess = promptPlayerForGuess(numberOfGuesses);
    
    while(guess != numberToBeGuessed) {
        
        if(guess > numberToBeGuessed) {
            std::cout << "lower" << std::endl;
        } else {
            std::cout << "higher" << std::endl;
        }
        
        guess = promptPlayerForGuess(numberOfGuesses);
        
    }
    
    std::cout << "You guessed it in " << numberOfGuesses << " tries." << std::endl;
    
    return 0;

}



/*
 * Function: promptPlayerForGuess(num)
 * Usage: int guess = promptPlayerForGuess(num);
 * ----------------------------------------------------
 * Prompts player 2 for their guess and returns that number
 */


int promptPlayerForGuess(int & numberOfGuesses) {
    
    int thisGuess;
    std::cout << "Enter your guess.\n";
    std::cin >> thisGuess;
    numberOfGuesses++;
    return thisGuess;

}

