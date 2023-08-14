// find the no of triplates whose sum is equal to the given value x

#include<iostream>
using namespace std;
 int main(){
    int arr[]={2,4,3,1,5,6,3};
    int targetsum=9;
    int size=7;
    int ans=0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (arr[i]+arr[j]+arr[k]== targetsum)
                {
                    ans++;
                }
                
            }
            
        }
        
    }
    cout<<"The no of triplates is:"<<ans;
    
 }