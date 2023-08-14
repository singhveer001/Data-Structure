#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    // first triangle
    for(int i=1; i <= n ; i++){

        for(int j=1; j<=i; j++ ){

            cout<< "*" <<" ";
        }

        // space
        for(int k=1 ; k<= 2* (n-i); k++){
            std:: cout<< " " <<" ";
        }
        // second triangle
         for(int j=1; j<=i; j++ ){

            cout<< "*" <<" ";
        }
        cout<< endl;  
    }

    // Reverse of upper part
    for(int i=n; i >= 1 ; i--){

        for(int j=1; j<=i; j++ ){

            cout<< "*" <<" ";
        }

        for(int k=1 ; k<= 2* (n-i); k++){
            std:: cout<< " " <<" ";
        }

         for(int j=1; j<=i; j++ ){

            cout<< "*" <<" ";
        }
        cout<< endl;  
    }


    
    return 0;

}