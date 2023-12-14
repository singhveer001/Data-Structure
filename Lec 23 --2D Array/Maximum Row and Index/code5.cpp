#include<iostream>
using namespace std;



void PrintColSum(int arr [] [4] ,int m, int n){
    cout<<"Printing Sum -->"<<endl;
    
    for (int i = 0; i < m; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i] [j] ;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
 }

int LargestRowSum(int arr [] [4] ,int m, int n){

    int maxi=INT_MIN;
    int rowindex= -1;


    for (int i = 0; i < 3; i++){
        int sum=0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i] [j] ;
        }
        if(sum > maxi){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"the Maximum sum is:"<<" "<<maxi<<endl;
    return rowindex;
}

int main(){

    int arr [3] [4];
    
    cout<<"Enter your Input"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i] [j];
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i] [j]<<" ";
        }
        cout<<endl;
    }

    PrintColSum(arr , 3, 4);

    int ansIndex=LargestRowSum(arr, 3,  4);
    cout<<"The highest index is: "<<" "<<ansIndex<<endl;
    
}