// Count the nummber of occurence of particular element x
#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v(6);

    for (int i = 0; i <6; i++)
    {
        cin>>v[i];
    }
    
    cout<<"ENter x:";
    int x;
    cin>>x;

    int occurense =0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==x){
            occurense++;
        }
    }
    cout<<"Number of occurense :"<<occurense<<endl;
}

    
