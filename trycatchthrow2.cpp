#include <iostream>
using namespace std;

class ExceptionDemo
{
   public :
        void divide(int a , int b ){
          if (b == 0)
          throw 0;
          int c;
          c = a / b;
          cout << "result:" << c;
   }



};
int main()
{
    ExceptionDemo obj ;
    int a, b;
    cout << "enter value of a and b " << endl;
    cin >> a >> b;
    try
    {
        obj.divide(a, b);
    }
    catch (int x)
    {
        cout << "your tring to divide a number  by zero ";
    }

    return 0;
}
