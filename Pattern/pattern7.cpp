/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i =1;
    
       while (i<=n)
    {
        int j =1;
        char ch = 'A' +i -1 ;
        while(j<=n){
            cout<< ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
*/

//Question 8.
//   A B C
//   A B C 
//   A B C 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i =1;
    
       while (i<=n)
    {
        int j =1;
        char ch = 'A'  ;
        while(j<=n){
            cout<< ch <<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
