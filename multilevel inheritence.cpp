//program to understand the concept of  multilevel inheritence!!

#include<iostream>
using namespace std ;

class area {
   protected:
   int l , b ;
   public:
   int getArea(){
       return l*b ;
   }
};
class  volume: public area                                         
{
protected:
    int h;

public: 
    int getVolume()
    {
        return getArea()* h;
    }
};

class dimension :   public volume {
  
   private :
   double m ;
   public: 
  void setData(int l , int b , int h , double m){
      this->l=l;
      this->b = b;
      this->h = h;
      this->m= m;
  }

  int  getdimension()
  {
      return m / getVolume() ;
  }
};

int main(){
    int l,b,h ;
    double m;
    cout<<"enter l , b ,h and m" <<endl;
    cin>>l>>b>>h>>m;

    dimension obj ;
    obj.setData(l,b,h ,m);
    cout << "Area:" <<obj.getArea()<< endl;
    cout << "Area:" << obj.getVolume() << endl;
    cout << "Area:" << obj.getdimension() << endl;
    return 0 ;
}





