 //program to understand the concept of passing object in a function!!!
#include<iostream>
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

  void addDistance( Distance d1 , Distance d2 ){
    
    km = d1.km +d2.km ;
    m = d1.m + d2.m ;

    while(m>= 100){
        m-=1000;
        km += 1 ;
    }

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
d3.addDistance( d1 , d2) ;
d3.display() ;

return 0 ;

}

