// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    BankCustomer() {
        this->name="";
        this->adharNumber="";
        this->panNumber="";
        this->emailId="";
        this->phoneNumber="";
    }
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg): BankCustomer(){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
    }
    
       BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string emailArg,string phoneArg):
       BankCustomer( nameArg, adharNumberArg, panNumberArg)
       {
        this->emailId=emailArg;
        this->phoneNumber=phoneArg;
    }
 
    
    void printCustomerInfo()
    {
        cout<<"name       :"<<this->name<<endl;
        cout<<"adharNumber:"<<this->adharNumber<<endl;
        cout<<"panNumber  :"<<this->panNumber<<endl;
        cout<<"emailId    :"<<this->emailId<<endl;
        cout<<"phoneNumber:"<<this->phoneNumber<<endl;
    }
    
};

int main() {

string name="madhar";
string aadhar="123456789123";
string pan="asdfg1233l";
string email="asdf@gmail.com";
string phone="7894561320";

 BankCustomer bc1(name,aadhar,pan,email,phone);
 bc1.printCustomerInfo();
    
    return 0;
}