//program to understand the concept of method overloading!!
#include<iostream>
using namespace std;
class overloading{
    public:
    void add(int a,int b){
        cout<<"sum:"<<a+b<<endl;
    }
    void add(int a,int b,int c){
        cout<<"sum:"<<a+b+c<<endl;
    }
    void add(int a,int b,int c,int d){
        cout<<"sum:"<<a+b+c+d<<endl;
    }

};
int main()
{
    overloading obj;
    obj.add(1,2);
    obj.add(1,2,3);
    obj.add(1,2,3,4);
    return 0;

}



