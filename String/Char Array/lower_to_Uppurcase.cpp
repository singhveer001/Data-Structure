#include<iostream>
using namespace std;

void toUpperCase(char ch[],int size){
    int index =0;

    while(ch[index] != '\0'){
        char currCharacter = ch[index];
        if(currCharacter >= 'a' && currCharacter <='z'){
            ch[index] = currCharacter - 'a' +'A';
        }
        index++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before conversion : "<<ch<< endl;
    toUpperCase(ch,100);
    cout<< "Converted to Uppercase : "<< ch<<endl;
}