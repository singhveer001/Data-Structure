// Constructor is special member function which is invoked automatically at the time of object creation
// Constructor called by default
// If we dosent create own constructor then default constructor is already present
// why we use constructor => for initialiation we use constructor
#include<iostream>
using namespace std;

class person {
    public:
    string name ;
    int age ; 
    int weight ; 

    // Constructor => constructor name is same as class name 
    person(){
        cout<<" constructor is called "<<endl;
    }
};

int main(){
    // Static call
    person man;  // after creating object it print the constructor called

    // Dynamic call
    person* man1 = new person ;
}