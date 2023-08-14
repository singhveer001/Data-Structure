#include<iostream>
using namespace std;

int main(){

    //Creating 2D Array
    int arr [3] [4];

    //Taking input in 2D Array

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i] [j];
        }
    }

    // Print the Output
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i] [j]<<" ";
        }
         cout<<endl;
    }
}