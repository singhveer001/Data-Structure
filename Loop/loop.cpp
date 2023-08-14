//For loop
//Table of 6 using for loop
/*#include<iostream>
using namespace std;
int main()
{
    int i,n;
    n=6;
    for(i=1;i<=10;i++)
    {
        cout<<i*n<<endl;
        
    }
    return 0;
}*/

/*
//While loop
//Table of 6 using while loop
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    i=1;
    n=6;
    while(i<=10)
    {
        cout<<i*n<<endl;
        i++;
    }
}
*/

//Do while loop
//Table of 10 using do while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,n=10;
    do{
        cout<<i*n<<endl;
        i++;
    }
    while(i<=10);

    return 0;

}