#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char arr[]){
        int n = strlen(arr);
        for(int i=0; i<n ; i++){
            if(arr[i] == ' '){
                arr[i] = '@';
            }
        
        }
}

int main(){

    char arr[100] ;
    cin.getline(arr,100);

     replaceSpaces(arr);
       
    cout<<arr;




}