#include<iostream>
using namespace std;

class Node {

        public:
        int data ;
        Node * next ;

        Node( int data) {
            this ->  data = data;
            this -> next = NULL;
        }
};

void print (Node * head){
     Node * temp = head ;

     while (temp != NULL)
     {
        cout<< temp -> data <<" ";
        temp = temp -> next;
     }
     cout<< endl ;
     
}

Node * reverse (Node * head){
        Node * prev = NULL;
        Node * curr = head;
        Node * forward = curr -> next;

        while(curr != NULL){
                forward = curr -> next;
                curr -> next = prev;
                prev = curr ;
                curr = forward;
        }
        return prev;

}

Node * solve(Node * & head1 , Node * &head2){

        // Reverse the both linked list 
        head1 = reverse(head1);
        head2 = reverse(head2);


        // Add both linked list
        Node *ansHead = NULL;
        Node *ansTail = NULL;
        int carry =0;

        while(head1 != NULL && head2 != NULL){

                // Calsulate
                int sum = carry + head1 -> data + head2 -> data;
                // Find digit to crate node
                int digit = sum % 10;
                // calculate carry
                carry = sum / 10;

                // Create a new Node for digit
                Node * newNode = new Node(digit);

                // Attach the new node into ans wali linked list
                if (ansHead == NULL)
                {
                        ansHead = newNode;
                        ansTail = newNode;
                }
                else {

                        ansTail -> next = newNode;
                        ansTail = newNode;
                }
                head1  = head1 -> next;
                head2  = head2 -> next;   
        }

        // When head1 list value is greater than head2 value
        while(head1 != NULL){
                int sum = carry + head1 -> data ;
                int digit = sum % 10;
                carry = sum / 10;

                Node * newNode = new Node(digit);

                ansTail -> next = newNode;
                ansTail = newNode;
                head1  = head1 -> next;
                
                   }  

        // When head2 list value is greater than head1 list value
        while(head2 != NULL){
                int sum = carry + head2 -> data ;
                int digit = sum % 10;
                carry = sum / 10;

                Node * newNode = new Node(digit);

                ansTail -> next = newNode;
                ansTail = newNode;
                head2  = head2 -> next;
                
                }  

        // handle carry alag se
        while( carry != 0){
                int sum = carry  ;
                int digit = sum % 10;
                carry = sum / 10;

                Node * newNode = new Node(digit);

                ansTail -> next = newNode;
                ansTail = newNode;
              
        }         

        // Reverse the ans linked list 
        ansHead = reverse(ansHead);
        return ansHead;

}

int main(){

    Node * head1 = new Node(2);
    Node * second1 = new Node(4);
    head1 ->next = second1; 

    Node * head2 = new Node(2);
    Node * second2 = new Node(3);
    Node * third2 = new Node(4);
    head2 -> next = second2;
    second2 -> next = third2;

    Node * ans =solve (head1,head2);

    print(ans);

    return 0;
}