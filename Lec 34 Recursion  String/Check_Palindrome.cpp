#include<iostream>
using namespace std;

bool Palindome(string &str, int i, int j){

    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }

    return Palindome(str, i+1, j-1);
}

int main(){

    string str= "abccba";
    cout<< endl;

   bool isPalindrome = Palindome(str, 0, str.length()-1 );

   if (isPalindrome)
   {
        cout<< " It is Palindrome" << endl;
   }
   else{
        cout<< " Not A Palindrome "<< endl;
   }
   cout<<endl;
}