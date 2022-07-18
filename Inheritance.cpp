//program to understand the concept of single inheritence!!

#include<iostream>
using namespace std;

class area {
    protected:
    int l,b ;
    public:
    int getArea(){
        return l*b ;
    }
};

class volume:public  area{
     private:
     int h;
     public:

     void setData(int l , int b , int h){
         this->l= l;
         this->b= b;
         this->h= h;
     }
     int getVolume(){
         return getArea()*h ;
     }
};

int main(){

  int l,b,h;
  cout<<"enter length , breadth and height "<<endl;
  cin>>l>>b>>h;

  volume obj ;
  obj.setData(l, b, h);
  cout<<"Area:"<<obj.getArea()<<endl;
  cout << "volume:" << obj.getVolume()<<endl;

  return 0; 

}
