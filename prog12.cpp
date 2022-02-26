//program showing the concept of array!!!
#include<iostream>
using namespace std; 
int size,i;//globally declaration
int getMinimum(int a[]){
    int min=a[0];
    cout<<"array elements are:"<<endl;
    for(int i=0;i<=size;i++)
    {
       cout<<a[i]<<"\t";
       if(min>a[i])
       min=a[i]; 
    }
    return min;

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
  cout<<"minimum elements :"<<getMinimum(a)<<endl;
  return 0;


}