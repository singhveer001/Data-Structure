#include<iostream>
using namespace std;

class A {

    public:
    void sayHello(){
        cout<< " Hello veer singh" << endl;
    }

    int sayHello(char name){
        cout<< " Heello veer"<< endl;
        return 1;
    }

    void sayHello(int num){
        cout<< " hello "<< endl;
    }

};

int main(){

    A obj;
    obj.sayHello();

    obj.sayHello('A');
    
    obj.sayHello(5);
    return 0;
}