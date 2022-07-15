//program to understand the concept of scope resolution operator
#include<iostream>
using namespace std;
int m=100;//globally declaration of m!!
int main(){

    int m=200;//locally declaration of m!!
    cout<<"value of m:"<<m<<endl;
    cout<<"value of m:"<<::m<<endl;
    cout<<"-----------------------"<<endl;
    { int k=m;
    int m=300;
    
        cout<<"value of m:"<<k<<endl;
       cout<<"value of m:"<<m<<endl;
    }
    cout<<"-----------------------"<<endl;
    cout<<"value of m:"<<::m<<endl;
   return 0;
   }
