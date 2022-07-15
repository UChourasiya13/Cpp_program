//program to understand the concept of getter and setter!!
#include<iostream>
using namespace std;

class info{
    private:
    string email,passward;
    public:
    void setEmail(string email)
    {
        this->email=email;
    }
     void setpassword(string password)
    {
        this->passward=password;
    }
    string getEmail(){
        return email;
    }
    string getpassword(){
        return passward;
    }

};
int main(){
    info obj;
    string email,password;
    cout<<"enter email"<<endl;
    cin>>email;
    cout<<"enter password"<<endl;
    cin>>password;
    obj.setEmail(email);
    obj.setEmail(password);

    cout<<"------------------"<<endl;
    cout<<"email is :"<< obj.getEmail()<<endl; 
    cout<<"password  is :"<< obj.getpassword()<<endl; 

    return 0; 


}
