#include<iostream>
using namespace std;

void Sort(int arr[], int n){
    //Base case already sorted
    if(n==0 || n==1){
        return ;
    }

    //! case solve kar liya - largestelement ko end me rakh dega
    for(int i=0; i<n-1; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //Recursive call
    Sort(arr, n-1);
}

int main(){

    int arr[]={2 , 1 , 7 , 4 , 9, 5};
    int n=6;

    Sort(arr, n);

    for(int i=0; i<n ; i++){
        cout<< arr[i] <<" ";
    }
}