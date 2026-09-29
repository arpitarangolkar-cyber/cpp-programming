#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val = 0) {
        value = val;
    }

    Number operator + (const Number& obj) {
        Number temp;
        temp.value = this->value + obj.value;
        return temp;
    }
    void display() {
        cout << value << endl;
    }
};

int main() {
int a1,a2;
cout<<"Enter the two numbers:";
cin>>a1>>a2;
    Number n1(a1);
    Number n2(a2);
    Number n3;

    n3 = n1 + n2; 

    cout << "Result of n3 = n1 + n2 is: ";
    n3.display();

    return 0;
}
