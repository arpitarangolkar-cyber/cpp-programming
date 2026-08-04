#include<iostream>
using namespace std;
class circle
{
  private:
  double radius;
  public:
  void acceptradius()
  {
    cout<<"Enter the radius of circle:";
    cin>>radius;
  }
void calculateanddisplay()
{
  double area=3.14159*radius*radius;
  double circum=2*3.14159*radius;
  cout<<"Area: "<<area<<endl;
  cout<<"Circumference: "<<circum<<endl;
  }
};
int main()
{
  circle c;
  c.acceptradius();
  c.calculateanddisplay();
  return 0;
}
