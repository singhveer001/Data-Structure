#include<iostream>
using namespace std;

bool Sorted(int arr[],int size){

    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }

    bool ans= (arr+1,size-1);
    return ans;
}

int main(){
    
    // int arr[]={4,2,6,7,9};  // Unsorted so its return 0
    int arr[]={1,3,4,8,11};   // Sorted so it returns 1
    int size=5;

    int ans = Sorted(arr,size);
    cout<< " Answer is " << ans << endl;
    return 0;
}