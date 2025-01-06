#include <iostream>
using namespace std;

int main() {
    int number;

    // Input number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is odd or even using the ternary operator
    string result = (number % 2 == 0) ? "The number is Even." : "The number is Odd.";

    // Output the result
    cout << result << endl;

    return 0;
}
