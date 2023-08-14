// Given an integer array 'a' sorted in non decresing order, 
// Return an array of the square of each number sorted in non decreasing order.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// -10 -3  2  4  5
// left_ptr= 0,1,2,3
// right_ptr=4,3,2
// ans= { 100 25 16 9 4}


void SortedSquaredArray(vector<int> &v){

    vector<int> ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while (left_ptr<=right_ptr)
    {
            // without std:: it give error when we use abs(library)
        if(std::abs(v[left_ptr])<std::abs(v[right_ptr])){

            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
            }
    }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
         }
        cout<<endl;
    

    

}
int main(){
     
    int n;
    cin>>n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    SortedSquaredArray(v);
    return 0;
}