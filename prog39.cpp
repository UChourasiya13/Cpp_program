 //program to understand the concept of constructor!!!
#include<iostream>
#include<string.h>
using namespace std;
class student{
    int roll_no;
        char name[50];
        double per;

public:

    student()
    {
         roll_no=59;
         strcpy(name,"ujjawal chourasiya");
         per=91.4;
    }    
        void displayDetail(){
        cout<<"default constructor call"<<endl;
        cout<<"roll no:"<<roll_no<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"percentage:"<<per<<endl;
        
        }

    
   
};
int main()
{
  student obj;
  obj.displayDetail();

  return 0;

}



