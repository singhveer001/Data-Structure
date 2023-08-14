//Given an array of interger a, move all the even interger at the beggining of the array followed by all the integers.
// The relative order of odd or even integer does not matter . Return any array that satisfy the condition

#include<iostream>
#include<vector>
using namespace std;


void sortbyparity(vector<int> &v){

    int leftptr=0;
    int rightptr=v.size()-1;

    while (leftptr<rightptr)
    {
        if (v[leftptr]%2==1 && v[rightptr]%2==0)
        {
            swap(v[leftptr],v[rightptr]);
            leftptr++;
            rightptr--;
        }
        if (v[leftptr]%2==0)
        {
            leftptr++;
        }
        if (v[rightptr]%2==1)
        {
            rightptr--;
        }
        
    }
    return ;
    
    
}
int main(){
    int n;
    cin>>n;

    vector<int> v;
    cout<<"enter values:"<<endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
     
     
    sortbyparity(v);
    
    cout<<"the parity is"<<endl;
     for (int i = 0; i < n; i++)
     {
         cout<<v[i]<<" ";
     }
     cout<<endl;
}