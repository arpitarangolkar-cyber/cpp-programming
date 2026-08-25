#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
  int employeeID;
  string name;
  float salary;
public:
  Employee() {
    employeeID=0;
    name="none";
    salary=0.0;
}
  Employee(int id,string n, float s){
    employeeID-id;
    name=n;
    salary=s;
  }
  Employee(const Employee &emp){
    employeeID=emp.employeeID;
    name=emp.name;
    salary=emp.salary;
}
  void display() {
    cout<<"ID;"<<employeeID<<" name: "<<name<<"Salary:"<<salary<<endl;
    }
};
int main(){
  Employee emp1;
  Employee emp2(100,"Arpita",80000.0);
  Employee emp3=emp2;
  
  cout<<"Employee 1:";
  emp1.display();
  cout<<"Employee 2: ";
  emp2.display();
  cout<<"Employee 3:";
  emp3.display();
  
  return 0;
}
  
