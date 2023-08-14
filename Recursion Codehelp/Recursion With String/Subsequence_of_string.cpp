#include<iostream>
using namespace std;

void  Subsequence(string str,int index , string ans){
    //Base Case
    if(index == str.length()){
        cout<< ans << endl;
        return ;
    }

    // Include 
    Subsequence(str, index+1 , ans+str[index]);

    // Exclude
    Subsequence(str, index+1, ans);

}

int main(){
        string str= "abc"; 

        string ans="";
        Subsequence(str,0,ans);

        return 0;
}