#include <iostream>
using namespace std;

// Function to reverse the digits of the number
int reverseNumber(int number) {
    int reversedNumber = 0;
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return reversedNumber;
}

// Function to calculate the sum of digits
int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Handle special case for zero input
    if (number == 0) {
        cout << "Reverse: 0" << endl;
        cout << "Sum: 0" << endl;
    } else if (number > 0) {
        // Call the functions and display results
        int reversed = reverseNumber(number);
        int sum = sumOfDigits(number);
        cout << "Reverse: " << reversed << endl;
        cout << "Sum: " << sum << endl;
    } else {
        cout << "Please enter a positive number." << endl;
    }

    return 0;
}
