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
            Node * tail= NULL;

            while(data != -1){    // here we take 
                Node * new_Node = new Node(data);

                if (head == NULL){
                    head= new_Node;
                    tail = new_Node;
                }
                else{
                    tail -> next = new_Node;
                    tail = tail-> next;
                    //OR
                    // tail = New_Node;

                }
                std:: cin>> data;
            } 
            return head;
}


Node * insertNode(Node *head , int i, int data){

        Node * newNode =new Node(data);    // First we create newNode for storing address of new node 
        int count= 0;                       // then we create count varaible for strring the 2nd node adress 

        Node * temp = head;                 // here we create temprory variable to store the head

        if(i==0){              // this condition we help when i value is 0 , if we dont write this condition then it joint at position 1.
            newNode -> next =head;      // new node ke next me head dala 
            head = newNode;                // ab head me newNode ki value dali
            return head;
        }

        while(temp != NULL && count <i-1){    // yha condition lagaye ki temp value NULL ke equal nhi honi chaiye or na hi count hamara less then i-1 
            temp= temp -> next;                // Agar condition true hui to temp me temp ke next dalenge
            count ++;
        
        }


        if (temp != NULL)
        {
            Node * a = temp -> next;    // here we crated a pointer a to store the address of end value
            temp-> next = newNode;      // ab yha hamlog temp ke address me newNode daal diye 
            newNode -> next = a;        // or last me new node ke address me 2nd node ka address daal diye jo a me store kiye the temp ka value
        }
        return head;
        
}
void print (Node * head){

    std:: cout<< "Our Linked List is : "<< endl;

    // while(head -> next != NULL){  //IF we have to print from start to last second digit
        while(head  != NULL){   // This will print form start to end 
        std:: cout<< head -> data<< " ";
        head = head-> next;
    }
}

int main(){
        Node * head= takeInput();
        print(head);

        
        int i, data;
        std:: cout<<endl <<"Enter value of i and data" << endl;
        std:: cin>> i>> data;
        
        insertNode(head, i, data);
        print(head);
}