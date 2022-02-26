//program showing the concept of class and object
#include<iostream>
using namespace std;

class sum
{
  public:
  void add(int a,int b){
  cout<<"add:"<<a+b<<endl;
  }

};
int main()
{
  sum obj;
  int a,b;
  cout<<"enter the 2 digit number"<<endl;
  cin>>a>>b;
  obj.add(a,b);
 return 0;

}