//program to understand the concept of abstract class !!
#include<iostream>
using namespace std ;

int main(){

    int a , b ;
    cout<<"enter value of a and b "<<endl;
    cin>>a>>b ;
    try
    {
       if( b==0)
       throw "you are trying to divide number by 0 ";
       int c ;
       c = a/b ;
       cout<<"result:"<<c ;
    }
    catch(const char msg[])
    {
        cout<<msg ;
    }

    return 0 ;
}


