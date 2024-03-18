#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num , balance;

    public:
    Customer(string name,int acc_num,int balance){
        this->name = name;
        this->acc_num = acc_num ;
        this->balance = balance;
    }

    void deposite(int amount){
        if(amount > 0){
            balance += amount;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }
    }

    void withdrawal(int amount){
        if(amount<= balance && amount > 0){
            balance -= amount;
        }
    }

    void Display(){
        cout<<name << " " << acc_num <<" "<<balance << endl;
    }
};


int main(){
    Customer A1("Veer",1264,1000);
    Customer A2("Piysh",1666,8000);
    Customer A3("Deepak",1666,8000);
    A1.deposite(-100);
    A1.Display();

    A2.deposite(1000);
    A2.Display();

    A3.withdrawal(1000);
    A3.Display();
}

// In previous code we cant directly access totalCustomers here we access with the use of static data function