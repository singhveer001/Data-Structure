#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    for(int i=1; i <= n ; i++){
        
        // Printing space (space is 1 less than *(n))
        for(int k=1 ; k<=  n-i; k++){
            std:: cout<< " " <<" ";
        }

        // printing start
        for(int j=1; j<=n; j++ ){

            cout<< "*" <<" ";
        }
        cout<< endl;
        
    }
}