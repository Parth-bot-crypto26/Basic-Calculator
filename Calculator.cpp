#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void displayMenu() {
    cout << "------------------- Calculator Menu -------------------" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "6. Exponentiation (^)" << endl;
    cout << "7. Integer Division (//)" << endl;
    cout << "8. Exit" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Please select an operation (1-8): ";
}

int main() {
    double num1, num2, result;
    int choice;
    char op;

    cout << "Welcome to the Extended Arithmetic Operations Program!" << endl;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 8) {
            cout << "Exiting the program. Thank you!" << endl;
            break;
        }

        cout << "Please enter the first number: ";
        cin >> num1;
        cout << "Please enter the second number: ";
        cin >> num2;

        switch(choice) {
            case 1:
                result = num1 + num2;
                op = '+';
                break;
            case 2:
                result = num1 - num2;
                op = '-';
                break;
            case 3:
                result = num1 * num2;
                op = '*';
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    op = '/';
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                    continue;
                }
                break;
            case 5:
                if (static_cast<int>(num2) != 0) {
                    result = static_cast<int>(num1) % static_cast<int>(num2);
                    op = '%';
                } else {
                    cout << "Error: Modulus by zero is not allowed." << endl;
                    continue;
                }
                break;
            case 6:
                result = pow(num1, num2);
                op = '^';
                break;
            case 7:
                if (static_cast<int>(num2) != 0) {
                    result = static_cast<int>(num1) / static_cast<int>(num2);
                    op = '/';
                } else {
                    cout << "Error: Integer division by zero is not allowed." << endl;
                    continue;
                }
                break;
            default:
                cout << "Error: Invalid choice. Please select a valid operation." << endl;
                continue;
        }

        cout << "The result of " << num1 << " " << op << " " << num2 << " is: " << fixed << setprecision(2) << result << endl;
    }

    return 0;
}
