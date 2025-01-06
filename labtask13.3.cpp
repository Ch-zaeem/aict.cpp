#include <iostream>

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator with the current time
int randomNumber = rand( ); // Generate a random number
int winningNumber = 15; // Predefined winning number
int guessedNumber; // User's guess
int attemptsCounter = 0; // Tracks number of attempts

cout << "Welcome to the Number Guessing Game!\n";
cout << "Guess the number between 1 and 20:\n";

// If-Else for initial check

while (true) {
cout << "Enter your guess: ";
cin >> guessedNumber;
attemptsCounter++; // Increment attempt counter
if (guessedNumber < winningNumber) {
cout << "Too low! Try again.\n";
} else if (guessedNumber > winningNumber) {

cout << "Too high! Try again.\n";

} else {

cout << "Congratulations! You've guessed in " << attemptsCounter << " attempts.\n";
break; // Exit the loop on correct guess

}

}
    return 0;
}