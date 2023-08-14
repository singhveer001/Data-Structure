#include<iostream>
using namespace std;

int main(){

    int n;
    std:: cin>> n;


    bool ans =false;
    if(n<=1){
        ans =false ;
    }

    for(int i=2; i<= n/2 ; i++){

        if(n%i == 0 ){
            ans =false;
            break;
    }
    }
    if(ans ){
        std:: cout<< " No is Prime"<< endl;
    }
    else{
        std::cout<< " No is not prime" <<endl;
    }
    return 0;
    
}