#include <iostream>
using namespace std;

int main() {
      int num;  // Use int num for user input
    cout << "Enter a number: ";
    cin >> num;

    // Check if the input is valid (non-positive numbers)
    if (num < 1) {
        cout << "Invalid Input" << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                cout << i << ": Even" << endl;
            } else {
                cout << i << ": Odd" << endl;
            }
        }
    }

    return 0;
}