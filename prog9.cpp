//program showing the concept of else if ladder!!
#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"enter any character:"<<endl;
   cin>>ch;
   
   if(ch>='A' && ch<='Z')
   cout<<"character is in uppercase"<<endl;
   else if(ch>='a' && ch<='z')
   cout<<"character is in lowercase"<<endl;
  else if(ch>=48 && ch<=57)
   cout<<"character is a digit"<<endl;
   else
   cout<<"mismatched"<<endl;
   return 0;


}