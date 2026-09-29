#include <iostream>
using namespace std;

class Number {
private:
    int x;

public:
    Number(int val) {
        x = val;
    }

    void operator++() {
        x = x+1;
    }

    void display() {
        cout << x << endl;
    }
};

int main() {
    int a;
    cout << "Enter an integer value: ";
    cin >>a;

    Number n1(a);

    cout << "Original value: ";
    n1.display();

    ++n1; 

    cout << "increment of given integer: ";
    n1.display();

    return 0;
}
