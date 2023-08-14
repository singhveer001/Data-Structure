#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // Define a vector of vector
    vector<vector<int> > stuff;

    //Fill the inner vector , ten insert it into the outer vector.
    for (int  i = 0; i < 4; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 5; j++)
        {
            temp.push_back(i);
        }
        stuff.push_back(temp);
    }

    // Display all the element to the user.

    for (int i = 0; i < stuff.size(); i++)
    {
        for (int j = 0; j < stuff[i].size(); j++)
        {
            cout<< stuff [i] [j];
        }
        cout<<endl;
    }
    
    


}