#include <iostream>
using namespace std;

int main() {
    // Take two numbers as input from the user
    int a, b;
    cout << "Enter the starting number (a): ";
    cin >> a;
    cout << "Enter the ending number (b): ";
    cin >> b;

    // Ensure the range is valid
    if (a > b) {
        cout << "Invalid range. Starting number (a) must be less than or equal to ending number (b)." << endl;
        return 1;
    }

    // Calculate the midpoint of the range
    double midpoint = (a + b) / 2.0; // Using double to handle non-integer midpoints
    cout << "Midpoint: " << midpoint << endl;

    // Use a while loop to iterate through the range
    int current = a;
    while (current <= b) {
        // Compare the current number with the midpoint
        if (current < midpoint) {
            cout << current << " is less than the midpoint." << endl;
        } else if (current > midpoint) {
            cout << current << " is greater than the midpoint." << endl;
        } else {
            cout << current << " is equal to the midpoint." << endl;
        }
        current++; // Move to the next number
    }

    return 0;
}
