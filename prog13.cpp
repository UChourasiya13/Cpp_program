//program for maximum num!!
#include<iostream>
using namespace std;
int size,i;//globally variable declaration!!
int getMaximum(int a[])
{
  int max=a[0];
  cout<<"array elements are:"<<endl;
  for(int i=0;i<=size;i++)
  {
      cout<<a[i]<<"\t";
      if(max<a[i])
      max=a[i];

  }  
  return max;
}
int main()
{ 
  int a[50];
  cout<<"enter the size of an array"<<endl;
  cin>>size;
  for(int i=0;i<=size;i++)
  {
      cin>>a[i];
  }
  cout<<"maximum numbers:"<<getMaximum(a)<<endl;
  return 0;
}