#include<iostream>
#include<stack>
using namespace std;

void  MiddleElement( stack<int> &s ,int totalSize){

            if(s.size() == 0){
                cout<< " Your stack is empty" << endl;
                return;
            }
            // Base Case
            if( s.size() == (totalSize/2) + 1){
                cout << " Middle element is : " << s.top() << endl;
                return;
            }

            int temp = s.top();
            s.pop();

            // Recursive case 
            MiddleElement( s, totalSize);

            // Backtracing
            s.push(temp);
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

    int totalSize = s.size();

    MiddleElement(s,totalSize);

    return 0;
}