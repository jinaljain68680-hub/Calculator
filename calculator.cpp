#include <iostream>

using namespace std;

// Function declarations for basic arithmetic operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {
    double num1, num2;
    char operation;
    char choice;

    do {
        cout << "=======================================" << endl;
        cout << "         SIMPLE C++ CALCULATOR         " << endl;
        cout << "=======================================" << endl;
        
        cout << "Enter first number: ";
        cin >> num1;
        
        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;
        
        cout << "Enter second number: ";
        cin >> num2;

        cout << "---------------------------------------" << endl;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator entered!" << endl;
                break;
        }

        cout << "---------------------------------------" << endl;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator! Goodbye." << endl;

    return 0;
}