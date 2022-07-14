//structure basic prog
#include<iostream>
using namespace std;
 struct student
 {
    int rollno;
    char name[50];  
    double per;
    
    void title()
    {
        cout<<"----display student details----"<<endl;
    }

    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"roll no.:"<<rollno<<endl;
        cout<<"percentage:"<<per<<endl;
    }


 };

int main()
{
   struct student s;
   cout<<"enter name of a student"<<endl;
   cin.getline(s.name,50);
   cout<<"enter roll number of a student"<<endl;
   cin>>s.rollno;
   cout<<"enter percentage of a student"<<endl;
   cin>>s.per;
   s.title();
   s.display();

   return 0;
}
