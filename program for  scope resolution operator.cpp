//program to understand the concept of scope resolution operator!!!
#include<iostream>
using namespace std;
class demo1{
    public:
    void show();
};
class demo2{
     public:
    void show();
};
void demo1::show(){
    cout<<"demo1 method called"<<endl;
}
void demo2::show(){
    cout<<"demo2 method called"<<endl;
}

int main(){
    demo1 obj1;
    
    demo2 obj2;
    obj1.show();
    obj2.show();


}
