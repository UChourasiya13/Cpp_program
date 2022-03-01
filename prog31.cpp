//program to understand the concept of default argument
#include<iostream>
using namespace std;
class demo{
    public:
    void add(int a,int b,int c=0,int d=0)
    {
        cout<<"add:"<<a+b+c+d<<endl;
    }
};
int main(){
    demo obj;   
    obj.add(1,2);
    obj.add(1,2,3);
    obj.add(1,2,3,4);
    return 0;


}