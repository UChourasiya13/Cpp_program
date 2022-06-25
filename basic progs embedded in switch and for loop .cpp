//program showing the concept of  switch statements!!
#include<iostream>
using namespace std;
int main()
{    
    int NUM;
    cout<<"enter the number of times to run the program\n\n"<<endl;
    cin>>NUM;
    for(int count=1;count<=NUM;count++)
    {
     int n;
    cout<<"enter a no. for the following:"<<endl;
    cout<<"enter 1 to cheeck fibonacci series"<<endl;
    cout<<"enter 2 to cheeck armstrong no "<<endl;
    cout<<"enter 3 to cheeck reverse no"<<endl;
    cout<<"enter 4 to cheeck prime no"<<endl;
    cout<<"enter 5 to cheeck palindrome"<<endl; 
    cin>>n;
    switch(n)
    {
        case 1:
        { 
        int no,a=-1,b=1,c;
        cout<<"enter the no till you want fibonacci series:"<<endl;
        cin>>no;
        for(int i=1;i<=no;i++)
      { 
         c=a+b;
         cout<<"  "<<c;
         a=b;
         b=c;
      }
      break;
       }
    

      
        case 2:
       { int N,r,C,sum=0,var;
        
        cout<<"enter no to check whether it is armstrong"<<endl;
        cin>>N;
        var=N;
       while(N>0)
      {  
        r=N%10;
        C=r*r*r;
        sum=sum+C;
        N=N/10;
       
       }
        if(sum==var)
        cout<<"entered no is a armstrong no"<<endl;
        else
        cout<<"entered no is not a armstrong no"<<endl;
       break;
       }
      

       case 3:{
       int x,rev=0,rem;
       cout<<"enter the number for reversing"<<endl;
       cin>>x;
       while(x>0)
       {
         rem=x%10;
         rev=rev*10+rem;
         x=x/10;
         }
       cout<<"reverse number is:"<<rev<<endl;
       break;
       }

       case 4:{
         int k,j;
         cout<<"enter a no. to check whether it is prime or not"<<endl;
         cin>>k;
         j=2;
         while(j<=k-1)
         {
           if(k%j==0)
          {
          cout<<"not a prime no."<<endl;
          break;
          }
         j++;
         }
         if (j==k)
         cout<<"prime no"<<endl;
        break;
       }
       
       case 5:
       {
         int m,v,rm,sm=0;
         cout<<"enter a number for palindrome"<<endl;
         cin>>m;
         m=v;
         while(m>0)
         {
           rm=m%10;
          sm=sm*10+rm;
          m=m/10;
          }
          if(sm==v)
          {
            cout<<"palindrome no is palindrome"<<endl;
          }
          else
          cout<<"not a palindrome"<<endl;
          break;
         }
         default:
         cout<<"not matched"<<endl;

  }
    }
    return 0;
    

}
