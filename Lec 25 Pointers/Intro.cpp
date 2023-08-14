#include<iostream>
using namespace std;

int main(){

    int num = 5;

    cout<< num << endl;

    // Adress of Operator -> &

    cout<<"Address of Operator is: "<< &num <<endl;

    //Pointer

    int *ptr = &num ;

    cout<<"Address is: "<< ptr << endl;
    cout<<"Value is: "<< *ptr << endl;

    double d=4.3 ;
    double *p2 = &d;

    cout<<"Address is: "<< p2 << endl;
    cout<<"Value is: "<< *p2 << endl;

    // Size of Pointers and integger 

    cout<<" Size of Integer is: "<< sizeof(num) << endl;
    cout<<" Size of pointer is: "<< sizeof(ptr) << endl;  // most of time double hota hai integer ke compare me int --4 and pointer --8

    cout<<" Size of pointer is: "<< sizeof(p2) << endl;
}