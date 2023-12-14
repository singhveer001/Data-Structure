// Function Overloading 
// When there are multiple function in a class with the same name but different parameters , these function are overloaded

#include<iostream>
using namespace std;

class Maths{
    public:

    int sum(int a ,int b){
        cout<<"I am first signature"<< endl;
        return a+b;
    }
    
    int sum (int a , int b, int c){
        cout<<endl;
        cout<<"I am second signature"<< endl;
        return a+b+c;
    }

    int sum (int a , float b){
        cout<<endl;
        cout<<"I am third signature"<< endl;
        return a+b+100;
    }
};

int main(){
    Maths obj;
    cout<< obj.sum(3,5);
    cout<< obj.sum(22,22.5f);
    cout<< obj.sum(22,22,55);
}