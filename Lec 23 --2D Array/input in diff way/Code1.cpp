#include<iostream>
using namespace std;

int main(){

    int arr [4][5] ;
    for(int i=0 ; i<4; i++){
         for(int j=0; j<5; j++){
            cin>>arr[i] [j];
         }
    }

    // Printing Row wise
     for(int i=0 ; i<4; i++){
         for(int j=0; j<5; j++){
            cout<<arr[i] [j]<<" ";
         }
         cout<< endl;
    }

    // printing  column wise
    cout<<" printing column wise"<<endl;
     for(int i=0 ; i<4; i++){
         for(int j=0; j<5; j++){
            cout<<arr[j] [i]<<" ";
         }
         cout<< endl;
}
}