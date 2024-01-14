#include<iostream>
#include<string.h>
using namespace std;

// int main(){

//     char arr[100];
//     cin.getline(arr,100);
//     int count = 0;
//     for(int i =0; i<100; i++){
//     //    if(arr[i] == '\0'){
//     //         break;
//     //    }
//     //    else{
//     //     cout<< arr[i] ;
//     //     count ++;
//     //    }
//     }
//     cout<< arr[3];
//     cout<<endl;
//     cout<< count;
// }

int main(){
    char arr[100];
    cin.getline(arr,100);
    char start = 0;
    int n = strlen(arr);  // It takes O(n) time complexity
    char end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
        cout<<arr;
    

}