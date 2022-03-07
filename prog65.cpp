//program to understand the concept of diamond shape amiguity and virtual base class
#include<iostream>
using namespace std;

class A {
    public:
    void show(){
        cout<<"parents called"<<endl;
    }

};
class B : virtual public A{};
class C : virtual public A{};
class D: public B, public C
{};

int main(){
    D obj ;
    obj.show();
    return 0;
}