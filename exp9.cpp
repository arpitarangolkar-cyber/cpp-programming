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

class Square : public Shape
{
    int s;

public:
    Square(int side)
    {
        s = side;
    }

    void area() override
    {
        cout << "Area of Square = " << s * s << endl;
    }
};

int main()
{
    Shape *ptr;
    Square s(6);

    ptr = &s;
    ptr->area();

    return 0;
}
