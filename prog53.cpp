//program to understand the concept of operator overloading 
 
 #include<iostream>
 using namespace std ;

 class Demo {

     private :
      int num ;

      public :
       Demo(){
           cout<<"enter number :"<<endl;
           cin>>num ;
        }
        void display(){
            cout<<"value of num is :"<<num<<endl;
        }


      void operator ++( )
      {
          num= 10 ;
      }  

 };

  int main()
  {
      Demo obj ;
      obj.display();
      ++obj ;
      cout<<"------------------"<<endl;
      cout<<"after overloading :"<<endl;
      obj.display();

      return 0 ;
  }
 