#include <iostream>
using namespace std;

int main() {
    // Accept a number as input from the user
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Edge case: If the input is 0
    if (number == 0) {
        cout << "Reverse: 0" << endl;
        cout << "Sum: 0" << endl;
        return 0;
    }

    // Initialize variables
    int reversedNumber = 0;
    int sumOfDigits = 0;
    int originalNumber = number; // Store the original number

    // Process the number
    while (number > 0) {
        int digit = number % 10;            
        reversedNumber = reversedNumber * 10 + digit; 
        sumOfDigits += digit;              
        number /= 10;                    
    }

    // Display the results
    cout << "Reverse: " << reversedNumber << endl;
    cout << "Sum: " << sumOfDigits << endl;

    return 0;
}
