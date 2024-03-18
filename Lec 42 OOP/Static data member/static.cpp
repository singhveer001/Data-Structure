#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num , balance;
    
    // They are attribute of classes and class member(they only created one time) => 
    // This belongs to class not object
    // For ex => namen,acc_num,balance belongs to object , kyuki jab object create karenge tabhi ye create honge
    // We are also able to access this without creating object
    static int totalCustomer ;  // it is attribute of class and this is same for all object 

    public:
    Customer(string name,int acc_num,int balance){
        this->name = name;
        this->acc_num = acc_num ;
        this->balance = balance;
        totalCustomer++;
    }

    void Display(){
        cout<<name << " " << acc_num <<" "<<balance<<" "<< totalCustomer << endl;
    }
};

int Customer :: totalCustomer = 0;

int main(){
    Customer A1("Veer",1264,1000);
    Customer A2("Piysh",1666,8000);
    A1.Display();
    A2.Display();


}