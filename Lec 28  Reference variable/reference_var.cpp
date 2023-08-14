#include<iostream>
using namespace std;

int main(){

    int i=5;

    // create a Reference variable

    int &j = i;

    cout<< i << endl;
    cout<< j << endl; 

    i++;
    cout<< i << endl;
    j++;
    cout<< i << endl;
     cout<< j << endl;
}