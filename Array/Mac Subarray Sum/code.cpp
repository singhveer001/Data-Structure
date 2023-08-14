// Print SubArray

#include<iostream>
using namespace std;

void maxSubarraySum(int arr[],int n){

    int currSum=0;
    int maxSum= INT_MIN;

    for(int i=0; i<n; i++){
        int start = i;
        for(int j=i; j<n ; j++){    // here in place of j=i we also use j=0 
            int end= j;
            currSum= 0;
            for (int k = i; k <= j; k++){    // print
                // Subarray Sum
                currSum += arr[k];
            }
           cout<< currSum <<endl;
           if(maxSum < currSum){
               maxSum=currSum;
        }

    }
 }
   cout<< "Max sum = " << maxSum <<endl;
}

int main(){

    int arr[5]={2,3,5,6,7};

    maxSubarraySum(arr,5);
    
}