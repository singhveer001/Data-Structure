#include<iostream>
using namespace std;


bool isPresent(int arr [] [4] , int target ,int m, int n){

        for (int i = 0; i < 3; i++){
             for (int j = 0; j < 4; j++)
        {
            if(arr[i][j]==target){
                return 1;
            }
        }
        
    }
    return 0;
   
}

void PrintColSum(int arr [] [4] ,int m, int n){
    cout<<"Printing Sum -->"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i] [j] ;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
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
    

    cout<<"Enter the element you search"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr , target ,3,4)){

        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Eelemrent is not present "<<endl;
    }


    PrintColSum(arr , 3, 4);
    
}