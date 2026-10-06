#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "Employee Salary" << endl;
    }
};

class Manager : public Employee
{
public:
    void calculateSalary() override
    {
        cout << "Manager Salary = 50000" << endl;
    }
};

class Developer : public Employee
{
public:
    void calculateSalary() override
    {
        cout << "Developer Salary = 40000" << endl;
    }
};

int main()
{
    Employee *ptr;

    Manager m;
    Developer d;

    ptr = &m;
    ptr->calculateSalary();

    ptr = &d;
    ptr->calculateSalary();

    return 0;
}
