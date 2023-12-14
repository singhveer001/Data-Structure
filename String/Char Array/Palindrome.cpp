#include<iostream>
#include<string.h>
using namespace std;

int Palindrome(char ch[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        if(ch[start] == ch[end]){
        swap(ch[start],ch[end]);
        start++;
        end--;
        }
        else{
            return false;
        }
    }
    return true;
}


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
    cin.getline(ch,100);
    int length = getLength(ch,100);
    int isPalindrome = Palindrome(ch,length);
    
    if(isPalindrome){
        cout<< "Valid Palindrome";
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }

}