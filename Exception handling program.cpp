//program to understand the concept of exception handling !!
#include<iostream>
using namespace std ;

class ExceptionHandling 
{ 
   public :

   void divide(int a , int b )
      {  
          try
          {
             if( b==0)
                throw 0 ;
                int c = a / b;
             if (c > 5)
                throw  "result is greater than 5" ;
               else
                 cout<<"result :"<< c <<endl ;
           }
          catch( const char msg[])
          {
              cout<< msg;
          }
          catch ( int x)
          {
              cout << x ;  
          }
       } 
};

int main()
{

    int a , b ;
    cout<<"enter the value of a and b "<<endl; 
    cin>>a>>b ;
    ExceptionHandling obj ;
    obj.divide( a , b );
    return 0 ;

}
