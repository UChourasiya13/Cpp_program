//program showing the concept of reference variable
#include<iostream>
using namespace std;

int main()
{
  int a=100;/*normal variable*/
  int &ref=a;
  cout<<"a:"<<a<<endl;
  cout<<"a:"<<a<<endl;
  
  ref=200;
  cout<<"a:"<<a<<endl;
  a=500;
  cout<<"ref:"<<ref;
  return 0;
}