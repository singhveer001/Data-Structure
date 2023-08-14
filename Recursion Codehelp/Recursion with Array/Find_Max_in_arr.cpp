#include<iostream>
using namespace std;

int GetMax(int arr[],int size, int index){
    if(index == size)
        return INT_MIN ;
    
    int mera_max = arr[index];
    int rec_max = GetMax(arr, size, index+1);
    int Maxi= max(mera_max , rec_max);
    
    return Maxi; 
    
}

int main(){
    
    int arr[]={4 ,5,2,4,22,24,17,12};
    int size=8 ;
    cout<< endl;
    cout<< "Ans is: "<< GetMax(arr,size,0);
    cout<< endl;
    cout<< endl;

    return 0;
}