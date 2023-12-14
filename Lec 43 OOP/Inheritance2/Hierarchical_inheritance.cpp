// Herarchical inheritance
#include<iostream>
using namespace std;

class Car{

    public:
    string name;
    int weight;
    int Model;
    
    void speedUp(){
        cout<<" Speeding Up"<<endl;
    }

};

class Scarpio : public Car{
        
};

class Fortuner : public Car{
        
};

int main(){

    Scarpio s11;
    s11.speedUp();

    Fortuner f11;
    f11.speedUp();
    return 0;
}