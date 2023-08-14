// why we use reference variable 
#include<iostream>
using namespace std;

void update2(int &i){  //reference variable

    i++;
    
}

void update(int i){  

    i++;
    
}

/*
//we also use reference variable  in outpur return type
//it is very bad practice because all are local variable and it deleted after the loop
int & fun(int &i){
    int a= 10;
    int &ans =a;
    return ans;
}
*/

/*
// also same thing happens in pointer
int* fun1(int n){
    
    int  *ptr=&n;
    return ptr;
}
*/


// Reference variable use in  pass by reference --> i.e we only change name 
//In pass by value in function it create only copy 
// thats why it changes only in function and not updated in main function 
int main(){

    int i=5;

    cout<< "brfore update "<< i  <<endl;

    update(i);

    cout<< "after update "<< i;

    update2(i);

    cout<< "after update "<< i;

    
}