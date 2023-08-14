#include<iostream>
#include<vector>
using namespace std;



bool TakeTime(vector<int> &boards, int k, int mid){

    int time=0;
    int painters=1;

    for(int i=0; i<boards.size(); i++){
        if(time+boards[i]<=mid ){
            time=time + boards[i];
        }

        else{
            painters++;
            if(painters > k || boards[i]>mid){
                return false;
            }
            time=boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    
    int start=0;
    int sum=0;
    for(int i=0; i<boards.size(); i++){
        sum=sum + boards[i];
    }
    int end=sum;

    // int mid=start+(end-start)/2;
    int ans=0;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(TakeTime(boards,k,mid)){
            ans=mid;
            end=mid-1;

        }
        else{

            start=mid+1;
        }
        // mid=start+(end-start)/2;
    }
    return ans;
}

int main() {

    cout<<"enter value  of n:"<<endl;
    int n;
    cin>>n;

    cout<<"Enter value of m:"<<endl;
    int k;
    cin>>k;

    vector<int>boards(n);
    cout<<"enter your Value in Yor array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>boards[i];
    }

    cout<<" Yor Ans is: "<<" " <<findLargestMinDistance(boards, k);
    
}
