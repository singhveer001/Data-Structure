#include<iostream>
#include<vector>
using namespace std;


void InsertionSort(vector<int> & arr, int n){

     n=arr.size();

    for (int i = 1; i < n; i++)
    {
        
        int current_ele= arr[i];

        // find the correct position for our current element
        int j= i-1;
        while (j>=0  && arr[j]>current_ele)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current_ele;
    }
    
    

}


int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Ebter the unsorted value: "<<" ";
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    InsertionSort(arr,n);

    cout<<"The sorted array is :"<<endl;

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i] <<" ";
    }
    
    
    
}