// Count the number of digit for given number n...

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;  
//     int digits=0;  //counts 
//     while(n>0){
//         digits++;
//         n=n/10;

//     }
//     cout<<"total digit: " << digits;
// }


//find the sum of digits for given number n..

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<"sum of digits "<<sum;
    return 0;
}