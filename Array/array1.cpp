#include<iostream>
using namespace std;
int main(){
    
  /*  int arr[5]={2,7,1,-4,11};
    
        cout<<"the sum of array"<<endl;
        int sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
       cout<<sum;
  
    */
   // SUM OF ARRAY
   int size;
   cout<<"enter size";
   cin>>size;
   int sum=0;
   int value[10];
   for(int i=0; i<size; i++){
    cin>>value[i];
    sum=sum+value[i];
   }
   cout<<"The sum array : "<<sum<<endl;
   cout<<"complete";
   return 0;
    }
