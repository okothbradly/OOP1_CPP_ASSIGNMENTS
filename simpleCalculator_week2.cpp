/* Simple Calculator System for Week 2 Task 3
 * ============================================================
 * Description:
 *   Performs basic arithmetic operations (addition, subtraction,
 *   multiplication, and division) based on user input.
 *
 *   The program prompts the user to enter two numbers and an operator,
 *   then calculates and displays the result of the operation.
 *
*  BCS-05-0044/2025
*  Bradly Okoth
*
*/


#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}