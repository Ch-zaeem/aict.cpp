#include <iostream>
using namespace std;

int main() {
    // Prompt the user for input
    cout << "Enter 5 numbers:" << endl;

    // Variable to track the largest number
    int largest = INT_MIN; // Initialize to the smallest possible integer value

    // Loop to accept 5 numbers
    for (int i = 1; i <= 5; i++) {
        int num;
        cout << "Enter number " << i << ": ";
        cin >> num;

        // Check if the current number is larger than the largest number so far
        if (num > largest) {
            largest = num;
        }
    }

    // Output the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}
