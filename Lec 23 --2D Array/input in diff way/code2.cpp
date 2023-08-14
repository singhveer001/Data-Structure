#include<iostream>
using namespace std;

int main(){

    //Creating 2D Array
    
    // int arr [3] [4] = { 1 , 3, 2 , 4 , 5 , 66 , 33 , 22 , 11 , 6 , 77 , 99 };

    //Also one diff Way
    int arr [3] [4] = {{2 , 4,3 ,111},{1,6,2,222},{2,6,8,444} };
    
    // Print the Output  
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i] [j]<<" ";
        }
         cout<<endl;
    }
}