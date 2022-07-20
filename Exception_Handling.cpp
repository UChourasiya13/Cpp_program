#include <iostream>
using namespace std;

class ExceptionDemo
{
   public :
        void divide(int a , int b )
       {
        try
           {
                if (b == 0)
                    throw 0;
                int c;
                c = a / b;
                cout << "result:" << c;
            }
          catch (int x){
          cout << "your trying to divide a number  by zero ";
          }
       } 
};
int main()
{
    int a, b;
    cout << "enter value of a and b " << endl;
    cin >> a >> b;
    ExceptionDemo obj;
    obj.divide( a, b);
     return 0;
}
