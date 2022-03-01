//program to understand the concept of method overloading!!
#include<iostream>
using namespace std;
class overloading{
    public:
    void greater(int a,int b){
    
        cout<<"greater no:"<<(a>b?a:b)<<endl;
    }
    void greater(double a,double b){
        cout<<"greater no:"<<(a>b?a:b)<<endl;
    }
    

};
int main()
{
    overloading obj;
    obj.greater(44,33);
    obj.greater(11.0,20.0);
    
    return 0;

}
/* int greater(int a, int b){

}

  double greater(int a,int b){

  }
  this is not possible!!!!
*/

