#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &s , int target){

        if( s.empty()){
            s.push(target);
            return ;
        }

        int topElement = s.top();
        s.pop();

        // Recursive Call
        InsertAtBottom(s, target);

        // Backtracking
        s.push(topElement);    // Inserting all element that we pop

    

}

void reverseStack(stack<int> &s){
    // Base case
    if(s.empty()){
        cout<< " stack is empty , cant insert at bottom "<< endl;
        return ;

    }

    int target = s.top();
    s.pop();

    // Reverse Stack
    reverseStack(s);

    // Insert at bottom
    InsertAtBottom(s, target);


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

    reverseStack(s);

    cout<< " Reversed Stack is "<< endl;

    while(! s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
    return 0;

}