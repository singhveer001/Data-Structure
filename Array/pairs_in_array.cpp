#include<iostream>
using namespace std;

int main(){

    int arr[7]={4,6,3,2,7,8,9,};
    int n=7;
    for(int i=0; i<n ; i++){
        
        for(int j =i+1; j<n; j++){

            cout<< "("<<arr[i] << " ," <<arr[j] << ")";
        }
        cout<< endl;
    }
}