/* print A B C
         D E F
         G H I  
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    char ch = 'A';
    while(i<=n)
    {
        int j= 1;
        while(j<=n)
        {

            cout<<ch<<" " ;
            ch=ch+1;
            j= j +1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}