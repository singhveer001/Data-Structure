/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
   
    if (a>0)
    {
        cout<<"a is positive";

    }
    else if(a<0)
    {
        cout<<"a is negative";
    }
    else{
        cout<<"A is zero";
    }
    
}
*/

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if (age>18)
    {
        cout<<"You are eligible for wedding"<<endl;
    }
    else if (age<18 && age>0)
    {
        cout<<"You are a kid"<<endl;
    }
    else
    {
        cout<<"you are not born";
    }

    
    
}