// Merge sort using recusrsion

#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}


// Merge Sort Using Recursion

// #include<iostream>
// using namespace std;

// void Merge(int *arr, int start , int end ){

//     int mid= (start+end)/2;

//     int len1 = mid - start +1;
//     int len2 = end - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //Copy Values
//     int MainArrayIndex = start;
//     for(int i=0; i<len1 ; i++){
//         first[i] = arr[MainArrayIndex++];
//     } 
    
//     MainArrayIndex = mid+1;
//     for(int i=0; i<len2 ; i++){
//         second[i] = arr[MainArrayIndex++];
//     } 

//     //Merge Two Sorted Array
//     int index1 = 0;
//     int index2 = 0;
//     MainArrayIndex = start;
    
//     while (index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             arr[MainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[MainArrayIndex++] = second[index2++];
//         }
//     }

//     while (index1 < len1)
//     {
//        arr[MainArrayIndex++] = first[index1++];
//     }

//     while (index2 < len2)
//     {
//        arr[MainArrayIndex++] = second[index2++];
//     }
    
   
// }

// void MergeSort(int *arr, int start, int end){

//     // Base Case
//     if(start >= end){
//         return ;
//     }

//     int mid= (start/end)/2;

//     //Left part Sort karna hai
//     MergeSort(arr, start, mid);

//     //Righr part sort karna hai
//     MergeSort(arr, mid+1, end);

//     //Merge both
//     Merge(arr, start, end );
// }

// int main(){

//     int arr[]={4,2,1,5,3,7,9,8,12,10,55,32};
//     // int n= sizeof(arr)/sizeof(arr[0]);
//     int n=12;
    
//     cout<< " hello";
//     MergeSort(arr,0,n-1);

//     cout<< " The Sorted Array is : "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i] << " ";
//     }   cout<< endl;

//     return 0;
// }