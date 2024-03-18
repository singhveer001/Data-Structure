#include<iostream>
using namespace std;

class Customer {
    
    string name;
    int acc_number ;
    int balance;

    public:
    // Default constructor
    Customer(){
        name = "Rohit";
        acc_number = 1234;
        balance = 100;
        cout<<"hello"<<endl;
    }

    // Parametrize constructor
    Customer(string name , int acc_number ){
        this->name = name;
        this->acc_number = acc_number;
        balance = 50; //giving by default value to balance
    }

    // Inline constructor
    inline Customer(string a , int b, int c) : name(a), acc_number(b), balance(c){

    }

    void Display(){
        cout<< name <<" "<< acc_number<<" "<<balance <<endl;
    }

};

int main(){
    Customer A1;
    A1.Display();

    Customer A2("veer",22);
    A2.Display();

    Customer A3("Piyush",13452,2000);
    A3.Display();


}