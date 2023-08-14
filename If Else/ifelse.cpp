/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"value of a is: "<<a<<endl;
    if (a>0)
    {
        cout<<"a is positive";

    }
    else{
        cout<<"a is negative";
    }
    
}
*/


#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    int b=a+1;

    if((a=3)==b){
        cout<<"print a: "<<a<<endl;
    }
    else
    {
        cout<<"print a+1: "<<a+1<<endl;
    }
}