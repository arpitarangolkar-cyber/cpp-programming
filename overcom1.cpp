#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
int i1,i2,j1,j2;
cout<<"Enter the two complex numbers:";
cin>>i1>>i2>>j1>>j2;
    Complex C1(i1,j1);
    Complex C2(i2,j2);

    Complex C3 = C1 + C2;

    cout << "C1 = ";
    C1.display();

    cout << "C2 = ";
    C2.display();

    cout << "C3 = ";
    C3.display();

    return 0;
}
