#include<iostream>
using namespace std;

class stack{

        public:
        
        int * arr;
        int size;
        int top;

        stack(int size){
            arr = new int[size];
            this -> size = size;
            top = -1;
        }

        void push(int data){

            if(size - top > 1){
                // space available 
                // imsert

                top ++;
                arr[top] = data;
            }
            else{
                // Space is not available 
                cout<< " Stack Overflow "<< endl;
            }
        }
        void pop(){
            if( top == -1){
                // stack is empty
                cout<< " stack Underflow ,Cannot delete element "<< endl;  
            }
            else {
                // stack is not empty
                top -- ;
            }
        }

        int getTop(){
            if(top == -1){
                cout<< " There is no element present in stack "<< endl;
            }
            else{
                return arr[top];
            }
        }

        // Return Number of valid element present in stack
        int getSize(){
            return top + 1;
        }

        int isEmpty(){
            if( top == -1 ){
                return true;
            }
            else {
                return false;
            }
        }
};

int main(){

        stack s(10);

        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);

        s.pop();

        cout<< " Size of the stack is "<< s.getSize() << endl;;

        cout<< " Top element is " << s.getTop() <<endl;

        while( !s.isEmpty() ){
                cout<< s.getTop() << " ";
                s.pop();
        }

        cout<< s.getTop();

        return 0;

}