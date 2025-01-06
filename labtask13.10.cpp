#include <iostream>
using namespace std;

int main() {
    // Prompt the user to input a number
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Handle edge case for negative numbers
    if (number < 0) {
        number = -number; // Convert negative numbers to positive
    }

    // Initialize counters for total digits, even digits, and odd digits
    int totalDigits = 0;
    int evenDigits = 0;
    int oddDigits = 0;

    // Edge case for single-digit zero
    if (number == 0) {
        totalDigits = 1;
        evenDigits = 1;
        oddDigits = 0;
    } else {
        // Use a while loop to process each digit
        while (number > 0) {
            int digit = number % 10; // Extract the last digit
            totalDigits++;           // Increment total digit counter

            if (digit % 2 == 0) {
                evenDigits++;        // Increment even digit counter
            } else {
                oddDigits++;         // Increment odd digit counter
            }

            number /= 10;           // Remove the last digit
        }
    }

    // Display the results
    cout << "Total digits: " << totalDigits << endl;
    cout << "Even digits: " << evenDigits << endl;
    cout << "Odd digits: " << oddDigits << endl;

    return 0;
}
