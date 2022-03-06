//program to understand the concept of (binary)operator overloading

#include <iostream>
using namespace std;

class Distance {

    private  :

    int km , m ;

    public :

   void setDistance( int km , int m ){
      
      this->km = km ;
      this->m = m ;
      }
   void display( ){
       cout<< "\t"<<km <<"\t"<<m<<endl;
   }

   Distance operator+( Distance d2)
   {

       Distance obj;
       obj.km = km + d2.km;
       obj.m = m + d2.m;

       while (obj.m >= 100)
       {
           obj.m -= 1000;
           obj.km += 1;
       }

       return obj;
   }
};

int main(){
Distance d1 , d2 , d3;

int km1 , km2 , m1 , m2 ;

cout<<"enter km and m "<<endl;
cin>>km1>>m1 ;
cout<<"enter km and  m again "<<endl;
cin>>km2>>m2 ;

d1.setDistance( km1 , m1) ;
d2.setDistance( km2 , m2) ;

cout<<"----------------------"<<endl;
cout<<"\t km   \t m "<<endl;
cout<<"----------------------"<<endl;

d1.display();
d2.display();

cout<<"----------------------"<<endl;

d3 =   d1 + d2;
d3.display() ;

return 0 ;

}
 