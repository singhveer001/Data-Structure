#include<iostream>
using namespace std;
int sumarray(int input[]){

    int sum=0;
    for(int i=0; i<10; i++){
        sum+= input[i];
    }
    return sum;
    
}
int main(){
    int array[10];
    for(int i=0; i<10; i++){
        cin>>array[i];

    }
    int sum=sumarray(array);
    cout<<sum;
}
