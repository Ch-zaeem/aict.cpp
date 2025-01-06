#include <iostream>
using namespace std;

int main() {
    // Prompt the user to input a number x
    int x;
    cout << "Enter a number (x): ";
    cin >> x;

    // Validate that x is greater than 0
    if (x <= 0) {
        cout << "Invalid input. Please enter a number greater than 0." << endl;
        return 1; // Exit the program for invalid input
    }

    // Prompt the user for the end point of the table
    int end;
    cout << "Enter the end point for the multiplication table: ";
    cin >> end;

    // Validate the end point
    if (end < 1) {
        cout << "Invalid end point. Please enter a number greater than or equal to 1." << endl;
        return 1; // Exit the program for invalid input
    }

    // Generate and print the multiplication table
    cout << "Multiplication Table for " << x << ":" << endl;
    for (int i = 1; i <= end; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }

    return 0;
}
