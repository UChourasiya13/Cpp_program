//program to understand the concept of friend function 

#include<iostream>
using namespace std ;

class rec
{ 
    private:
    int l , b ;
    
    public:

      void  setdata( int l , int b){
       this->l=l;
       this->b=b ;
       }
 
      friend void showdata( rec obj ) ;
      friend int showarea(rec obj);
};

void showdata(rec obj){
    cout<<"l is :"<<obj.l<<endl;
    cout<<"b is :"<<obj.b<<endl ;
}

int showarea(rec obj){
    
    return (obj.l*obj.b) ;
}
int main()
{  
    rec obj;
    int l , b ;
    cout<<"enter length and breadth "<<endl;
    cin>>l>>b ;
    
    obj.setdata( l , b) ;
    showdata( obj ) ;
    cout << "------------------" << endl;
    cout << "area of rectange is : " << showarea(obj)<<endl;
   
    return 0 ;
}


