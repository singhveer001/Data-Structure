// Reverse of array

#include<iostream>
using namespace std;

// For reverse of array
void reverse(int arr[], int n){
    int start=0;
    int end =n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
    // For printing array

    void printArray(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i] <<" ";
        }
        cout<<endl;

        
    }

int main(){
    int arr[]={2 , 4 ,3 ,7 ,5,9};
    int arr2[]={3 , 2 ,6 ,9,12};
        
        //array ko print karane ke liye
        printArray(arr,6);
        printArray(arr2,5);
        
        reverse(arr,6);
        reverse(arr2,5);

        //reverse ho jayega uske baad vapis array print karayenge to reverse vala print hoga
        cout<<"reverse of array is : "<<endl;
        printArray(arr,6);
        printArray(arr2,5);

        return 0;
}