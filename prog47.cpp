
//program to understand the concept of static variable 

#include<iostream>
using namespace std ;

class Demo {

    public :
    static int X ;
};

int Demo::X=10 ;

int main(){
   cout<<"value of X is :"<<endl;
   cout<<Demo::X ;
   return  0;
}