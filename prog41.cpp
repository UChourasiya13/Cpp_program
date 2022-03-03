 //program to understand the concept of constructor!!!
#include<iostream>
#include<string.h>
using namespace std;
class student{
        int roll_no;
        char name[50];
        double per;
    
public:

    student(int roll_no,char name[],double per)
    {
       this->roll_no=roll_no;
       getchar();
       strcpy(this->name,name);
       this->per=per;
       cout<<"parameterized constructor called"<<endl;
    }    
        void displayDetail(){
       cout<<"roll no:"<<roll_no<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"percentage:"<<per<<endl;
        
        }

};
int main()
{    
        int roll_no;
        char name[50];
        double per;
        cout<<"enter roll:"<<endl;
        cin>>roll_no;
        cout<<"enter name:"<<endl;
        getchar();
        cin.getline(name,50);
        cout<<"enter percentage:"<<endl;
        cin>>per;
       
       student obj(roll_no,name,per);
       obj.displayDetail();

  

  return 0;

}
