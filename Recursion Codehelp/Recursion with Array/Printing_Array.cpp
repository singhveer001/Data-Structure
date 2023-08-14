#include<iostream>
using namespace std;

    void Print(int arr[],int size, int index){

        //Base case
        if(index == size)
        return ;

        cout<< arr[index] <<" ";

        //Recursive Relation
        Print(arr,size,index+1);

    }

int main(){
    int arr[6]={3 , 5 , 2 ,6, 8,1};
    int size=6;

    Print(arr,size,0);
    cout<<endl;

    return 0;
}