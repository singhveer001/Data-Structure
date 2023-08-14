/*
#include<iostream> 
using namespace std;


void update(int a){
    a=a/2;
    
}

int main(){
    int a=10;
    update(a);
    cout<<a<<endl;  // jo value jis function me hai usi me rhegi change nhi hogi 
                    // jaise main() me 10 value hai toh 10 hi hogi udate me new value jo 5 bani hai vo nhi hogi

}
*/

#include<iostream> 
using namespace std;


int update(int a){
    a=a/2;
    return a;
}

int main(){
    int a=10;
    update(a);    // value return hone pe bhi same value hogi function me hue update vali nhi
    cout<<a<<endl;  // jo value jis function me hai usi me rhegi change nhi hogi 
                    // jaise main() me 10 value hai toh 10 hi hogi udate me new value jo 5 bani hai vo nhi hogi

}