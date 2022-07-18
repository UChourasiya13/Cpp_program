//program to understand the concept of (binary)operator overloading

#include <iostream>
#include<string.h>
using namespace std;

class stringdemo{

      private :
      char name[50];

      public :

      void getstring(){
          cout<<"enter name :"<<endl;
          cin.getline(name , 50);
      }

      void display(){
          cout<<"string "<<name <<endl; 
      }

      stringdemo operator +( stringdemo s2) 
     {   stringdemo obj ;
         strcat( name, s2.name);
         strcpy(obj.name, name);
         return obj ;
     }
};


int main()
{
    stringdemo s1 , s2 , s3 ;
    s1.getstring();
    s2.getstring();
    s3 = s1 + s2;
    cout<<"after overloading"<<endl;
    s3.display();

}
