// Single Inheritance
#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int age;
    int weight;

    void speedUp(){
        cout<<"speeding up"<<endl;
    }

    void BreakMaar(){
        cout<<"break maar de bhai"<< endl;
    }
};

class Scorpio : public Car{   // Scorpio is a car

};

int main(){
    Scorpio VeerVali;
    VeerVali.speedUp();

    VeerVali.BreakMaar();
}