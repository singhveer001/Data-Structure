#include<iostream>
using namespace std;

/*
void Reverse(string &str, int i, int j){
    //Base case
    if(i>=j)
    return ;

    swap(str[i],str[j]);

    // Recursive relation

    Reverse(str, i+1, j-1);
}



int main(){

    string str=" veer ";

     Reverse(str,0,str.length()-1);

     cout<< str << endl;

    return 0;
}

*/

//2nd Approach 

void Reverse(string str,int index ,  string & ans){
    //Base case
    if(index == str.length())
    return ;

    //Head Recursion

    Reverse(str, index+1, ans);

    // Processing
    ans.push_back(str[index]);
}

int main(){

    string str=" VEERBHAN ";

    string ans = "";
     Reverse(str,0,ans);

    cout<< ans << endl;

    return 0;
}