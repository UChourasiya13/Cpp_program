//program to show the concept of abstract class !!

#include<iostream>
using namespace std ;

class series {
   
    public:

    virtual void getdata (int n , int m ) = 0 ;//pure virtual function!!
};

class Evenseries : public series 
{
     public :

      void getdata(int n , int m)
      {
          cout << "even series:"<<endl;
          for (int i = n; i <= m; i++)
          {
              if( i%2==0)
              cout<< i <<"\t " <<endl ;
              
          }
          cout<<endl;
      }

};
class oddseries : public series
{
public:
    void getdata(int n, int m)
    {
        cout << "odd series:" << endl;
        for (int i = n; i <= m; i++)
        {
            if (i % 2 != 0)
                cout << i << " \t " << endl;
        }
        cout << endl;
    }
};

int main(){
  
  int n , m ;
  cout<<"enter starting point and ending point "<<endl;
  cin >>n >>m;
  
  
  Evenseries obj1 ;
  obj1.getdata(n , m);
  oddseries obj2 ;
  obj2.getdata(n, m) ;

  return 0 ;

}
