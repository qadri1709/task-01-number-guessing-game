/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int playerGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    // Loop until the player guesses the correct number
    while (playerGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        attempts++;

        if (playerGuess < randomNumber) {
            cout << "Too lower-number! Try again." << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Too higher-number! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << randomNumber << " in " << attempts << " attempts." << endl;
        }
    }

    return 0;
}
