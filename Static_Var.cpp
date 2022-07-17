//program to understand the concept of static variable

#include <iostream>
using namespace std;

class Demo
{
       private :
               static int X;

      public:
              Demo()
              {
                  cout << "value of X is :" << endl;
                  cout << Demo::X <<endl;
                  cout << "---------------" << endl;
              } 
              
};
class Demo1
{
      private:
              static int Y;

     public:
           Demo1()
         {
           cout << "value of Y is :" << endl;
           cout << Demo1::Y;
         }
};
 

int Demo::X = 10;
int Demo1::Y = 10;

int main()
{
     Demo d ;
     Demo1 d1;

  
     return 0;
}
