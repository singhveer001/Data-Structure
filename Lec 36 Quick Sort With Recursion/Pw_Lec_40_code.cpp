#include<iostream>
using namespace std;

int Partition(int *arr, int start, int end){

        int pivot= arr[end];   
        int i= start-1;   // For inserting element < pivot
        int j= start;     // For Finding element less than pivot
        for ( j = start; j < end; j++)
        {
            if(arr[j]< pivot){
                i++;
                swap(arr[i],arr[j]);
            }

        }
        // Now i is poointing last element < pivot
        // Correct position for pivot will be --> i+1
        swap(arr[i+1], arr[end]);
        return i+1;
}

void MergeSort(int arr[], int start, int end){
        
        //Base Case
        if(start >= end)
            return ;
        // Recursive case
        int p=Partition(arr , start , end);

        MergeSort(arr, start, p-1);

        MergeSort(arr, p+1, end);
}

int main(){

    int arr[]={3,5,2,6,8,1,7};
    int n= sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }cout<< endl;
    
    return 0;
}