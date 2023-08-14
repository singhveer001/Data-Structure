#include<iostream>

using namespace std ;

class A {

    public:
    void abc(){
        cout<< " class A"<< endl;
    }
};

class B {
    public:
    void abc(){
        cout<< " class B"<< endl;
    }
};

class C : public A, public B {

};

int main(){

    C BothClass;

    // In Inheritance ambiguty we will access the variable with the help of scope variable
    //BothClass.A();     // it give error beacuase method of both class is same so it can not understand which function you want to called
    BothClass.A :: abc();

    cout<< " Ye B vala part hai"<< endl;
    BothClass.B:: abc();
}