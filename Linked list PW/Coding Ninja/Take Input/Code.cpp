#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int data){

        this -> data= data;
        next = NULL;
    } 

};

Node * takeInput(){
            int data;
           std:: cin>> data;
            Node * head = NULL;

            while(data != -1){    // here we take 
                Node * new_Node = new Node(data);

                if (head == NULL){
                    head= new_Node;
                }
                else{
                    Node * temp= head; /// create a temprory node for head so we can use head again when we have use
                    while (temp-> next != NULL){
                        temp =temp -> next;
                    }
                    temp->next= new_Node;

                }
                std:: cin>> data;
            } 
            return head;
}

void print (Node * head){

    std:: cout<< " Our Linked List is : "<< endl;

    // while(head -> next != NULL){  //IF we have to print from start to last second digit
        while(head  != NULL){   // This will print form start to end 
        std:: cout<< head -> data<< " ";
        head = head-> next;
    }
}

int main(){
        Node * head= takeInput();
        print(head);
}