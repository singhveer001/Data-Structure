// Constructor is special member function which is invoked automatically at the time of object creation
// Constructor called by default

#include<iostream>
using namespace std;

class person {
    public:
    string name ;
    int age ; 
    int weight ; 

    // Default constructor
    person(){
        this -> name = "";
        this -> age =0;
        this -> weight = 0;
        cout<<" constructor is called "<<endl;
    }
};

int main(){
    // Static call
    person man;  

    // Dynamic call
    person* man1 = new person ;
    cout<< man1->age;
}