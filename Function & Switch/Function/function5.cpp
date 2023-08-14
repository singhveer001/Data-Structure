#include<iostream>
using namespace std;

double area(int r){
    return 3.14 * r * r;
}

double circumference(int r){
    return 2* 3.14 * r;
}

int main(){
    int r;
    cin>>r;
    cout<<"area of circle " << area(r) <<endl;
    cout<<"circumference of circle " << circumference(r);
}