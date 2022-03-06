//program to understand the concept of friend function
 #include<iostream>
 using namespace std ;
 class B ;
 class A {
        
        private :

        int a ;

        public:
        A(){
            cout<<"enter the value of a :"<<endl;
            cin>> a;
        }

        friend void sum( A aobj , B bobj )  ;
      
 };

 class B
 {

 private:
     int b;

 public:
     B()
     {
         cout << "enter the value of b :" << endl;
         cin >> b;
     }

     friend void sum(A aobj, B bobj);
 };
 void sum(A aobj, B bobj){

     cout<<"sum is :"<<aobj.a + bobj.b<<endl;
 }

     int main()
 {
     A aobj ;
     B bobj ;

     sum(aobj, bobj);
 }