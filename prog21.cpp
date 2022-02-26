//program to understand the concept of class
#include<iostream>
using namespace std;
class demo
{   
    private:
    
        void display()
        {
            cout<<"display method called"<<endl;
        }
 
    public:
    void show()
    {
       display();
    }

};
int main()
{
    demo obj;
    obj.show();
}