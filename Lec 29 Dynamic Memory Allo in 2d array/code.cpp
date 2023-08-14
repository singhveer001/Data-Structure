#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //DEclaring  2d array using dynamic memory allocation
    int **arr=new int *[n];
    
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[n];
    }

    //taking input
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ; j++){
            cin>> arr[i][j];
        }
    }
    //Printing Output
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< arr[i][j];
        }cout<<endl;
        
    }
    
    
}