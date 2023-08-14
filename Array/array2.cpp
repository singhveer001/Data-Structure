// Array With Function
#include<iostream>
using namespace std;

int SumOfElement(int arr[] , int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum= sum +arr[i];
        
    }
    return sum;

}
        int main(){
            int  arr[5]={2, 7 ,1, -4 , 11};

          cout<< "Sum of all elements: " <<SumOfElement(arr, 5);
        }
       
