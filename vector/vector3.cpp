// Count the nummber of element strictly greater than value x
#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v(6);
    cout<<"Enter the vector";
    for (int i = 0; i <6; i++)
    {
        cin>>v[i];
    }
    
    cout<<"ENter x:";
    int x;
    cin>>x;

    int count=0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>x)
        {
            count++;
        }
        
    }
    cout<<"nummber of element strictly greater than value x is: "<<count<<endl;
    

}