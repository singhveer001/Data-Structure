#include<iostream>
#include<vector>
using namespace std;


    void swap_zero_to_end(vector<int> & arr, int n){

        n=arr.size();
        for (int i = n-1; i >=0; i--)
        {
            int j=0;
            bool flag=false;
            while(j!=i){
                if (arr[j]==0 && arr[j+1] != 0)
                {
                    swap(arr[j],arr[j+1]);
                    flag=true;
                }
                j++;
            }
            if (!flag)
              break;
        }
    return ;
    }

int main(){

    int n;
     cin>>n;
     vector<int> arr(n);
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];

     }

     swap_zero_to_end(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     
}