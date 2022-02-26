//program showing the concept of call by value
#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"after swapping in swap:"<<a<<"b:"<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter the number for swapping"<<endl;
    cin>>a>>b;
    cout<<"before swapping the value of a:"<<a<<"b:"<<b<<endl;
    swap(a,b);
     cout<<"after swapping in main:"<<a<<"b:"<<b<<endl;

}