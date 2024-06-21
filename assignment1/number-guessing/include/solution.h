#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuessingGame {
    int numberToGuess;

    void setNumberToGuess(int number) { 
        numberToGuess = number;
    }

public:
    NumberGuessingGame() {
       
        srand(static_cast<unsigned int>(time(0)));
       
        numberToGuess = rand() % 100 + 1;
    }

    void playGame() {
        int guess;
        int numberOfGuesses = 0;
        while (true) {
            cout << "Guess the number (between 1 and 100): ";
            cin >> guess;

           

            numberOfGuesses++;
            if (guess < numberToGuess) {
                cout << "Too low!" << endl;
            } else if (guess > numberToGuess) {
                cout << "Too high!" << endl;
            } else {
                cout << "Correct! You took " << numberOfGuesses << " guesses." << endl;
                break;
            }
        }
    }

    friend class SolutionTest; 
};
