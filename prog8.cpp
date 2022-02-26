//prog showing the concept of if else!
#include<iostream>
using namespace std;
int main()
{
    int sal,exp;
    cout<<"enter the salary and experience"<<endl;
    cin>>sal>>exp;
    if(sal>=3000 && exp>=5)
    cout<<"get a hike"<<endl;

    else 
    cout<<"not get hike"<<endl;
    return 0;
}