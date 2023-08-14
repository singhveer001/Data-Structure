// Rfind the sum of following series
//  s= 1- 2 + 3 - 4 ...n

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    for (int i = 0; i <= n; i++)
    {
        if(i%2==1){  // for finfing number is odd
            sum=sum+i;   //if number is odd
        }
        else
        sum=sum-i;      // if number is even
        
    }
    cout<<sum;
    return 0;
}
    