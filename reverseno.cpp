#include<iostream>
using namespace std;
int main()
{
  int num,remainder;
  int reverseno=0;
  cout<<"Enter the number:";
  cin>>num;
  while(num!=0)
  {
  remainder=num%10;
  reverseno=reverseno*10+remainder;
  num/=10;
  }
  cout<<"Reversed number="<<reverseno<<endl;
  return 0;
}
