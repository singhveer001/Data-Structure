#include<iostream>
using namespace std;

int getLength(char ch[],int size){
    int length =0;
    for(int i =0; i<size; i++){
        if(ch[i] == '\0'){
            // element end here
            break;
        }
        else{
            length++;
        }
    }
      return length;
}

int main(){
    char ch[100];
    // cin>> ch;
    cin.getline(ch,100);  // cin.getline is used for counting element length with space also
    int length = getLength(ch , 100);
    cout<< "Length is : "<< length << endl;
}