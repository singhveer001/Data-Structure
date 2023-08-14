#include<iostream>
using namespace std;

int main(){

    int arr[10]={1,4,6};

    char ch[6]="abcde";

    cout << arr << endl;
    //attention here both print different --> arr print address && ch print hole content
    cout << ch << endl;

    char *c = &ch[0];
    //prints entire string
    cout << c << endl;  //  in normal case (int) it prints address of 1st position 


    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

}