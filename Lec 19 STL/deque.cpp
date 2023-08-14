#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_back(4);
    d.push_back(5);
    d.push_front(2);

    // for(int i : d){
    //     cout<<i<<" ";
    // }
    // d.pop_back();

    // cout<<endl;
    // for(int i : d){
    //     cout<<i<<" ";
    // }

    cout<<"print first index element:"<<" "<<d.at(1)<<endl;

    cout<<" first element:"<<" "<<d.front()<<endl;
    cout<<" last elemet:"<<" "<< d.back()<<endl;
    cout<<"empty or not:"<<" "<< d.empty()<<endl;

    cout<<"Before erase size is:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase size is:"<<d.size()<<endl;

     for(int i : d){
        cout<<i<<" ";
    }


}