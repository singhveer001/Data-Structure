// Multiple Inheritance
#include<iostream>
using namespace std;

class A{

    public:
    int Chemistry;
    
};

class B {
        public: 
        int Physics ;
};

class C : public A , public B {
        public:
        int Maths ;

};

int main(){

    C Combination;
    cout<< Combination.Chemistry << " "<< Combination.Physics << " " << Combination.Maths << endl;
    return 0;
}