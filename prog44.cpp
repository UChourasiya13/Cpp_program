 //program to understand the concept of copy constructor!!!
#include<iostream>
#include<string.h>
using namespace std;
class student{
        int roll_no;
        char name[50];
public:
    
    student(){
        cout<<"default constructor called " <<endl ;
    }

    student(int roll_no,char name[])
    {
       this->roll_no=roll_no;
       getchar();
       strcpy(this->name,name);
      
       cout<<"parameterized constructor called"<<endl;
    }    
        void displayDetail(){
       cout<<"roll no:"<<roll_no<<endl;
        cout<<"name:"<<name<<endl;
     }

     student( const student & s)
     {

        roll_no = s.roll_no ;
        strcpy( name , s.name );
     }

};
int main()
{    
    
    int roll_no ;
    char name[50] ;

    cout<<"enter roll number of student "<<endl;
    cin>>roll_no;
    
    
    cout<<"enter name  of student "<<endl;
    getchar();
    cin.getline( name , 50) ;

    student obj( roll_no , name ) , obj1(obj) ;
    obj.displayDetail();

    cout<<"after copying "<<endl;
    obj1.displayDetail() ;
   
    return 0 ;

    
}
