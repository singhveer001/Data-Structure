/*
char ch;
This is lower case   ---> 'a'------'z'
This is uppar case   ---> 'A'------''
This is numeric   ---> '0'------'9'
*/

#include<iostream>
using namespace std;
int main()
{
    char a;
    // A is 65
    // a is 97
    // 0 is 48   all are ascii value
    cin>>a;
    if (a >='a' && a <='z')
    {
        cout<<"This is lower case "<<endl;
    }
    else if(a >='A' && a <='Z')
    {
        cout<<"This is uppar case"<<endl;
    }
    else if (a >='0' && a <='9')
    {
        cout<<"This is numeric"<<endl;       
    }
    
    
}