#include<iostream>
#include<vector>
using namespace std;

/*
int main(){

    int arr[]={1,2,3,4,5,6};
    int n=6;
    vector<int> v;
    v.push_back(arr[n-1]);
    for(int i=0; i<n ; i++){
        
        v.push_back(arr[i]);
        
    }
    // arr[0]=arr[n-1];

    for (int  i = 0; i < n; i++)
    {
        cout<<v[i] << " ";
        
    }
    
}
*/

int main(){

    int arr[]={1,2,3,4,5};
    int n=5;
    
    // Initially: [1 2 3 4 5]

    // swapping the first element with the last element
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    // Now: [5 2 3 4 1]

    // swapping the ith element with the last element for the entire length of the array (where i starts from 1) 
    for(int i=1 ; i<=n-1 ; i++)
    {
        int temp2 = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp2;

        // Array in each iteration:
        // [5 1 3 4 2]
        // [5 1 2 4 3]
        // [5 1 2 3 4]
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";
        
    }
}