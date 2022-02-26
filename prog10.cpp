//program showing the concept of switch case statement!!
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter day number"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"sunday"<<endl;
        break;
        case 2:cout<<"monday"<<endl;
        break;
        case 3:cout<<"tueday"<<endl;
        break;
        case 4:cout<<"wednesday"<<endl;
        break;
        case5:cout<<"thursday"<<endl;
        break;
        case 6:cout<<"friday"<<endl;
        break;
        case 7:cout<<"saturday"<<endl;
        break;
        default:cout<<"mismatched"<<endl;
        break;
     }
  return 0;

}