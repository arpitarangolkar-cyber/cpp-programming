#include <iostream>
using namespace std;

class Shape
{
protected:
    double length;   // Common parameter
};

class Rectangle : public Shape
{
private:
    double width;

public:
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }

    Rectangle(double len, double wid)
    {
        length = len;
        width = wid;
    }

    double area()
    {
        return length * width;
    }

    void setLength(double len)
    {
        length = len;
    }

    void setWidth(double wid)
    {
        width = wid;
    }

    double getLength()
    {
        return length;
    }

    double getWidth()
    {
        return width;
    }

    ~Rectangle()
    {
        cout << "Rectangle object destroyed" << endl;
    }
};

class Square : public Shape
{
public:
    Square(double side)
    {
        length = side;
    }

    double area()
    {
        return length * length;
    }
};

int main()
{
    Rectangle r(10, 5);
    Square s(5);

    cout << "Rectangle Length = " << r.getLength() << endl;
    cout << "Rectangle Width = " << r.getWidth() << endl;
    cout << "Area of Rectangle = " << r.area() << endl;

    cout << endl;

    cout << "Square Side = " << s.area() / s.area() * 5 << endl;
    cout << "Area of Square = " << s.area() << endl;

    return 0;
}
