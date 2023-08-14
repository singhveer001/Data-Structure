#include<iostream>
#include<stack>
using namespace std;

void  insertSorted(stack<int> &st ,int target){

        // Base case
        if(st.empty()){
            st.push(target);
            return;
        }
        if(st.top() >= target){
            st.push(target);
            return ;
        }

        int topElement = st.top();
        st.pop();

        // Recusive case
        insertSorted(st , target);

        // Backtracking
        st.push(topElement);
      

}


void  sortStack(stack<int> &st){

        if(st.empty()){
            return ;
        }
        int topElement = st.top();
        st.pop();

        
        sortStack(st);

        // elemnt ko right position pe daal do
        insertSorted(st, topElement);

}


int main(){


    stack<int> st;

    st.push(7);
    st.push(4);
    st.push(22);
    st.push(12);
    st.push(5);

//   while (!st.empty())
//     {
//         cout<< st.top() <<endl;
//         st.pop();
//     }

    sortStack(st);

    cout<< "Sorted list is "<<  endl;
    while (!st.empty())
    {
        cout<< st.top() <<endl;
        st.pop();
    }
    
}