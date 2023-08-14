#include<iostream>
using namespace std;

int getsum(int *arr, int n){

    int sum=0;
    for(int i=0; i<n ; i++){
        sum= sum+arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    // variable size in array
    int *arr =new int[n];

    // taking input in array
    for(int i=0; i<n ; i++){
        cin>> arr[i];
    }

    int ans= getsum(arr,n);
    cout<< "answer is "<< ans;
}