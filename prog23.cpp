//program to understand the concept of class!!
#include<iostream>
using namespace std;
class arithmatic
{
   public:
   void add(int a,int b){
     cout<<"add:"<<a+b<<endl;
   }
   void sub(int a,int b){
       cout<<"add:"<<a-b<<endl;
   }
   
   void mul(int a,int b){
       cout<<"add:"<<a*b<<endl;
   }
   

};

int main(){
    arithmatic obj;
    int a,b;
    cout<<"enter numbers:"<<endl;
    cin>>a>>b;
    obj.add(a,b);
    obj.sub(a,b);
    obj.mul(a,b);
    return 0;
}