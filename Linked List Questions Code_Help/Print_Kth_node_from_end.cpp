// OUTPUT getting wrong

#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node * next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

int getKth (Node * head , int position){

        Node *temp = head;
        int length =0;
        
        while(temp){
                temp = temp -> next;
                length ++;
        }
        int findPosition = length - position -1;

        while( temp  != NULL){
                if(temp -> data == findPosition ){
                  return temp -> data;
                }
        }
        
}
void print (Node *  head){
    Node * temp = head;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){

        Node*  first = new Node(4);
        Node*  first1 = new Node(6);
        Node*  first2 = new Node(7);
        Node*  first3 = new Node(9);
        first -> next = first1;
        first1 -> next = first2;
        first2 -> next = first3;


        cout<<  getKth(first ,3 );
       


}