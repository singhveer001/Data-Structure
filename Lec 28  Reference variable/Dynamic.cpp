#include<iostream>
using namespace std;

int main(){
    
    char ch= 'a';
    cout<< sizeof(ch) <<endl;

    char *c =&ch;
    cout<< sizeof(c) <<endl;  //it gives 8 byte in 64-bit and 4 byte in 32-bit

    char *ch = new char ;
} 
