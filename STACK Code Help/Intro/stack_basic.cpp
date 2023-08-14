#include<iostream>
#include<stack>
using namespace std;


int main(){

    // stack Declare
    stack<int> st;

    // Insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Removing element
    st.pop();

    // Top of the element
    cout<< endl;
    cout<< " top eleent of the stack: "<< st.top() << endl;

    // Size of the stack
    cout<< " size is : " << st.size() << endl;

    // stack is empty or not 
    if(st.empty()){
        cout<< " Stack is empty "<< endl; 
    }
    else{
        cout<<" stack is not empty" << endl << endl;
    }

    // Printing stack
    while ( !st.empty())
    {
        cout<< st.top() << " ";
        st.pop();
    }
    cout<< endl;
    
}