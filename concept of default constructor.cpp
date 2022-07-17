//program to understand the concept of constructor!!!
#include<iostream>
using namespace std;
class student{

public:
    student()
    {
        int roll_no=59;
        char name[50]="ujjawal chourasiya";
        double per=91.4;
        
        cout<<"default constructor call"<<endl;
        cout<<"roll no:"<<roll_no<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"percentage:"<<per<<endl;
        
        

    }
   
};
int main()
{
  student obj;
  return 0;

}



