// Pattern question on for loops

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int value=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<value<<"";
            value=value+1;
        }
        cout<<endl;
    }
    return 0;
}
*/

#include<iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}