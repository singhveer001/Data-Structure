// this code i understand but when i run i dont understand  (this code is love stl lec)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &vec){

    cout<< "size"<< vec.size()<< endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<< vec[i] <<" ";
    }
    cout<<endl;
    

}

int main(){

    int N ;
    cin>>N;
    vector<vector<int> > vec;

    for (int i = 0; i <N ; i++)
    {
        int n; cin>>n;
        vector<int> temp;
        for (int j= 0; i < n; i++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }
    vec[0].push_back(10);
    for (int i = 0; i < vec.size(); i++)
    {
        printVec(vec[i]);
    }
    cout<< vec[0] [1];
    
    
}