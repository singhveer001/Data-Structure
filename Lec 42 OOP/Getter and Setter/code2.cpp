#include<iostream>
using namespace std;

class Animal{

    private:
    string name ;
    int age;
    
    public:

    void sleep(){
        cout<<"sleeping"<<endl;
    }

    //Getter for name
    string getname(){
        return name;
    }
    // Setter for name
    void setname(string word){
        name = word ;
    }

    // Getter for age
    int getage(){
        return age;
    }

    // Setter for age
    void setage(int umar){
        age = umar;
    }
};

int main(){

    Animal lion;

    lion.setage(30);
    lion.setname("sher");

    // Accessing and printing the values
    cout << "Name is : " << lion.getname() << endl;
    cout << "Age : " << lion.getage() << endl;

     lion.sleep() ;

}