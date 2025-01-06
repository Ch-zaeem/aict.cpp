#include <iostream>
using namespace std;

int main() {
    int math, english;
    float percentage;

    // Input scores for Math, English, and Overall Percentage
    cout << "Enter Math score: ";
    cin >> math;
    cout << "Enter English score: ";
    cin >> english;
    cout << "Enter Overall Percentage: ";
    cin >> percentage;

    // Check eligibility for scholarship
    if ((math >= 85) && (english >= 80) && (percentage > 90.0)) {
        cout << "Eligible for Scholarship." << endl;
    } else {
        cout << "Not Eligible." << endl;
    }

    return 0;
}