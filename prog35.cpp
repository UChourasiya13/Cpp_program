//program to understand the concept of array of class!!
#include<iostream>
#include<stdio.h>
using namespace std;
class library {
    private:
    int bookId;
    char name[500];
      public:

      void getDetails(){
          cout<<"enter bookId"<<endl;
          cin>>bookId;
           getchar();
          cout<<"enter name"<<endl;
          cin.getline(name,500);
           }
           void showDetails(){
            cout<<"bookID"<<"\t"<<bookId<<endl;
             cout<<bookId<<"\t"<<name<<endl;
               
           }


   
};
int main()
{
    library book[50];
    int n;
    cout<<"enter no. of books:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cout<<"enter:"<<i+1<<"\tbook detail:"<<endl;
      book[i].getDetails();
   }
    for(int i=0;i<n;i++)
    {
      cout<<"show:"<<i+1<<"\tbook detail:"<<endl;
      book[i].showDetails();
    }
return 0;

} 
