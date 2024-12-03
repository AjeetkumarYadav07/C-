
//  >>>>>> Createa simple calcultor using c++ ///
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    // Input for numbers
    cout << "Enter your first number: "; 
    cin >> a;

    cout << "Enter your second number: ";
    cin >> b;

    // Input for operation
    cout << "Enter operation (+, -, *, /, %): ";
    cin >> op;

    // Switch statement to handle operations
    switch (op) {
        case '+':
            cout << "A + B = " << a + b << endl;
            break;
        case '-':
            cout << "A - B = " << a - b << endl;
            break;
        case '*':
            cout << "A * B = " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "A / B = " << a / b << endl;
            }
            break;
        case '%':
            if (b == 0) {
                cout << "Error: Modulo by zero is not allowed." << endl;
            } else {
                cout << "A % B = " << a % b << endl;
            }
            break;
        default:
            cout << "Invalid operation selected." << endl;
            break;
    }

    return 0;
}
