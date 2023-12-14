// Parametrized constructor => it takes one or more parameter
#include<iostream>
using namespace std;

class Animal {
    public:
    string name ;
    int age ; 
    int weight ; 

    
    Animal(string name){
        this -> name = name; 
        cout<<" constructor is called "<<endl;
    }

    Animal(string name ,int age){
        this -> name = name;
        this -> age = age;
        cout<<" constructor 2 is called "<<endl;
    }

    // Copy Constructor
    Animal (Animal & obj){
        this -> name  = obj.name,
        this -> age = obj.age,
        this ->weight = obj.weight,
        cout<<"i'm Inside Copy Constructor" <<endl;
    }
};

int main(){
  
    Animal man("Veerbhan",22);  

   
    Animal* man1 = new Animal("Veer") ;
    cout<< man1->name;
    
    // Object copy
    Animal a =man;
}