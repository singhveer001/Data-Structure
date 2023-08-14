#include<iostream>
#include<stack>
using namespace std;

int main(){

stack<string> s;
s.push("veer");
s.push("bhan");
s.push("singh");

cout<<"top element: "<<" "<< s.top()<<endl;
s.pop();

cout<<"top elemrnt:"<<" " << s.top()<<endl;

cout<<"size of stack: "<<" "<<s.size()<<endl;

cout<<"empty or not:"<<" "<< s.empty()<<endl;

}
