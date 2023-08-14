// Print SubArray

#include<iostream>
using namespace std;

void PrintSubarray(int arr[],int n){

    int count=0;

    for(int i=0; i<n; i++){
        int start = i;
        for(int j=i; j<n ; j++){    // here in place of j=i we also use j=0 
            int end= j;
            // for (int k = start; k <= end; k++){  // only for understanding we take start and end
            for (int k = i; k <= j; k++){    // print
                cout<< arr[k] << " ";       // Subarray
            }
            count++;
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"Total Subarray " << count;
}

int main(){

    int arr[5]={2,3,5,6,7};

    PrintSubarray(arr,5);
    
}