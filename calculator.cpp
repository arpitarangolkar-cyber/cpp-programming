#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    void acceptNumbers() {
        cout << "Enter first integer: ";
        cin >> a;
        cout << "Enter second integer: ";
        cin >> b;
    }

    void performOperations() {
        cout << "\n--- Calculation Results ---" << endl;
        cout << "Addition (a + b): " << (a + b) << endl;
        cout << "Subtraction (a - b): " << (a - b) << endl;
        cout << "Multiplication (a * b): " << (a * b) << endl;
        
        if (b != 0) {
            cout << "Division (a / b): " << (static_cast<double>(a) / b) << endl;
            cout << "Modulus (a % b): " << (a % b) << endl;
        } else {
            cout << "Division & Modulus: Error (Division by zero)" << endl;
        }
    }
};

int main() {
    Calculator calc;
    calc.acceptNumbers();
    calc.performOperations();
    return 0;
}
