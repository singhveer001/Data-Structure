// #include<iostream>
// using namespace std;

//     void Print(int arr[],int size, int index){

//         //Base case
//         if(index == size)
//         return ;

//         //Recursive Relation
//         Print(arr,size,index+1);

//          cout<< arr[index] <<" ";
//     }

// int main(){
//     int arr[6]={3 , 5 , 2 ,6, 8,1};
//     int size=6;

//     Print(arr,size,0);
//     cout<<endl;

//     return 0;
// }

// 2nd Way

#include<iostream>
using namespace std;

    void Reverse(int arr[], int index){

        //Base case
        if(index <0)
        return ;


         cout<< arr[index] <<" ";

         //Recursive Relation
        Reverse(arr,index-1);
    }

int main(){
    int arr[6]={3 , 5 , 2 ,6, 8,1};
    int size=6;

    Reverse(arr,size-1);
    cout<<endl;

    return 0;
}