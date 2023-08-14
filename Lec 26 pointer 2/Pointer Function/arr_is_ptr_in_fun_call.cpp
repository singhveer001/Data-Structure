#include<iostream>
using namespace std;

int getsum(int arr[], int n){


    cout<<endl<< "size "<< sizeof(arr)<<endl;

    int sum=0;
    for(int i=0; i<n ; i++){
        sum += arr[i];
    }
}

int main(){

    int arr[5]={1, 2, 3 ,4 ,5};

     cout<<endl<< "size of "<< sizeof(arr)<<endl;

    getsum(arr,5);
}