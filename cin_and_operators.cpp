#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Ask for two numbers
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Perform arithmetic operations
    cout << "Sum: " << (a + b) << endl;
    cout << "Difference: " << (a - b) << endl;
    cout << "Product: " << (a * b) << endl;
    cout << "Quotient: " << (a / b) << endl;
    cout << "Remainder: " << (a % b) << endl;

    return 0;
}
