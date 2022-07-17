#include<iostream>
using namespace std;

class demo
{
    public:
    void show();
    
    
};
void demo::show(){
  cout<<"show method called"<<endl;  
}

int main()
{
    demo obj;
    obj.show();

    return 0;

}
