#include<iostream>
#include<list>  // it is created by use of doubly linked list
using namespace std;

int main(){

    list<int> l;
    l.push_back(1);
    l.push_front(3);

    for(int i : l){
        cout<<i<<" " ;
    }

    cout<<endl;

    list<int> li(5,22);
    cout<<"printing list";
    for(int i : li){
        cout<<i<<" " ;
    }

    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase :";
    for(int i : l){
        cout<<i<<" " ;
    }

        cout<<endl;
        
    cout<<"size of list: "<<l.size()<<endl;


}
