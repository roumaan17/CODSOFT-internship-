#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Guess the number (between 1 and 100):" << endl;

    // Loop until the correct guess
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " tries." << endl;
        }

    } while (userGuess != numberToGuess);

    return 0;
}
