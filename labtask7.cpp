#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the operation (+, -, *, /, %): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    // Switch case for operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "num1: " << num1 << endl;
            cout << "operation: " << operation << endl;
            cout << "num2: " << num2 << endl;
            cout << "The result is " << result << "." << endl;
            break;
        
        case '-':
            result = num1 - num2;
            cout << "num1: " << num1 << endl;
            cout << "operation: " << operation << endl;
            cout << "num2: " << num2 << endl;
            cout << "The result is " << result << "." << endl;
            break;
        
        case '*':
            result = num1 * num2;
            cout << "num1: " << num1 << endl;
            cout << "operation: " << operation << endl;
            cout << "num2: " << num2 << endl;
            cout << "The result is " << result << "." << endl;
            break;
        
        case '/':
            if (num2 == 0) {
                cout << "Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "num1: " << num1 << endl;
                cout << "operation: " << operation << endl;
                cout << "num2: " << num2 << endl;
                cout << "The result is " << result << "." << endl;
            }
            break;
        
        case '%':
            if (num2 == 0) {
                cout << "Division by zero is not allowed for modulus operation." << endl;
            } else {
                result = (int)num1 % (int)num2;
                cout << "num1: " << num1 << endl;
                cout << "operation: " << operation << endl;
                cout << "num2: " << num2 << endl;
                cout << "The result is " << result << "." << endl;
            }
            break;

        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}