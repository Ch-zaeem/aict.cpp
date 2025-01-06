#include <iostream>
using namespace std;

int main() {
    // Prompt the user to input a number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Ensure n is positive for the operation
    if (n < 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    // Calculate the sum of digits using a while loop
    int sumOfDigits = 0;
    int temp = n; // Preserve the original number for display

    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        sumOfDigits += digit; // Add it to the sum
        n /= 10; // Remove the last digit
    }

    // Print the sum of the digits
    cout << "Sum: " << sumOfDigits << endl;

    // Check if the sum is divisible by 3
    if (sumOfDigits % 3 == 0) {
        cout << "Divisible by 3: Yes" << endl;
    } else {
        cout << "Divisible by 3: No" << endl;
    }

    return 0;
}
