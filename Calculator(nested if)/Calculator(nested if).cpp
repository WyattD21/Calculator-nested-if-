#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    if (!(cin >> num1)) {
        cerr << "Error: Please enter a valid number." << endl;
        return 1;
    }
    cout << "Enter the second number: ";
    if (!(cin >> num2)) {
        cerr << "Error: Please enter a valid number." << endl;
        return 1;
    }
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
    }
    else {
        cout << "Error: Invalid operator!" << endl;
        return 1;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
