//Given number is prime or not
//prime- jo 2 se divide na hota ho 
//or jo khali 1 or khudke no se divide hota ho
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=2;
    
    while(i<n)
    {
        // divide ho gya to not prime
        if (n%i==0)
        {
            cout<<"not prime for "<<i<<endl;        
        }
        else
        {
            cout<<"prime for "<<i<<endl;
        }
        i=i+1;
    }
}