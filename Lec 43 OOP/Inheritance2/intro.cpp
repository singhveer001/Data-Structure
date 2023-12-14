// Inheritance => Inheritance is the process of inherting the peroperties and behavious() of an existing class into a New Class

#include<iostream>
using namespace std;

class Animal {
    public:
    string name;
    int age;
    int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Dog : public Animal{

};

int main(){
    
    Dog d1;
    d1.eat();
    d1.age;

    return 0;
}

