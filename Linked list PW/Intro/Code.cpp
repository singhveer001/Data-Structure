#include<iostream>
using namespace std;

class Node{

    public:
    int value;
    Node * next;

    // Constructor
    Node(int data){   // here we create a constructor for when data passing
        value =data;    // staring data
        next = NULL;   // last hamara null hoga isliye next null
    }
};

int main(){

    Node * n = new Node(1);
    cout<< n -> value << " "<< n-> next << endl;
    
    return 0;
}