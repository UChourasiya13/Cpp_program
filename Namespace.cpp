//prog to print value  twice
#include<iostream>
using namespace std;

namespace myspace1{
    int a=100;
    void show(){
        cout<<"myspace1 a :"<<a<<endl;
    }
}
    namespace myspace2{
    int a=200;
    void show(){
        cout<<"myspace2 a :"<<a<<endl;
    }
}
int main(){

    myspace1::show();
    myspace1::show();
   
    return 0;
}
