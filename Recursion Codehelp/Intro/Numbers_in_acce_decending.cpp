#include<iostream>
using namespace std;

    void Print(int n){
        if(n<=0)
            return ;
        
        cout<< n << " ";
    
    // Recursivr call
       Print(n-1);
       
       cout<< n <<" ";
    }

int main(){
    int n;
    cout<<"enter the value of n"<< endl;
    cin>>n;

    cout<< "Printing in Deccending & then Accending order" <<endl;

    Print(n);

    cout<< endl;
}