#include<iostream>
using namespace std;

int  Find_First_Index(int arr[],int size,int index, int target){

    if(index<0){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }

    return Find_First_Index(arr,size,index-1,target);
    
}

int main(){

    int arr[]={ 2, 3, 4, 5, 3,7,9 };
    int size=7;
    int target=3;

    int ans= Find_First_Index(arr,size,size-1,target);

    cout<< "The answer is " << ans <<endl;
    cout<< endl;
}