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
        cout<<"enter roll:"<<endl;
        cin>>roll_no;
        cout<<"enter name:"<<endl;
        getchar();
        cin.getline(name,50);
        cout<<"enter percentage:"<<endl;
        cin>>per;
    }    
        void displayDetail(){
       cout<<"roll no:"<<roll_no<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"percentage:"<<per<<endl;
        
        }

};
int main()
{
  student obj1,obj2;
  obj1.displayDetail();
  obj2.displayDetail();

  return 0;

}


