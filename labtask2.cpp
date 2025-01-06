#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input values for the sides of the triangle
    cout << "Enter the length of Side A: ";
    cin >> a;
    cout << "Enter the length of Side B: ";
    cin >> b;
    cout << "Enter the length of Side C: ";
    cin >> c;

    // Check if the input forms a valid triangle using the triangle inequality rule
    if (a + b > c && a + c > b && b + c > a) {
        // Determine the type of triangle
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}