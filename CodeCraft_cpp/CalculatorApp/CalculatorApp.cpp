#include <iostream>
#include <limits>
using namespace std;

int main() {
    string input;
    double num1, num2, result;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    
    while (true) {
        cout << "Enter an operation (+, -, *, /): ";
        cin >> input;
        
        if (cin.fail() || input.length() != 1 || 
           (input[0] != '+' && input[0] != '-' && 
            input[0] != '*' && input[0] != '/')) {
            cin.clear();
            cout << "Error: Invalid operation! Please enter +, -, *, or /.\n";
        } else {
            operation = input[0];
            break;
        }
    }

    while (true) {
        cout << "Enter first number: ";
        cin >> num1;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Please enter a valid number.\n";
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter second number: ";
        cin >> num2;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Please enter a valid number.\n";
        } else {
            break;
        }
    }

    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "-----------------" << endl;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "-----------------" << endl;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "-----------------" << endl;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "-----------------" << endl;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!\n";
            }
            break;
        default:
            cout << "Error: Invalid operation!\n";
            break;
    }
    return 0;
}