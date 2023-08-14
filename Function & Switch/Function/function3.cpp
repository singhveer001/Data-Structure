#include<iostream>
using namespace std;

int totalbit(int n){
    int count=0;
    while(n != 0){         // condition tab tak chalegi jab tak n ke binar bits 0 na aane lage
        int bit= n & 1;
        if(bit == 1){
            count++; // agar bit 1 hua to vo count ho jayega
        }
        n=n >> 1;       //har ek no ke last bit ka & hone ke baad ek baar right shift kar denge
    }
    return count;       
}

    int main(){
        int a;
        cin>>a;
        totalbit(a);
        cout<<"Number of bit in a: "<< totalbit(a)<< endl;

        int b;
        cin>>b;
        totalbit(b);
        cout<<"Number of bit in b: "<< totalbit(b)<< endl;

        //FINAL ANSWER
        cout<< " Total no of bits: " << totalbit(a) + totalbit(b);
    }