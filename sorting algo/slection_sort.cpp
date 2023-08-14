// SELECTION SORt

#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
   
    for(int i = 0; i < n-1; i++ ) {
        //finding minimum element in unsorted array
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        // Placing minimum element at begining ...
        if(i != minIndex){
        swap(arr[minIndex], arr[i]);
        }
    }
    return ;
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

    selectionSort(arr,n);

    cout<<"The sorted array is :"<<endl;

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i] <<" ";
    }
    
    
    
}