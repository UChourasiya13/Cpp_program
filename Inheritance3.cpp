#include<iostream>
using namespace std ;

class shape{
 
  public :

  void show ()
  {
      cout<<"shape !!"<<endl;
  }
};
class rectangle: public shape
{

public:
    void show()
    {
        cout << " rectangle shape " << endl;
    }
};
class circle : public shape
{

public:
    void show()
    {
        cout << " circle shape " << endl;
    }
};
class square : public shape{};


int main(){
    rectangle r ;
    circle c;
    square s;

    r.show();
    c.show();
    s.show();
    return 0;
}
