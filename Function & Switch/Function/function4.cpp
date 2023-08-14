//power of any number
/*
#include<iostream>
using namespace std;

int square(int a, int b){
    int power=a;    
    for (int i = 2; i <=b; i++)
    {
        power=power* a;
    }
    return power;
}

int main(){

    int a;
    cin>>a;;
    int b;
    cin>>b;
    cout<<square(a,b);
}
*/

//square of first five natural no
#include<iostream>
using namespace std;

int square(int a){
    return a*a;

}
    int main(){
        
        for (int i = 1; i <=5; i++)
        {
            cout<<square(i)<<endl;
        }
        
    }
