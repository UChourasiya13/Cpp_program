#include<iostream>
using namespace std;
class demo{

private:
int a=100;
public:
void show()
{
    cout<<"show a:"<<a<<endl;
}
};

int main(){
    demo obj;
    obj.show();
    return 0;
}
