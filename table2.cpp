#include<iostream>
using namespace std;
int main()
{
  int n;
  int table=1;
  cout<<"Enter the number:";
  cin>>n;
  for(int i=1;i<=10;i++)
  {
  table=n*i;
  cout<<"The table of given number is :"<<table<<endl;
  }
  return 0;
}
