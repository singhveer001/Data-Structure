#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<string> q;
q.push("veer");
q.push("bhan");
q.push("singh");

cout<<"top element: "<<" "<< q.front()<<endl;
q.pop();

cout<<"top elemrnt:"<<" " << q.front()<<endl;

cout<<"size of stack: "<<" "<<q.size()<<endl;

cout<<"empty or not:"<<" "<< q.empty()<<endl;

}
