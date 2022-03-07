
// program to understand the concept of method overriding/ runtime polymorphism

#include<iostream>
using namespace std ;

class parent {
    public :

    void show(){
        cout<<"m or tm or humara safar"<<endl;
    }
};

class child : public parent{
    public:
    void show()
    {
        cout << " safar khubsurat hai manjil se bhi!!" << endl;
    }
};

int main(){
    child c1 ;
    c1.show();
}
