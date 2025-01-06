#include <iostream>
using namespace std;

int main() {
    // Prompt the user to input a number
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    // Handle edge case where n <= 0
    if (n <= 0) {
        cout << "Sum is 0." << endl;
        return 0;
    }

    // Initialize the sum variable
    int sum = 0;

    // Loop to add odd numbers between 1 and n
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    // Output the result
    cout << "The sum of all odd numbers between 1 and " << n << " is: " << sum << endl;

    return 0;
}
