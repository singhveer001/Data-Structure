#include<iostream>
using namespace std;

bool returnPrime(int num){
          bool ans = true;  

      for(int i=2; i<=num/2 ; i++){
        if(num % i == 0){
            return false;
           //std:: cout<<i<<endl;
        }
        
    }
    return ans;
}

int main(){

    int n;
    std::cout<<"enter n"<<endl;
    std::cin>> n;

   

    if(n<=1){
        return false;
    }
    
  for(int i=2; i<=n ; i++){
        
        if(returnPrime(i)){
            std::cout<<i << endl;
        }
  }
    
    


}