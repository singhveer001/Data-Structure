// Destructor
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
    ~person(){
        cout<<"Destructor called" <<endl;
    }
};

int main(){
  
    // Instatic case destructor automatically call
    cout<<" A object creation"<<endl;
    person man("Veerbhan",22);  


   // If we do dynamic call then we have to destruct by own
    cout<<"B object creation"<<endl;
    person* man1 = new person("Veer") ;
    cout<< man1->name <<endl;

    // For dynamic we have to do manually call for destructor by delete keyword
    delete man1;
    

    

}