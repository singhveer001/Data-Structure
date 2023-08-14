#include<iostream>
using namespace std;

int main(){

    int arr[10]={2, 5, 6, 16};

    cout<<" Address of first memory block is: "<< arr <<endl;
    cout<< "value at index 0 is: "<< arr[0] <<endl;
    cout<<" Address of first memory block is: "<< &arr[0] <<endl;
     
     
     cout<<" value at 0th loc is "<< *arr << endl;  // 1st index ka value print karne ke liye

    cout<<" value at 0th loc is "<< *arr+1 << endl;   // index ke value me kuch badhane ke liye

     cout<<" value at 1st loc is "<< *(arr+1) << endl;  // koi bhi index ko print karne ke liye
     
    cout<<" value at 0th loc is + 1 -->(2+1)=3 "<< *(arr)+1 << endl;

    cout<<"value at 2nd index "<<arr[2]<<endl;
    cout<<" value at 2nd loc is "<< *(arr+2) << endl;

    int i=3;
    cout<<i[arr]<<endl;

    return 0;

}