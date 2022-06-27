//prog
#include<iostream>
using namespace std;

namespace myspace1
{
    int a=100;
}
namespace myspace2
{
   int a=200;   
}

using namespace myspace1;
int main(){

    cout<<"value of a:"<<a<<endl;
    return 0;
}

