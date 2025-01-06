#include <iostream>
using namespace std;

string determineTriangleType(double a, double b, double c) {
    // Check if the input forms a valid triangle using the triangle inequality rule
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            return "The triangle is Equilateral.";
        } else if (a == b || b == c || a == c) {
            return "The triangle is Isosceles.";
        } else {
            return "The triangle is Scalene.";
        }
    } else {
        return "The given sides do not form a valid triangle.";
    }
}

int main() {
    double a, b, c;

    // Input values for the sides of the triangle
    cout << "Enter the length of Side A: ";
    cin >> a;
    cout << "Enter the length of Side B: ";
    cin >> b;
    cout << "Enter the length of Side C: ";
    cin >> c;

    // Determine the type of triangle and print the result
    string result = determineTriangleType(a, b, c);
    cout << result << endl;

    return 0;
}

