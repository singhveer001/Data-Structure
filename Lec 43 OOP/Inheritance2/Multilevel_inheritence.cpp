// Multilevel Inheritance => When a class inherit from a derived class and the derived class become base class of the new class it ic called
#include<iostream>
using namespace std;

class Fruit{

    public:
    string name;
    
};

class Mango : public Fruit{
        public: 
        int weight ;
};

class Hapoos : public Mango{
        public:
        int sugerLevel ;

};

int main(){

    Hapoos h;
    cout<< h.name << " "<< h.weight << " " << h.sugerLevel<< endl;
    return 0;
}