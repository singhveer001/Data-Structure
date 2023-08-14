#include<iostream>
using namespace std;

int main(){

    int arr[10]={23, 25 ,50, 55,65 };

    /*
    int temp[10];
    cout<<"Sze of temp "<<sizeof(temp)<<endl;
    cout<<"1st" << sizeof(&temp)<<endl;
    cout<<" 2nd "<< sizeof(*temp)<<endl;

    int *ptr=&temp[0];
    cout<<"Size of ptr " << sizeof(ptr) << endl; //ye 8 byte hona chahiye but mere me 4 aata hai

    cout<<"Size of ptr " << sizeof(*ptr) << endl;  // 710 pe 23 pada hai or vo 4byte ki memory le rha

     cout<<"Size of ptr " << sizeof(&ptr) << endl;

     */

/*
    // Adress of array and ptr
    int a[20] = {1,2,3,5};
    cout << " ->" << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "-> " << &p << endl;

*/

   int ar[10];

//ERROR
   //arr = arr+1;

    int *ptr = &ar[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

}