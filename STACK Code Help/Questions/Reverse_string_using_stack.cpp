// Reverse string using stack
#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "Veerbhan";

    stack<int> s ;

    for(int i=0 ; i<str.length() ; i++){

            s.push(str[i]);
    }

    while( !s.empty()){

            cout<< s.top() << " ";
            s.pop();
    }
    cout<< endl;
    return 0;
}