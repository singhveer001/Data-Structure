#include<iostream>
#include<queue>
using namespace std;

int main(){

    // Creatiom
    queue<int> q;

    // Insertion 

    q.push(5);
    q.push(6);
    q.push(3);
    q.push(9);
    q.push(11);

    //Removal 
    q.pop();

    // Size of queue
    
    cout<< " Size of Queue is : "<< q.size() << endl;

    // Checking queue is empty or not

    if(q.empty()){
        cout<< "queue is empty" << endl;
    }
    else {
        cout<< " queue is not empty "<< endl;
    }
    
    // First element
    cout<< " First element is : "<< q.front()<<endl;
    
    return 0;
}