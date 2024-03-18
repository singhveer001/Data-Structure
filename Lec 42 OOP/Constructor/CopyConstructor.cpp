#include<iostream>
using namespace std;

class Customer{

    string name;
    int age;
    int height;
    public:
    Customer(string name,int age,int height){
        this->name = name;
        this->age = age;
        this->height = height;
    }

    // Copy Constructor
    Customer(Customer &B){
        name = B.name;
        age = B.age;
        height = B.height;
    }

    void Display(){
        cout<< name <<" "<<age<<" "<< height<< endl;
    }
};

int main(){
    Customer A1( "Rahul",22,5);
    A1.Display();

    // Here A1 sends its value to B as a reference
    Customer A2(A1);
    A2.Display();
}