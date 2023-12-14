#include<iostream>
using namespace std;
void subArray2(int arr[],int start, int end){
       int sum =0;
       
        for(int i=start ; i<=end ; i++){
                // cout<< arr[j] <<" ";
                 sum = sum + arr[i];    

       
    }
     cout<<"sum of range is : "<< sum ;
}
int subArray(int arr[],int n){
    int max =0;
     for(int i=0 ; i<=n ; i++){
        int sum =0;
        for(int j=0; j <= i; j++ ){
                // cout<< arr[j] <<" ";
                 sum = sum + arr[j];
                
               
        }
        cout<< endl;
         
        cout<<"sum is : "<< sum ;
        
    }
    
}


int main(){

    int arr[6]= {1, 2, 3, 4, 5, 6};
    int n=6;
    int start,end;
    cin>>start ;
    cin >> end;

    subArray(arr,n);
    cout<< endl;
    subArray2(arr,start,end);
}