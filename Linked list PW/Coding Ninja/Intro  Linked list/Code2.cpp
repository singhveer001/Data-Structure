// Here we ise print function foor printing the linked list

#include<iostream>
using namespace std;

class Node{

    public:
    int data;  // we can give name value also
    Node * next;

    Node(int data){
         this -> data =data;    // value = data;
         next = NULL;

    }
};

void print(Node *&head){  // Ye & maine khudse lag ya hai        

    while (head != NULL)
    {
        cout<< head -> data <<" " ;
        head = head -> next;
    }
    
}

int main(){

    Node n1(3);
    Node * head = & n1;  // Sftoring address of n1 in  head
    Node n2(5);
    Node n3(24);
    Node n4(55);
    Node n5(21);

    n1.next =&n2;
    n2.next =&n3;
    n3.next =&n4;
    n4.next =&n5;
    
    print(head);

    return 0;
}