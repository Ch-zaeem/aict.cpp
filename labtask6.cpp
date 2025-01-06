#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Test case 1: Largest is the first number
    a = 10; b = 5; c = 3;
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else if (a >= b && a >= c) {
        cout << "The largest number is " << a << "." << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is " << b << "." << endl;
    } else {
        cout << "The largest number is " << c << "." << endl;
    }

    // Test case 2: Largest is the second number
    a = 8; b = 15; c = 12;
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else if (a >= b && a >= c) {
        cout << "The largest number is " << a << "." << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is " << b << "." << endl;
    } else {
        cout << "The largest number is " << c << "." << endl;
    }

    // Test case 3: Largest is the third number
    a = 9; b = 12; c = 20;
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else if (a >= b && a >= c) {
        cout << "The largest number is " << a << "." << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is " << b << "." << endl;
    } else {
        cout << "The largest number is " << c << "." << endl;
    }

    // Test case 4: All numbers equal
    a = 7; b = 7; c = 7;
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else if (a >= b && a >= c) {
        cout << "The largest number is " << a << "." << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is " << b << "." << endl;
    } else {
        cout << "The largest number is " << c << "." << endl;
    }

    // Test case 5: Boundary case - Largest is the smallest positive value
    a = 0; b = -1; c = -5;
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else if (a >= b && a >= c) {
        cout << "The largest number is " << a << "." << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is " << b << "." << endl;
    } else {
        cout << "The largest number is " << c << "." << endl;
    }

    return 0;
}

