#include<iostream>
#include<stack>
using namespace std;

void solve (stack<int> &s , int target){

        if( s.empty()){
            s.push(target);
            return ;
        }

        int topElement = s.top();
        s.pop();

        // Recursive Call
        solve(s, target);

        // Backtracking
        s.push(topElement);    // Inserting all element that we pop

}

void InsertAtBottom(stack<int> &s){

    if(s.empty()){
        cout<< " stack is empty , cant insert at bottom "<< endl;
        return ;

    }

    int target = s.top();
    s.pop();

    solve(s, target);

}

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    InsertAtBottom(s);

    cout<< " Printing "<< endl;

    while(! s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
    return 0;

}