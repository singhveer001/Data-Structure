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

int main(){

    Node n1(3);
    Node * head = & n1;  // Sftoring address of n1 in  head
    Node n2(5);
    n1.next =&n2;
    Node n3(24);
    n2.next =&n3;
    Node n4(55);
    Node n5(21);
    n3.next =&n4;
    n4.next =&n5;

    cout<< n1.data<<" "<< n2.data<<" "<<n3.data<<" "<<n4.data<<" "<<n5.data << endl;

}