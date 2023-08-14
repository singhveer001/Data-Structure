#include<iostream>
using namespace std;

int Power(int a , int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    //Recursive call
    int ans = Power(a, b/2);

    //if b even
    if(b%2==0){
        return ans * ans;
    }
    else{
        // if b is odd
        return a * ans * ans;
    }
}

int main(){

    int a, b;
    cin>> a >> b ;

   int ans = Power(a,b);

    cout<< a << "  Power "<< b << " is " << ans;
    
}