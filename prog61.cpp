#include<iostream>
#include<string.h>
using namespace std ;

class student{
  protected:
  int rn ;
  char name[50];
};
class marks: public student 
{ 
    protected :
    int p , c , m ;
};
class session
{
    protected:
    int in , ex ;
};
class result : public marks , public session
{ 

public:
        
 void setData (char name[50], int rn, int p,int c ,int m , int in ,int ex)
 {
     strcpy(this->name , name);
     this->rn=rn ;
     this->p = p;
     this->c =c;
     this->m = m;
     this->in = in;
     this->ex = ex;
  }
  void displayData()
  {
      cout<<"name is :"<<name<<endl;
      cout << "roll number is :" << rn << endl;
      cout << " physics marks is :" << p << endl;
      cout << " chemistry marks is :" << c << endl;
      cout << " maths marks is :" << m << endl;
      cout << " internal marks is :" << in << endl;
      cout << " external marks is :" << ex << endl;
 }

  void calculation(){
      int total = p+c+m+in+ex ;
      int percentage = total /3 ;
      cout<<"total marks is "<<total <<endl;
      cout<<"percentage is "<<percentage<<endl;
  }

};

int main(){
 char name[50];
 cout << "enter name " << endl;
 cin.getline(name, 50);
 int rn , p , c , m , in , ex ; 
  cout<<"enter roll number"<<endl;
 cin>>rn;
 cout<<"enter marks of physics, chemistry , maths"<<endl;
 cin>>p>>c>>m ;
 cout<<"enter internal and external marks"<<endl;
 cin>>in>>ex;
 
result obj ;
obj.setData( name, rn,  p,  c,  m,  in,  ex);
obj.displayData() ;
obj.calculation();

return 0;


}