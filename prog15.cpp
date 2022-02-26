//program showing the concept of string converting into uppercase
#include<iostream>
#include<string.h>
using namespace std;
void getuppercase(string str)
{
     int len=0;
     while(str[len]!='0')
     {
         len++;
     }
    
     for( int i=0;i<len;i++)
     {
         if(str[i]>=97 && str[i]<=122)
         str[i]=str[i]-32;
     }
     cout<<"string in uppercse:"<<str<<endl;
}

int main()
{
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    cout<<"string :"<<str<<endl;
    getuppercase(str);
    return 0;
}
