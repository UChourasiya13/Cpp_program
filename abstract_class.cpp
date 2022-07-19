//program to understand the concept of abstract class!!!

#include<iostream>
using namespace std;

class abstractParent{
   
   public :
   virtual void show()=0; 

};

class child :public abstractParent{
     public:
     void show(){
         cout<<"show method call!!!"<<endl;
     }
};

int main(){
    child cobj ;
    cobj.show();
    return 0;
}


