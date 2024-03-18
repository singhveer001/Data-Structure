#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num , balance;

    static int totalCustomer ;  
    static int totalBalance ;

    public:
    Customer(string name,int acc_num,int balance){
        this->name = name;
        this->acc_num = acc_num ;
        this->balance = balance;
        totalCustomer++;
        totalBalance += balance;
    }

    // Static member function
    static void accStatic(){
        cout<<"Total customer is: "<<totalCustomer << endl;
        cout<<"Total Balance is: "<<totalBalance << endl;
    }

    void Display(){
        cout<<name << " " << acc_num <<" "<<balance<<" "<< totalCustomer << endl;
    }
};

int Customer :: totalCustomer = 0;
int Customer :: totalBalance = 0;

int main(){
    Customer A1("Veer",1264,1000);
    Customer A2("Piysh",1666,8000);
    Customer A3("Piysh",1666,8000);
    
    // This how we calling
    Customer :: accStatic();

}

// In previous code we cant directly access totalCustomers here we access with the use of static data function