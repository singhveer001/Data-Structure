#include<iostream>
#include<vector>
using namespace  std;

void Move_zeros(vector<int> & arr){

    int i=0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
        
    }
    

}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    Move_zeros(arr);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}