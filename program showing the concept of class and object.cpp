//program showing the concept of class and object!!
#include<iostream>
using namespace std;
class arithmatic {
    private:
    int a,b;
    public:
    void setdata(int a,int b ){
       this->a=a;
       this->b=b;
        add();//same mean as this->add();
        this->sub();
    }
    void add(){
  cout<<"add:"<<a+b<<endl;
  }
  void sub(){
  cout<<"sub:"<<a-b<<endl;
  }


};

int main(){

    arithmatic obj;
    int a,b;
    cout<<"enter 2 numbers"<<endl;
    cin>>a>>b;
    obj.setdata(a,b);
    
    return 0;


}
