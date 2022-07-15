//program to understand the concept of method overloading!!
#include<iostream>
using namespace std;
class overloading{
    public:
    void greater(int a,int b){
    
        cout<<"greater no:"<<(a>b?a:b)<<endl;
    }
    void greater(int a,int b,int c){
        cout<<"greater no:"<<(a>b? a>c?a:c: b>c?b:c)<<endl;
    }
    

};
int main()
{
    overloading obj;
    obj.greater(44,33);
    obj.greater(110,200,31);
    
    return 0;

}

