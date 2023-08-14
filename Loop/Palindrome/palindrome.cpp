#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=n;
    int palindrome=0;
    while(n !=0){
        int lastdigit=n%10;
        palindrome=palindrome*10+lastdigit;
        n=n/10;
            }
             cout<<"Reverse of the number: "<<palindrome<<endl;
            if(palindrome==num){
                cout<<"no is palindrome "<<endl;
            }
            else{
                cout<<"no is not palindrome"<<endl;
            }
            return 0;
            
}