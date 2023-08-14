// Subtract the product and sum of the digits

#include<iostream>
using namespace std;
int main(){
    int n;   
    cin>>n;
    int prod=1;
    int sum=0;
    while(n !=0){

        int digit=n%10;  // it finds digit
        prod=prod * digit;
        sum=sum + digit;

        n= n / 10;    // ab integer me se find kiye hue digit ko nikalna hai to 10 se divide karenge

    }
    int ans = prod - sum;
    cout<<"ans is: "<<ans;
    return ans;


    }
