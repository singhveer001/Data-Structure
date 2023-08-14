#include<iostream>
#include<vector>
using namespace std;

void Bubblesort(vector<int> & arr, int n){

    for (int  i = 0; i < n-1; i++)  //for round 0 to n-1  ,,,,, agar 1 lete to n tak jata
    {
        bool swapped= false;

        for (int j = 0; j < n-i-1 ; j++) // process element till (n-i-1) th poition
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
            
        }
        if (swapped==false)
        {
            break;
        }
        
    }
    
}
    int main(){

        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        Bubblesort(arr,n);

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }