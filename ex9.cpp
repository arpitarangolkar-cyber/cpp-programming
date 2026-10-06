#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape
{
    int l, b;

public:
    Rectangle(int length, int breadth)
    {
        l = length;
        b = breadth;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main()
{
    Shape *ptr;
    Rectangle r(10, 5);

    ptr = &r;
    ptr->area();

    return 0;
}
