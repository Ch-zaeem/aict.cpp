#include <iostream>
using namespace std;

int main() {
    // Prompt the user to input a number
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    // Handle the edge case when n <= 0
    if (n <= 0) {
        cout << "No numbers to process." << endl;
        return 0;
    }

    // Initialize a counter for numbers divisible by 3
    int count = 0;

    // Use a for loop to count numbers divisible by 3
    cout << "Numbers divisible by 3: ";
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;

    // Display the count
    cout << "Count: " << count << endl;

    return 0;
}
