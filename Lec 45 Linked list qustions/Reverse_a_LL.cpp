#include<iostream>
using namespace std;

class Node{

        public:
        int data;
        Node* next;

        // Constructor
        Node(int data){
            this-> data= data;
            this ->next = NULL;
        }

};

Node* reverseLinkedList(Node * head){
       // if linked list is empty and only one element present
       if(head == NULL || head -> next==NULL){
        return head;
       }

        Node *prev = NULL;
        Node * curr = NULL;
        Node* forward= NULL;


        while(curr != NULL){
                Node * forward = curr-> next;
                curr -> next= prev;
                prev = curr;
                curr = forward;
        }
        return prev;       
}

void print (Node *&head){
    Node * temp = head;

    while(temp != NULL){
        
        std::cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    std:: cout<< endl;

}

int main(){
        Node * node1 = new Node(10);
        print(node1);
        Node * node2 = new Node (20);

        
        print(node2);
       

}