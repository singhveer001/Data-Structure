/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i =1;
    int value =1;
    while (i<=n)
    {
        int j =1;
        while(j<=i){

            cout<< i ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i =1;
    int value =1;
    while (i<=n)
    {
        int j =1;
        while(j<=i){

            cout<< value<<" " ;
            value = value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}