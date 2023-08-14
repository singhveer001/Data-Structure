// Given two number a and b , find a raise to the power b...

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number a"<<endl;
    cin>>a;
    int b;
    cout<<"enter the number b"<<endl;
    cin>>b;
    int sum=1;

    for (int i = 1; i <= b; i++)
    {
        sum=sum*a;
        
    }
    cout<<sum;
    return 0;
    

}