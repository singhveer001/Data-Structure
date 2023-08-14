// Find the unique number in a given array where all the elements are repeated twice with one value being unique

#include<iostream>
using namespace std;
 int main(){

    int arr[]={2,3,4,3,2,6,4,};

    int size=7;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
             }
        }  
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>0)
        {
            cout<<"unique no is: "<<arr[i];
        }
            }
  
 }
