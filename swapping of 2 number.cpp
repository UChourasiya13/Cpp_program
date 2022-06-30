//  swapping of number
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout<<"value of a:"<<a;
    cout<<"value of b:"<<b;
    cout<<"after swapping "<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    return 0;
}
