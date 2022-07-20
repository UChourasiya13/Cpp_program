//program to understand the concept of abstract class!!
#include<iostream>
using namespace std ;

class rbi {
   
   public :
   virtual double rate()=0 ;

};

class pnb : public rbi {
 
 public :
 double rate(){
     cout<<"rate is :"<<1.2<<endl;
 }

};

class sbi : public rbi
{

public:
    double rate()
    {
        cout << "rate is :" << 2.5 << endl;
    }
};

int main(){
    pnb pobj ;
    sbi sobj ;

    pobj.rate();
    sobj.rate();
    return 0 ;
}
