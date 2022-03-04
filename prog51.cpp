// program to understand the concept of friend function 

#include<iostream>
using namespace std ;

class Distance {

    private :
    int km , m ;

    public :

    void setdata( int km , int m ){
        this->km=km ;
        this->m=m ;
    }
    void displaydata()
    {
        cout<<"km :"<<km <<"\t"<<"m :"<<m<<endl ;
    }

    friend Distance addDistance ( Distance d1 , Distance d2 ) ;
};
Distance addDistance(Distance d1, Distance d2){
    Distance obj ;

    obj.km = d1.km + d2.km ;
    obj.m = d1.m + d2.m;

    while( obj.m>= 1000){
        obj.m -= 1000;
        obj.km += 1;

    }

    return obj ;

}

    int main()
{
    int km1 , km2 , m1 , m2 ;

    cout<<"enter distance  "<<endl;
    cin>>km1>>m1 ;
    cout << " again enter distance  " << endl;
    cin >> km2 >> m2;

    Distance d1 , d2 , d3;
    d1.setdata( km1 , m1 ) ;
    d2.setdata(km2, m2);

    cout<<"----------------"<<endl;
    d1.displaydata() ;
    d2.displaydata() ;

    cout <<"----------------"<< endl;
    
    d3 = addDistance(d1, d2);
    d3.displaydata();


    return 0 ;
}