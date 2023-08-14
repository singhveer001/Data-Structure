#include<iostream>
using namespace std;

int main()
{
    int total_amount, notes,num;
    cout<<"enter total amount"<<endl;
    cin>>total_amount;
    cout<<"enter num"<<endl;
    cin>>num;

    switch (num)
    {
    case 1: 
    notes= total_amount/100; 
    cout<<"notes of 100 is: "<<notes<<endl; 
    total_amount = total_amount-notes* 100;
    

    case 2: 
    notes= total_amount/50; 
    cout<<"notes of 50 is :"<<notes<<endl; 
    total_amount= total_amount-notes*50;
    

    case 3: 
    notes = total_amount/20; 
    cout<<"notes of 20 is :"<<notes<<endl; 
    total_amount= total_amount-notes*20;
    

    case 4: 
    notes = total_amount /1; 
    cout<<"notes of 1 is: "<<notes<<endl;
    
    } 
    return 0;
}