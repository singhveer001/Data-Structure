#include<iostream>
#include<string>
using namespace std;

bool compareString(string a,string b){

        if(a.length() != b.length()){
            return false;
        }
        else{
            for(int i=0; i<a.length(); i++){
                if(a[i] != b[i]){
                    return false;
                }
            }
            return true;
        }
}

int main(){
    string a = "veer";
    string b = "Veer";
    int ans = compareString(a,b);
    if(ans){
        cout<<"Both are same";
    }
    else{
        cout<<"both are different";
    }
}