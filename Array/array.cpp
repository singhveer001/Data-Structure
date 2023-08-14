/*
Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

For ex: arr[]={1,2,3,4,5} n=5
Output: Odd Numbers = 3
 Even Numbers = 2
Explanation: The even numbers present in the array are 2,4 and the odd numbers present in the array
are 1,3 and 5.
*/

#include<iostream>
using namespace std;

    int main(){
        int array[]={1, 4,3 ,2, 5, 7 ,6,4};
        int even=0;
        int size=sizeof(array)/sizeof(array[0]);
        int odd=0;
        for (int i = 0; i <size; i++)
        {
            if (array[i]%2==0)
            {
                even+=1;
            }
            else{
                odd+=1;
            }
        }
        cout<<"Even numbers " <<even<<endl;
        cout<<"Odd numbers "<< odd;
        
    }