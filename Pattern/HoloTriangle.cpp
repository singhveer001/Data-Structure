#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    for(int i=1 ; i <= n ; i++){
       
        for (int j = 1; j <= n-i ; j++)
        {
            cout<< " "; 
        }
        
        if(i ==1 || i == n){

            for(int j=1; j<= (2*i)-1 ; j++){
                 cout<< "*";
            }

        }else{
            cout<< "*";
             for(int k =1; k<= (2*i )- 3; k++){

            cout<< " ";
            
        }
        cout<<"*";
        }
       
       
        
        cout<< endl;
    }
}