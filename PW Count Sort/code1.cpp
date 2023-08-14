#include<iostream>
using namespace std;

void Count_sort(int *arr, int n){

        // Max value find kiya count size ke liye
        int k = arr[0];
        for(int i=0; i<n ; i++){
            k = max(k, arr[i]);
        }

        int count[10] ={0}; 
        for (int  i = 0; i < n; i++)
        {
            count[arr[i]]++;
        }
        

        for(int i=1; i<=k; i++){
            count[i] += count[i-1]; 
        }

        int output[n];
        for (int i = n-1; i >=0; i--){
            output[--count[arr[i]]]= arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i]= output[i];
        }
        
        
}

int main(){

    int arr[]= {3, 5, 2,6,1,9,8};
    int n = 7;

    Count_sort( arr , n );

    for(int i=0; i<n ; i++){
        cout<< arr[i] << " ";
    }cout<<endl;
 
}