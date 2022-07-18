//program to understand the  concept of multiple inheritence!!

#include<iostream>
using namespace std ;

class dim1 {
   protected:
   int l , b ;
   public:
   int getArea(){
       return l*b ;
   }
};
class dim2
{
protected:
    int h;
};

class volume : public dim1 , public dim2 {

   public: 
  void setData(int l , int b , int h){
      this->l=l;
      this->b = b;
      this->h = h;
  }

  int  getVolume()
  {
      return getArea()* h ;
  }
};

int main(){
    int l,b,h ;
    cout<<"enter l , b and h" <<endl;
    cin>>l>>b>>h ;

    volume obj ;
    obj.setData(l,b,h);
    cout << "Area:" <<obj.getArea()<< endl;
    cout << "Area:" << obj.getVolume() << endl;
    return 0 ;
}





