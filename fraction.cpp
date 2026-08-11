#include <iostream>
using namespace std;
class Fraction {
private:
    int num;
    int den;
public:
    void input() {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;
        while (den == 0) {
            cout << "Denominator cannot be 0. Enter again: ";
            cin >> den;
        }
    }
    void add(Fraction f1, Fraction f2) {
        num = (f1.num * f2.den) + (f2.num * f1.den);
        den = f1.den * f2.den;
    }
    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction frac1, frac2, result;
    cout << "--- First Fraction ---" << endl;
    frac1.input();
    cout << "\n--- Second Fraction ---" << endl;
    frac2.input();
    result.add(frac1, frac2);
    cout << "\nResult of addition: ";
    result.display();
    return 0;
}

