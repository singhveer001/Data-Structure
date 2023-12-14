// Parametrized constructor => it takes one or more parameter
#include<iostream>
using namespace std;

class person {
    public:
    string name ;
    int age ; 
    int weight ; 

    
    person(string name){
        this -> name = name; 
        cout<<" constructor is called "<<endl;
    }

    person(string name ,int age){
        this -> name = name;
        this -> age = age;
        cout<<" constructor 2 is called "<<endl;
    }
};

int main(){
  
    person man("Veerbhan",22);  

   
    person* man1 = new person("Veer") ;
    cout<< man1->name;
    
}