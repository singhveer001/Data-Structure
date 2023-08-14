#include<iostream>
using namespace std;

int fib(int n){
    //Base case
    if(n==0)
    return 0;

    /*
    if(n<=1)
    return n;
    */

    if(n==1)
    return 1;

    //Recursive relation

    int ans= fib(n-1)+ fib(n-2);
    return ans;

}
int main(){
    int n;
    cin>>n;
    fib(n);
    cout<< fib(n) << endl;
}