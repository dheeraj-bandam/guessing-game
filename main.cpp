#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game!\n";
    cout << "Guess a number between 1 and 100:\n";

    do {
        cout << "Your guess: ";
        cin >> guess;
        attempts++;

        if (guess< numberToGuess/2) {
            cout << "Too low! Try again.\n";
        } 
        else if (guess > 2*numberToGuess) {
            cout << "Too high! Try again.\n";
        }
        else if (guess > numberToGuess && guess <= 2*numberToGuess) {
            cout << "you are a bit high. Try again.\n";
        }

        else if (guess < numberToGuess && guess >= numberToGuess/2 ) {
                    cout << "you are a bit low. Try again.\n";
        } else {
            cout << "🎉 Correct! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (guess != numberToGuess);

    return 0;
}
