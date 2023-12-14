#include<iostream>
#include<vector>
using namespace std;

int duplicates(int a[],int size){
    if(size ==0){
           return 0;
       }
       
       int slow =0 ;
       int fast =1;
       while(fast<size){
           if(a[fast] != a[slow]){
               slow = slow +1;
                a[slow]=a[fast];
           }
           fast=fast+1;
       }
    return slow+1;
}


int main(){
    int arr[9] = {1,1,1,2,2,2,2,3,3};
   
    int ans = duplicates(arr,9);
    
    for(int i=0; i<ans ; i++){
        cout<<arr[i]<<" ";
    }
   
}