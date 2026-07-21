#include<iostream>
using namespace std;
int main()
{
int n;
int fact=1;
cout<<"Enter the num:";
cin>>n;
for(int i=1;i<=n;i++)
{
fact=fact*i;
cout<<"The fact of given num is:"<<fact<<endl;
}
return 0;
}
