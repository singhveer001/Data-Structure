// Find the total no of pairs in the array whose sum is equal to the given value x

#include<iostream>
using namespace std;

int main(){

    int arr[]={2, 3, 4 ,5, 7, 2, 6 ,1};
    int targetsum=7;    //  sum of two number 
    int pairs=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if (arr[i]+arr[j]==targetsum)
            {
                pairs++;
            }
            
        }
        
    }
    cout<<"Total number of pairs are: "<<pairs<<" ";
    
}